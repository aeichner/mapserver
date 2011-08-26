/*
 *  Copyright 2010 Thomas Bonfort
 *
 *  Licensed under the Apache License, Version 2.0 (the "License");
 *  you may not use this file except in compliance with the License.
 *  You may obtain a copy of the License at
 *
 *      http://www.apache.org/licenses/LICENSE-2.0
 *
 *  Unless required by applicable law or agreed to in writing, software
 *  distributed under the License is distributed on an "AS IS" BASIS,
 *  WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 *  See the License for the specific language governing permissions and
 *  limitations under the License.
 */

#include "geocache.h"
#include <apr_strings.h>
#include <math.h>

/** \addtogroup services */
/** @{ */


void _create_capabilities_kml(geocache_context *ctx, geocache_request_get_capabilities *req, char *url, char *path_info, geocache_cfg *cfg) {
   geocache_request_get_capabilities_kml *request = (geocache_request_get_capabilities_kml*)req;
   char *caps;
   const char *onlineresource = apr_table_get(cfg->metadata,"url");
   double bbox[4];  
   if(!onlineresource) {
      onlineresource = url;
   }
   request->request.mime_type = apr_pstrdup(ctx->pool,"application/vnd.google-earth.kml+xml");

   geocache_tileset_tile_bbox(request->tile,bbox);


   caps = apr_psprintf(ctx->pool,"<?xml version=\"1.0\" encoding=\"UTF-8\"?>\n"
         "<kml xmlns=\"http://earth.google.com/kml/2.1\">\n"
         "  <Document>\n"
         "    <Region>\n"
         "      <Lod>\n"
         "        <minLodPixels>128</minLodPixels><maxLodPixels>%d</maxLodPixels>\n"
         "      </Lod>\n"
         "      <LatLonAltBox>\n"
         "        <north>%f</north><south>%f</south>\n"
         "        <east>%f</east><west>%f</west>\n"
         "      </LatLonAltBox>\n"
         "    </Region>\n"
         "    <GroundOverlay>\n"
         "      <drawOrder>0</drawOrder>\n"
         "      <Icon>\n"
         "        <href>%s/tms/1.0.0/%s@%s/%d/%d/%d.%s</href>\n"
         "      </Icon>\n"
         "      <LatLonBox>\n"
         "        <north>%f</north><south>%f</south>\n"
         "        <east>%f</east><west>%f</west>\n"
         "      </LatLonBox>\n"
         "    </GroundOverlay>\n",
      (request->tile->z == request->tile->grid_link->grid->nlevels-1)?-1:512,
      bbox[3],bbox[1],bbox[2],bbox[0],
      onlineresource,request->tile->tileset->name,request->tile->grid_link->grid->name,
      request->tile->z, request->tile->x,request->tile->y,
      (request->tile->tileset->format)?request->tile->tileset->format->extension:"png",
      bbox[3],bbox[1],bbox[2],bbox[0]);

   if(request->tile->z < request->tile->grid_link->grid->nlevels-1) {
      int i,j;
      for(i=0;i<=1;i++) {
         for(j=0;j<=1;j++) {
            geocache_tile *t = geocache_tileset_tile_create(ctx->pool,request->tile->tileset, request->tile->grid_link);
            double bb[4];
            t->x = (request->tile->x << 1) +i;
            t->y = (request->tile->y << 1) +j;
            t->z = request->tile->z + 1;
            geocache_tileset_tile_bbox(t,bb);

            caps = apr_psprintf(ctx->pool,"%s"
                  "    <NetworkLink>\n"
                  "      <name>%d%d%d</name>\n"
                  "      <Region>\n"
                  "        <Lod>\n"
                  "          <minLodPixels>128</minLodPixels><maxLodPixels>-1</maxLodPixels>\n"
                  "        </Lod>\n"
                  "        <LatLonAltBox>\n"
                  "          <north>%f</north><south>%f</south>\n"
                  "          <east>%f</east><west>%f</west>\n"
                  "        </LatLonAltBox>\n"
                  "      </Region>\n"
                  "      <Link>\n"
                  "        <href>%s/kml/%s@%s/%d/%d/%d.kml</href>\n"
                  "        <viewRefreshMode>onRegion</viewRefreshMode>\n"
                  "      </Link>\n"
                  "    </NetworkLink>\n",
                  caps,t->x,t->y,t->z,
                  bb[3],bb[1],bb[2],bb[0],
                  onlineresource,request->tile->tileset->name,request->tile->grid_link->grid->name,
                  t->z, t->x,t->y);
         }
      }
   }

   caps = apr_pstrcat(ctx->pool,caps,"  </Document>\n</kml>\n",NULL);
   request->request.capabilities = caps;


}

/**
 * \brief parse a KML request
 * \private \memberof geocache_service_kml
 * \sa geocache_service::parse_request()
 */
void _geocache_service_kml_parse_request(geocache_context *ctx, geocache_service *this, geocache_request **request,
      const char *cpathinfo, apr_table_t *params, geocache_cfg *config) {
   int index = 0;
   char *last, *key, *endptr;
   geocache_tileset *tileset = NULL;
   geocache_grid_link *grid_link = NULL;
   char *pathinfo = NULL;
   int x=-1,y=-1,z=-1;
  
   if(cpathinfo) {
      pathinfo = apr_pstrdup(ctx->pool,cpathinfo);
      /* parse a path_info like /layer@grid/0/0/0.kml */
      for (key = apr_strtok(pathinfo, "/", &last); key != NULL;
            key = apr_strtok(NULL, "/", &last)) {
         if(!*key) continue; /* skip an empty string, could happen if the url contains // */
         switch(++index) {
         case 1: /* layer name */
            tileset = geocache_configuration_get_tileset(config,key);
            if(!tileset) {
               /*tileset not found directly, test if it was given as "name@grid" notation*/
               char *tname = apr_pstrdup(ctx->pool,key);
               char *gname = tname;
               int i;
               while(*gname) {
                  if(*gname == '@') {
                     *gname = '\0';
                     gname++;
                     break;
                  }
                  gname++;
               }
               if(!gname) {
                  ctx->set_error(ctx,404, "received kml request with invalid layer %s", key);
                  return;
               }
               tileset = geocache_configuration_get_tileset(config,tname);
               if(!tileset) {
                  ctx->set_error(ctx,404, "received kml request with invalid layer %s", tname);
                  return;
               }
               for(i=0;i<tileset->grid_links->nelts;i++) {
                  geocache_grid_link *sgrid = APR_ARRAY_IDX(tileset->grid_links,i,geocache_grid_link*);
                  if(!strcmp(sgrid->grid->name,gname)) {
                     grid_link = sgrid;
                     break;
                  }
               }
               if(!grid_link) {
                  ctx->set_error(ctx,404, "received kml request with invalid grid %s", gname);
                  return;
               }

            } else {
               grid_link = APR_ARRAY_IDX(tileset->grid_links,0,geocache_grid_link*);
            }
            break;
         case 2:
            z = (int)strtol(key,&endptr,10);
            if(*endptr != 0) {
               ctx->set_error(ctx,404, "received kml request %s with invalid z %s", pathinfo, key);
               return;
            }
            break;
         case 3:
            x = (int)strtol(key,&endptr,10);
            if(*endptr != 0) {
               ctx->set_error(ctx,404, "received kml request %s with invalid x %s", pathinfo, key);
               return;
            }
            break;
         case 4:
            y = (int)strtol(key,&endptr,10);
            if(*endptr != '.') {
               ctx->set_error(ctx,404, "received kml request %s with invalid y %s", pathinfo, key);
               return;
            }
            endptr++;
            if(strcmp(endptr,"kml")) {
               ctx->set_error(ctx,404, "received kml request with invalid extension %s", pathinfo, endptr);
               return;
            }
            break;
         default:
            ctx->set_error(ctx,404, "received kml request %s with invalid parameter %s", pathinfo, key);
            return;
         }
      }
   }
   if(index == 4) {
      geocache_request_get_capabilities_kml *req = (geocache_request_get_capabilities_kml*)apr_pcalloc(
            ctx->pool,sizeof(geocache_request_get_capabilities_kml));
      req->request.request.type = GEOCACHE_REQUEST_GET_CAPABILITIES;
      req->tile = geocache_tileset_tile_create(ctx->pool, tileset, grid_link);
      req->tile->x = x;
      req->tile->y = y;
      req->tile->z = z;
      geocache_tileset_tile_validate(ctx,req->tile);
      GC_CHECK_ERROR(ctx);
      *request = (geocache_request*)req;
      return;
   }
   else {
      ctx->set_error(ctx,404, "received kml request %s with wrong number of arguments", pathinfo);
      return;
   }
}

geocache_service* geocache_service_kml_create(geocache_context *ctx) {
   geocache_service_kml* service = (geocache_service_kml*)apr_pcalloc(ctx->pool, sizeof(geocache_service_kml));
   if(!service) {
      ctx->set_error(ctx, 500, "failed to allocate kml service");
      return NULL;
   }
   service->service.url_prefix = apr_pstrdup(ctx->pool,"kml");
   service->service.type = GEOCACHE_SERVICE_KML;
   service->service.parse_request = _geocache_service_kml_parse_request;
   service->service.create_capabilities_response = _create_capabilities_kml;
   return (geocache_service*)service;
}

/** @} */
/* vim: ai ts=3 sts=3 et sw=3
*/
