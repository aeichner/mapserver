/* A Bison parser, made by GNU Bison 2.5.  */

/* Bison implementation for Yacc-like parsers in C
   
      Copyright (C) 1984, 1989-1990, 2000-2011 Free Software Foundation, Inc.
   
   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.
   
   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.
   
   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <http://www.gnu.org/licenses/>.  */

/* As a special exception, you may create a larger work that contains
   part or all of the Bison parser skeleton and distribute that work
   under terms of your choice, so long as that work isn't itself a
   parser generator using the skeleton or a modified version thereof
   as a parser skeleton.  Alternatively, if you modify or redistribute
   the parser skeleton itself, you may (at your option) remove this
   special exception, which will cause the skeleton and the resulting
   Bison output files to be licensed under the GNU General Public
   License without this special exception.
   
   This special exception was added by the Free Software Foundation in
   version 2.2 of Bison.  */

/* C LALR(1) parser skeleton written by Richard Stallman, by
   simplifying the original so-called "semantic" parser.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "2.5"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 1

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1

/* Using locations.  */
#define YYLSP_NEEDED 0



/* Copy the first part of user declarations.  */

/* Line 268 of yacc.c  */
#line 5 "/usr/src/mapserver/mapserver-master/mapparser.y"

/* C declarations */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <time.h>

#include "mapserver.h" /* for TRUE/FALSE and REGEX includes */
#include "maptime.h" /* for time comparison routines */
#include "mapprimitive.h" /* for shapeObj */

#include "mapparser.h" /* for YYSTYPE in the function prototype for yylex() */

int yylex(YYSTYPE *, parseObj *); /* prototype functions, defined after the grammar */
int yyerror(parseObj *, const char *);


/* Line 268 of yacc.c  */
#line 90 "/usr/src/mapserver/mapserver-master/mapparser.c"

/* Enabling traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* Enabling the token table.  */
#ifndef YYTOKEN_TABLE
# define YYTOKEN_TABLE 0
#endif


/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     NUMBER = 258,
     STRING = 259,
     TIME = 260,
     SHAPE = 261,
     OR = 262,
     AND = 263,
     NOT = 264,
     IRE = 265,
     IEQ = 266,
     IN = 267,
     GE = 268,
     LE = 269,
     GT = 270,
     LT = 271,
     NE = 272,
     EQ = 273,
     RE = 274,
     DWITHIN = 275,
     BEYOND = 276,
     CONTAINS = 277,
     WITHIN = 278,
     CROSSES = 279,
     OVERLAPS = 280,
     TOUCHES = 281,
     DISJOINT = 282,
     INTERSECTS = 283,
     ROUND = 284,
     COMMIFY = 285,
     LENGTH = 286,
     AREA = 287,
     TOSTRING = 288,
     SMOOTHSIA = 289,
     GENERALIZE = 290,
     SIMPLIFYPT = 291,
     SIMPLIFY = 292,
     DIFFERENCE = 293,
     YYBUFFER = 294,
     NEG = 295
   };
#endif



#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
{

/* Line 293 of yacc.c  */
#line 30 "/usr/src/mapserver/mapserver-master/mapparser.y"

  double dblval;
  int intval;  
  char *strval;  
  struct tm tmval;
  shapeObj *shpval;



/* Line 293 of yacc.c  */
#line 176 "/usr/src/mapserver/mapserver-master/mapparser.c"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif


/* Copy the second part of user declarations.  */


/* Line 343 of yacc.c  */
#line 188 "/usr/src/mapserver/mapserver-master/mapparser.c"

#ifdef short
# undef short
#endif

#ifdef YYTYPE_UINT8
typedef YYTYPE_UINT8 yytype_uint8;
#else
typedef unsigned char yytype_uint8;
#endif

#ifdef YYTYPE_INT8
typedef YYTYPE_INT8 yytype_int8;
#elif (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
typedef signed char yytype_int8;
#else
typedef short int yytype_int8;
#endif

#ifdef YYTYPE_UINT16
typedef YYTYPE_UINT16 yytype_uint16;
#else
typedef unsigned short int yytype_uint16;
#endif

#ifdef YYTYPE_INT16
typedef YYTYPE_INT16 yytype_int16;
#else
typedef short int yytype_int16;
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif ! defined YYSIZE_T && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned int
# endif
#endif

#define YYSIZE_MAXIMUM ((YYSIZE_T) -1)

#ifndef YY_
# if defined YYENABLE_NLS && YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(msgid) dgettext ("bison-runtime", msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(msgid) msgid
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(e) ((void) (e))
#else
# define YYUSE(e) /* empty */
#endif

/* Identity function, used to suppress warnings about constant conditions.  */
#ifndef lint
# define YYID(n) (n)
#else
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static int
YYID (int yyi)
#else
static int
YYID (yyi)
    int yyi;
#endif
{
  return yyi;
}
#endif

#if ! defined yyoverflow || YYERROR_VERBOSE

/* The parser invokes alloca or malloc; define the necessary symbols.  */

# ifdef YYSTACK_USE_ALLOCA
#  if YYSTACK_USE_ALLOCA
#   ifdef __GNUC__
#    define YYSTACK_ALLOC __builtin_alloca
#   elif defined __BUILTIN_VA_ARG_INCR
#    include <alloca.h> /* INFRINGES ON USER NAME SPACE */
#   elif defined _AIX
#    define YYSTACK_ALLOC __alloca
#   elif defined _MSC_VER
#    include <malloc.h> /* INFRINGES ON USER NAME SPACE */
#    define alloca _alloca
#   else
#    define YYSTACK_ALLOC alloca
#    if ! defined _ALLOCA_H && ! defined EXIT_SUCCESS && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#     ifndef EXIT_SUCCESS
#      define EXIT_SUCCESS 0
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's `empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (YYID (0))
#  ifndef YYSTACK_ALLOC_MAXIMUM
    /* The OS might guarantee only one guard page at the bottom of the stack,
       and a page size can be as small as 4096 bytes.  So we cannot safely
       invoke alloca (N) if N exceeds 4096.  Use a slightly smaller number
       to allow for a few compiler-allocated temporary stack slots.  */
#   define YYSTACK_ALLOC_MAXIMUM 4032 /* reasonable circa 2006 */
#  endif
# else
#  define YYSTACK_ALLOC YYMALLOC
#  define YYSTACK_FREE YYFREE
#  ifndef YYSTACK_ALLOC_MAXIMUM
#   define YYSTACK_ALLOC_MAXIMUM YYSIZE_MAXIMUM
#  endif
#  if (defined __cplusplus && ! defined EXIT_SUCCESS \
       && ! ((defined YYMALLOC || defined malloc) \
	     && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef EXIT_SUCCESS
#    define EXIT_SUCCESS 0
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined EXIT_SUCCESS && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined EXIT_SUCCESS && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* ! defined yyoverflow || YYERROR_VERBOSE */


#if (! defined yyoverflow \
     && (! defined __cplusplus \
	 || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yytype_int16 yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

# define YYCOPY_NEEDED 1

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)				\
    do									\
      {									\
	YYSIZE_T yynewbytes;						\
	YYCOPY (&yyptr->Stack_alloc, Stack, yysize);			\
	Stack = &yyptr->Stack_alloc;					\
	yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
	yyptr += yynewbytes / sizeof (*yyptr);				\
      }									\
    while (YYID (0))

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from FROM to TO.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(To, From, Count) \
      __builtin_memcpy (To, From, (Count) * sizeof (*(From)))
#  else
#   define YYCOPY(To, From, Count)		\
      do					\
	{					\
	  YYSIZE_T yyi;				\
	  for (yyi = 0; yyi < (Count); yyi++)	\
	    (To)[yyi] = (From)[yyi];		\
	}					\
      while (YYID (0))
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  47
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   415

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  50
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  7
/* YYNRULES -- Number of rules.  */
#define YYNRULES  82
/* YYNRULES -- Number of states.  */
#define YYNSTATES  201

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   295

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,    44,     2,     2,
      47,    48,    42,    40,    49,    41,     2,    43,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,    46,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    45
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     4,     6,     8,    10,    12,    16,    20,
      24,    28,    32,    36,    40,    44,    47,    50,    54,    58,
      62,    66,    70,    74,    78,    82,    86,    90,    94,    98,
     102,   106,   110,   114,   118,   122,   126,   130,   134,   138,
     142,   146,   150,   154,   158,   162,   166,   170,   174,   178,
     182,   186,   190,   194,   196,   200,   204,   208,   212,   216,
     220,   223,   227,   232,   237,   244,   246,   250,   257,   264,
     271,   278,   285,   290,   297,   306,   317,   319,   323,   327,
     334,   339,   341
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      51,     0,    -1,    -1,    52,    -1,    53,    -1,    55,    -1,
      54,    -1,    52,     7,    52,    -1,    52,     8,    52,    -1,
      52,     7,    53,    -1,    52,     8,    53,    -1,    53,     7,
      52,    -1,    53,     8,    52,    -1,    53,     7,    53,    -1,
      53,     8,    53,    -1,     9,    52,    -1,     9,    53,    -1,
      55,    19,    55,    -1,    55,    10,    55,    -1,    53,    18,
      53,    -1,    53,    17,    53,    -1,    53,    15,    53,    -1,
      53,    16,    53,    -1,    53,    13,    53,    -1,    53,    14,
      53,    -1,    47,    52,    48,    -1,    55,    18,    55,    -1,
      55,    17,    55,    -1,    55,    15,    55,    -1,    55,    16,
      55,    -1,    55,    13,    55,    -1,    55,    14,    55,    -1,
      56,    18,    56,    -1,    56,    17,    56,    -1,    56,    15,
      56,    -1,    56,    16,    56,    -1,    56,    13,    56,    -1,
      56,    14,    56,    -1,    55,    12,    55,    -1,    53,    12,
      55,    -1,    53,    11,    53,    -1,    55,    11,    55,    -1,
      56,    11,    56,    -1,    54,    18,    54,    -1,    54,    28,
      54,    -1,    54,    27,    54,    -1,    54,    26,    54,    -1,
      54,    25,    54,    -1,    54,    24,    54,    -1,    54,    23,
      54,    -1,    54,    22,    54,    -1,    54,    20,    54,    -1,
      54,    21,    54,    -1,     3,    -1,    47,    53,    48,    -1,
      53,    40,    53,    -1,    53,    41,    53,    -1,    53,    42,
      53,    -1,    53,    44,    53,    -1,    53,    43,    53,    -1,
      41,    53,    -1,    53,    46,    53,    -1,    31,    47,    55,
      48,    -1,    32,    47,    54,    48,    -1,    29,    47,    53,
      49,    53,    48,    -1,     6,    -1,    47,    54,    48,    -1,
      39,    47,    54,    49,    53,    48,    -1,    38,    47,    54,
      49,    54,    48,    -1,    37,    47,    54,    49,    53,    48,
      -1,    36,    47,    54,    49,    53,    48,    -1,    35,    47,
      54,    49,    53,    48,    -1,    34,    47,    54,    48,    -1,
      34,    47,    54,    49,    53,    48,    -1,    34,    47,    54,
      49,    53,    49,    53,    48,    -1,    34,    47,    54,    49,
      53,    49,    53,    49,    55,    48,    -1,     4,    -1,    47,
      55,    48,    -1,    55,    40,    55,    -1,    33,    47,    53,
      49,    55,    48,    -1,    30,    47,    55,    48,    -1,     5,
      -1,    47,    56,    48,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    65,    65,    66,    79,    93,   106,   117,   125,   134,
     142,   151,   159,   168,   176,   185,   186,   187,   202,   217,
     223,   229,   235,   241,   247,   253,   254,   262,   270,   279,
     287,   295,   303,   309,   315,   321,   327,   333,   339,   360,
     381,   387,   395,   402,   413,   424,   435,   446,   457,   468,
     479,   490,   500,   512,   513,   514,   515,   516,   517,   518,
     525,   526,   527,   528,   536,   539,   540,   541,   551,   561,
     571,   581,   591,   601,   611,   621,   634,   635,   636,   640,
     644,   650,   651
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "NUMBER", "STRING", "TIME", "SHAPE",
  "OR", "AND", "NOT", "IRE", "IEQ", "IN", "GE", "LE", "GT", "LT", "NE",
  "EQ", "RE", "DWITHIN", "BEYOND", "CONTAINS", "WITHIN", "CROSSES",
  "OVERLAPS", "TOUCHES", "DISJOINT", "INTERSECTS", "ROUND", "COMMIFY",
  "LENGTH", "AREA", "TOSTRING", "SMOOTHSIA", "GENERALIZE", "SIMPLIFYPT",
  "SIMPLIFY", "DIFFERENCE", "YYBUFFER", "'+'", "'-'", "'*'", "'/'", "'%'",
  "NEG", "'^'", "'('", "')'", "','", "$accept", "input", "logical_exp",
  "math_exp", "shape_exp", "string_exp", "time_exp", 0
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[YYLEX-NUM] -- Internal token number corresponding to
   token YYLEX-NUM.  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
      43,    45,    42,    47,    37,   295,    94,    40,    41,    44
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    50,    51,    51,    51,    51,    51,    52,    52,    52,
      52,    52,    52,    52,    52,    52,    52,    52,    52,    52,
      52,    52,    52,    52,    52,    52,    52,    52,    52,    52,
      52,    52,    52,    52,    52,    52,    52,    52,    52,    52,
      52,    52,    52,    52,    52,    52,    52,    52,    52,    52,
      52,    52,    52,    53,    53,    53,    53,    53,    53,    53,
      53,    53,    53,    53,    53,    54,    54,    54,    54,    54,
      54,    54,    54,    54,    54,    54,    55,    55,    55,    55,
      55,    56,    56
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     0,     1,     1,     1,     1,     3,     3,     3,
       3,     3,     3,     3,     3,     2,     2,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     1,     3,     3,     3,     3,     3,     3,
       2,     3,     4,     4,     6,     1,     3,     6,     6,     6,
       6,     6,     4,     6,     8,    10,     1,     3,     3,     6,
       4,     1,     3
};

/* YYDEFACT[STATE-NAME] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       2,    53,    76,    81,    65,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       3,     4,     6,     5,     0,    15,    16,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    60,     0,     0,     0,     0,     0,     1,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    25,    54,
      66,    77,    82,     7,     9,     8,    10,    11,    13,    12,
      14,    40,    39,    23,    24,    21,    22,    20,    19,    55,
      56,    57,    59,    58,    61,    43,    51,    52,    50,    49,
      48,    47,    46,    45,    44,    18,    41,    38,    30,    31,
      28,    29,    27,    26,    17,    78,     0,    42,    36,    37,
      34,    35,    33,    32,     0,     0,    80,    62,     0,    63,
       0,    72,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    64,    79,    73,
       0,    71,    70,    69,    68,    67,     0,    74,     0,     0,
      75
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
      -1,    19,    20,    21,    27,    28,    24
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -46
static const yytype_int16 yypact[] =
{
      85,   -46,   -46,   -46,   -46,    85,   -45,   -30,   -24,   -21,
      -8,    26,    40,    46,    78,    80,    81,    13,    85,    21,
      -3,   205,   293,   272,   253,   -46,   263,   293,   272,    13,
      -1,    -1,   167,    13,   167,   167,   167,   167,   167,   167,
      13,     2,    27,   145,   274,   225,   120,   -46,    85,    85,
      85,    85,    13,    -1,    13,    13,    13,    13,    13,    13,
      13,    13,    13,    13,    13,    13,   167,   167,   167,   167,
     167,   167,   167,   167,   167,   167,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -4,    -4,    -4,
      -4,    -4,    -4,    -4,   304,    -1,   -26,   -20,   167,    82,
     314,   -11,    90,   101,   102,   105,   106,   -33,   -46,   -46,
     -46,   -46,   -46,   121,   216,   -46,   263,   121,   216,   -46,
     263,   369,   124,   369,   369,   369,   369,   369,   369,    61,
      61,     2,     2,     2,     2,   -46,   -46,   -46,   -46,   -46,
     -46,   -46,   -46,   -46,   -46,   124,   124,   124,   124,   124,
     124,   124,   124,   124,   124,   -46,    -4,   -46,   -46,   -46,
     -46,   -46,   -46,   -46,    13,    -7,   -46,   -46,   128,   -46,
      -1,   -46,    13,    13,    13,    13,   167,    13,   129,   324,
     126,   283,   333,   342,   351,   130,   360,   -46,   -46,   -46,
      13,   -46,   -46,   -46,   -46,   -46,   294,   -46,    -1,   127,
     -46
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int8 yypgoto[] =
{
     -46,   -46,     1,     7,    74,     0,     9
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -1
static const yytype_uint8 yytable[] =
{
      23,     3,    29,     2,    48,    49,    25,    60,    61,    62,
      63,    64,    26,    65,    86,   109,     1,    30,    45,    42,
      86,    47,   166,    31,    41,    43,    32,    46,   167,     7,
      96,    97,    10,    86,    48,    49,    94,   171,   172,    33,
     100,   111,     6,   156,     8,     9,    95,   107,    65,   113,
     115,   117,   119,   122,    17,   114,   116,   118,   120,   121,
      40,   123,   124,   125,   126,   127,   128,   129,   130,   131,
     132,   133,   134,    34,    22,   108,   145,   146,   147,   148,
     149,   150,   151,   152,   153,   154,   155,    35,     1,     2,
       3,     4,    44,    36,     5,   165,   157,   158,   159,   160,
     161,   162,   163,    62,    63,    64,    99,    65,   101,   102,
     103,   104,   105,   106,     6,     7,     8,     9,    10,    11,
      12,    13,    14,    15,    16,    37,    17,    38,    39,    49,
     169,    87,    18,    88,    89,    90,    91,    92,    93,   173,
     135,   136,   137,   138,   139,   140,   141,   142,   143,   144,
     174,   175,    50,    51,   176,   177,    52,    53,    54,    55,
      56,    57,    58,    59,    86,   178,    86,    86,   112,     0,
     180,   179,   168,     4,   188,   200,   110,   112,   194,   181,
     182,   183,   184,     0,   186,    60,    61,    62,    63,    64,
       0,    65,     0,   109,     0,     0,     0,   196,   199,     0,
       0,    11,    12,    13,    14,    15,    16,     0,     0,     0,
       0,     0,    50,    51,    98,     0,    52,    53,    54,    55,
      56,    57,    58,    59,    51,     0,     0,    52,    53,    54,
      55,    56,    57,    58,    59,    76,    77,    78,    79,    80,
      81,    82,    83,    84,    85,    60,    61,    62,    63,    64,
     185,    65,     0,     0,     0,     0,    60,    61,    62,    63,
      64,     0,    65,     0,    87,    86,    88,    89,    90,    91,
      92,    93,     0,   111,    52,    53,    54,    55,    56,    57,
      58,    59,    76,    77,    78,    79,    80,    81,    82,    83,
      84,    85,    66,     0,    67,    68,    69,    70,    71,    72,
      73,    74,    75,    60,    61,    62,    63,    64,     0,    65,
       0,    66,    86,    67,    68,    69,    70,    71,    72,    73,
      74,    75,   110,    60,    61,    62,    63,    64,     0,    65,
       0,   189,   190,     0,    60,    61,    62,    63,    64,     0,
      65,     0,   197,   198,    60,    61,    62,    63,    64,     0,
      65,     0,     0,   164,    60,    61,    62,    63,    64,     0,
      65,     0,     0,   170,    60,    61,    62,    63,    64,     0,
      65,     0,   187,    60,    61,    62,    63,    64,     0,    65,
       0,   191,    60,    61,    62,    63,    64,     0,    65,     0,
     192,    60,    61,    62,    63,    64,     0,    65,     0,   193,
      60,    61,    62,    63,    64,     0,    65,     0,   195,    60,
      61,    62,    63,    64,     0,    65
};

#define yypact_value_is_default(yystate) \
  ((yystate) == (-46))

#define yytable_value_is_error(yytable_value) \
  YYID (0)

static const yytype_int16 yycheck[] =
{
       0,     5,    47,     4,     7,     8,     5,    40,    41,    42,
      43,    44,     5,    46,    40,    48,     3,    47,    18,    18,
      40,     0,    48,    47,    17,    18,    47,    18,    48,    30,
      30,    31,    33,    40,     7,     8,    29,    48,    49,    47,
      33,    48,    29,    47,    31,    32,    47,    40,    46,    48,
      49,    50,    51,    53,    41,    48,    49,    50,    51,    52,
      47,    54,    55,    56,    57,    58,    59,    60,    61,    62,
      63,    64,    65,    47,     0,    48,    76,    77,    78,    79,
      80,    81,    82,    83,    84,    85,    86,    47,     3,     4,
       5,     6,    18,    47,     9,    95,    87,    88,    89,    90,
      91,    92,    93,    42,    43,    44,    32,    46,    34,    35,
      36,    37,    38,    39,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    47,    41,    47,    47,     8,
      48,    11,    47,    13,    14,    15,    16,    17,    18,    49,
      66,    67,    68,    69,    70,    71,    72,    73,    74,    75,
      49,    49,     7,     8,    49,    49,    11,    12,    13,    14,
      15,    16,    17,    18,    40,   156,    40,    40,    48,    -1,
     170,   164,    98,     6,    48,    48,    48,    48,    48,   172,
     173,   174,   175,    -1,   177,    40,    41,    42,    43,    44,
      -1,    46,    -1,    48,    -1,    -1,    -1,   190,   198,    -1,
      -1,    34,    35,    36,    37,    38,    39,    -1,    -1,    -1,
      -1,    -1,     7,     8,    47,    -1,    11,    12,    13,    14,
      15,    16,    17,    18,     8,    -1,    -1,    11,    12,    13,
      14,    15,    16,    17,    18,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    40,    41,    42,    43,    44,
     176,    46,    -1,    -1,    -1,    -1,    40,    41,    42,    43,
      44,    -1,    46,    -1,    11,    40,    13,    14,    15,    16,
      17,    18,    -1,    48,    11,    12,    13,    14,    15,    16,
      17,    18,    10,    11,    12,    13,    14,    15,    16,    17,
      18,    19,    18,    -1,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    40,    41,    42,    43,    44,    -1,    46,
      -1,    18,    40,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    48,    40,    41,    42,    43,    44,    -1,    46,
      -1,    48,    49,    -1,    40,    41,    42,    43,    44,    -1,
      46,    -1,    48,    49,    40,    41,    42,    43,    44,    -1,
      46,    -1,    -1,    49,    40,    41,    42,    43,    44,    -1,
      46,    -1,    -1,    49,    40,    41,    42,    43,    44,    -1,
      46,    -1,    48,    40,    41,    42,    43,    44,    -1,    46,
      -1,    48,    40,    41,    42,    43,    44,    -1,    46,    -1,
      48,    40,    41,    42,    43,    44,    -1,    46,    -1,    48,
      40,    41,    42,    43,    44,    -1,    46,    -1,    48,    40,
      41,    42,    43,    44,    -1,    46
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     3,     4,     5,     6,     9,    29,    30,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    41,    47,    51,
      52,    53,    54,    55,    56,    52,    53,    54,    55,    47,
      47,    47,    47,    47,    47,    47,    47,    47,    47,    47,
      47,    53,    52,    53,    54,    55,    56,     0,     7,     8,
       7,     8,    11,    12,    13,    14,    15,    16,    17,    18,
      40,    41,    42,    43,    44,    46,    18,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    19,    40,    11,    13,    14,
      15,    16,    17,    18,    53,    47,    55,    55,    47,    54,
      53,    54,    54,    54,    54,    54,    54,    53,    48,    48,
      48,    48,    48,    52,    53,    52,    53,    52,    53,    52,
      53,    53,    55,    53,    53,    53,    53,    53,    53,    53,
      53,    53,    53,    53,    53,    54,    54,    54,    54,    54,
      54,    54,    54,    54,    54,    55,    55,    55,    55,    55,
      55,    55,    55,    55,    55,    55,    47,    56,    56,    56,
      56,    56,    56,    56,    49,    55,    48,    48,    54,    48,
      49,    48,    49,    49,    49,    49,    49,    49,    56,    53,
      55,    53,    53,    53,    53,    54,    53,    48,    48,    48,
      49,    48,    48,    48,    48,    48,    53,    48,    49,    55,
      48
};

#define yyerrok		(yyerrstatus = 0)
#define yyclearin	(yychar = YYEMPTY)
#define YYEMPTY		(-2)
#define YYEOF		0

#define YYACCEPT	goto yyacceptlab
#define YYABORT		goto yyabortlab
#define YYERROR		goto yyerrorlab


/* Like YYERROR except do call yyerror.  This remains here temporarily
   to ease the transition to the new meaning of YYERROR, for GCC.
   Once GCC version 2 has supplanted version 1, this can go.  However,
   YYFAIL appears to be in use.  Nevertheless, it is formally deprecated
   in Bison 2.4.2's NEWS entry, where a plan to phase it out is
   discussed.  */

#define YYFAIL		goto yyerrlab
#if defined YYFAIL
  /* This is here to suppress warnings from the GCC cpp's
     -Wunused-macros.  Normally we don't worry about that warning, but
     some users do, and we want to make it easy for users to remove
     YYFAIL uses, which will produce warnings from Bison 2.5.  */
#endif

#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)					\
do								\
  if (yychar == YYEMPTY && yylen == 1)				\
    {								\
      yychar = (Token);						\
      yylval = (Value);						\
      YYPOPSTACK (1);						\
      goto yybackup;						\
    }								\
  else								\
    {								\
      yyerror (p, YY_("syntax error: cannot back up")); \
      YYERROR;							\
    }								\
while (YYID (0))


#define YYTERROR	1
#define YYERRCODE	256


/* YYLLOC_DEFAULT -- Set CURRENT to span from RHS[1] to RHS[N].
   If N is 0, then set CURRENT to the empty location which ends
   the previous symbol: RHS[0] (always defined).  */

#define YYRHSLOC(Rhs, K) ((Rhs)[K])
#ifndef YYLLOC_DEFAULT
# define YYLLOC_DEFAULT(Current, Rhs, N)				\
    do									\
      if (YYID (N))                                                    \
	{								\
	  (Current).first_line   = YYRHSLOC (Rhs, 1).first_line;	\
	  (Current).first_column = YYRHSLOC (Rhs, 1).first_column;	\
	  (Current).last_line    = YYRHSLOC (Rhs, N).last_line;		\
	  (Current).last_column  = YYRHSLOC (Rhs, N).last_column;	\
	}								\
      else								\
	{								\
	  (Current).first_line   = (Current).last_line   =		\
	    YYRHSLOC (Rhs, 0).last_line;				\
	  (Current).first_column = (Current).last_column =		\
	    YYRHSLOC (Rhs, 0).last_column;				\
	}								\
    while (YYID (0))
#endif


/* This macro is provided for backward compatibility. */

#ifndef YY_LOCATION_PRINT
# define YY_LOCATION_PRINT(File, Loc) ((void) 0)
#endif


/* YYLEX -- calling `yylex' with the right arguments.  */

#ifdef YYLEX_PARAM
# define YYLEX yylex (&yylval, YYLEX_PARAM)
#else
# define YYLEX yylex (&yylval, p)
#endif

/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)			\
do {						\
  if (yydebug)					\
    YYFPRINTF Args;				\
} while (YYID (0))

# define YY_SYMBOL_PRINT(Title, Type, Value, Location)			  \
do {									  \
  if (yydebug)								  \
    {									  \
      YYFPRINTF (stderr, "%s ", Title);					  \
      yy_symbol_print (stderr,						  \
		  Type, Value, p); \
      YYFPRINTF (stderr, "\n");						  \
    }									  \
} while (YYID (0))


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep, parseObj *p)
#else
static void
yy_symbol_value_print (yyoutput, yytype, yyvaluep, p)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
    parseObj *p;
#endif
{
  if (!yyvaluep)
    return;
  YYUSE (p);
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# else
  YYUSE (yyoutput);
# endif
  switch (yytype)
    {
      default:
	break;
    }
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep, parseObj *p)
#else
static void
yy_symbol_print (yyoutput, yytype, yyvaluep, p)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
    parseObj *p;
#endif
{
  if (yytype < YYNTOKENS)
    YYFPRINTF (yyoutput, "token %s (", yytname[yytype]);
  else
    YYFPRINTF (yyoutput, "nterm %s (", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep, p);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_stack_print (yytype_int16 *yybottom, yytype_int16 *yytop)
#else
static void
yy_stack_print (yybottom, yytop)
    yytype_int16 *yybottom;
    yytype_int16 *yytop;
#endif
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)				\
do {								\
  if (yydebug)							\
    yy_stack_print ((Bottom), (Top));				\
} while (YYID (0))


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_reduce_print (YYSTYPE *yyvsp, int yyrule, parseObj *p)
#else
static void
yy_reduce_print (yyvsp, yyrule, p)
    YYSTYPE *yyvsp;
    int yyrule;
    parseObj *p;
#endif
{
  int yynrhs = yyr2[yyrule];
  int yyi;
  unsigned long int yylno = yyrline[yyrule];
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
	     yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr, yyrhs[yyprhs[yyrule] + yyi],
		       &(yyvsp[(yyi + 1) - (yynrhs)])
		       		       , p);
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)		\
do {					\
  if (yydebug)				\
    yy_reduce_print (yyvsp, Rule, p); \
} while (YYID (0))

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args)
# define YY_SYMBOL_PRINT(Title, Type, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !YYDEBUG */


/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef	YYINITDEPTH
# define YYINITDEPTH 200
#endif

/* YYMAXDEPTH -- maximum size the stacks can grow to (effective only
   if the built-in stack extension method is used).

   Do not make this value too large; the results are undefined if
   YYSTACK_ALLOC_MAXIMUM < YYSTACK_BYTES (YYMAXDEPTH)
   evaluated with infinite-precision integer arithmetic.  */

#ifndef YYMAXDEPTH
# define YYMAXDEPTH 10000
#endif


#if YYERROR_VERBOSE

# ifndef yystrlen
#  if defined __GLIBC__ && defined _STRING_H
#   define yystrlen strlen
#  else
/* Return the length of YYSTR.  */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static YYSIZE_T
yystrlen (const char *yystr)
#else
static YYSIZE_T
yystrlen (yystr)
    const char *yystr;
#endif
{
  YYSIZE_T yylen;
  for (yylen = 0; yystr[yylen]; yylen++)
    continue;
  return yylen;
}
#  endif
# endif

# ifndef yystpcpy
#  if defined __GLIBC__ && defined _STRING_H && defined _GNU_SOURCE
#   define yystpcpy stpcpy
#  else
/* Copy YYSRC to YYDEST, returning the address of the terminating '\0' in
   YYDEST.  */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static char *
yystpcpy (char *yydest, const char *yysrc)
#else
static char *
yystpcpy (yydest, yysrc)
    char *yydest;
    const char *yysrc;
#endif
{
  char *yyd = yydest;
  const char *yys = yysrc;

  while ((*yyd++ = *yys++) != '\0')
    continue;

  return yyd - 1;
}
#  endif
# endif

# ifndef yytnamerr
/* Copy to YYRES the contents of YYSTR after stripping away unnecessary
   quotes and backslashes, so that it's suitable for yyerror.  The
   heuristic is that double-quoting is unnecessary unless the string
   contains an apostrophe, a comma, or backslash (other than
   backslash-backslash).  YYSTR is taken from yytname.  If YYRES is
   null, do not copy; instead, return the length of what the result
   would have been.  */
static YYSIZE_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYSIZE_T yyn = 0;
      char const *yyp = yystr;

      for (;;)
	switch (*++yyp)
	  {
	  case '\'':
	  case ',':
	    goto do_not_strip_quotes;

	  case '\\':
	    if (*++yyp != '\\')
	      goto do_not_strip_quotes;
	    /* Fall through.  */
	  default:
	    if (yyres)
	      yyres[yyn] = *yyp;
	    yyn++;
	    break;

	  case '"':
	    if (yyres)
	      yyres[yyn] = '\0';
	    return yyn;
	  }
    do_not_strip_quotes: ;
    }

  if (! yyres)
    return yystrlen (yystr);

  return yystpcpy (yyres, yystr) - yyres;
}
# endif

/* Copy into *YYMSG, which is of size *YYMSG_ALLOC, an error message
   about the unexpected token YYTOKEN for the state stack whose top is
   YYSSP.

   Return 0 if *YYMSG was successfully written.  Return 1 if *YYMSG is
   not large enough to hold the message.  In that case, also set
   *YYMSG_ALLOC to the required number of bytes.  Return 2 if the
   required number of bytes is too large to store.  */
static int
yysyntax_error (YYSIZE_T *yymsg_alloc, char **yymsg,
                yytype_int16 *yyssp, int yytoken)
{
  YYSIZE_T yysize0 = yytnamerr (0, yytname[yytoken]);
  YYSIZE_T yysize = yysize0;
  YYSIZE_T yysize1;
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = 0;
  /* Arguments of yyformat. */
  char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
  /* Number of reported tokens (one for the "unexpected", one per
     "expected"). */
  int yycount = 0;

  /* There are many possibilities here to consider:
     - Assume YYFAIL is not used.  It's too flawed to consider.  See
       <http://lists.gnu.org/archive/html/bison-patches/2009-12/msg00024.html>
       for details.  YYERROR is fine as it does not invoke this
       function.
     - If this state is a consistent state with a default action, then
       the only way this function was invoked is if the default action
       is an error action.  In that case, don't check for expected
       tokens because there are none.
     - The only way there can be no lookahead present (in yychar) is if
       this state is a consistent state with a default action.  Thus,
       detecting the absence of a lookahead is sufficient to determine
       that there is no unexpected or expected token to report.  In that
       case, just report a simple "syntax error".
     - Don't assume there isn't a lookahead just because this state is a
       consistent state with a default action.  There might have been a
       previous inconsistent state, consistent state with a non-default
       action, or user semantic action that manipulated yychar.
     - Of course, the expected token list depends on states to have
       correct lookahead information, and it depends on the parser not
       to perform extra reductions after fetching a lookahead from the
       scanner and before detecting a syntax error.  Thus, state merging
       (from LALR or IELR) and default reductions corrupt the expected
       token list.  However, the list is correct for canonical LR with
       one exception: it will still contain any token that will not be
       accepted due to an error action in a later state.
  */
  if (yytoken != YYEMPTY)
    {
      int yyn = yypact[*yyssp];
      yyarg[yycount++] = yytname[yytoken];
      if (!yypact_value_is_default (yyn))
        {
          /* Start YYX at -YYN if negative to avoid negative indexes in
             YYCHECK.  In other words, skip the first -YYN actions for
             this state because they are default actions.  */
          int yyxbegin = yyn < 0 ? -yyn : 0;
          /* Stay within bounds of both yycheck and yytname.  */
          int yychecklim = YYLAST - yyn + 1;
          int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
          int yyx;

          for (yyx = yyxbegin; yyx < yyxend; ++yyx)
            if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR
                && !yytable_value_is_error (yytable[yyx + yyn]))
              {
                if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
                  {
                    yycount = 1;
                    yysize = yysize0;
                    break;
                  }
                yyarg[yycount++] = yytname[yyx];
                yysize1 = yysize + yytnamerr (0, yytname[yyx]);
                if (! (yysize <= yysize1
                       && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
                  return 2;
                yysize = yysize1;
              }
        }
    }

  switch (yycount)
    {
# define YYCASE_(N, S)                      \
      case N:                               \
        yyformat = S;                       \
      break
      YYCASE_(0, YY_("syntax error"));
      YYCASE_(1, YY_("syntax error, unexpected %s"));
      YYCASE_(2, YY_("syntax error, unexpected %s, expecting %s"));
      YYCASE_(3, YY_("syntax error, unexpected %s, expecting %s or %s"));
      YYCASE_(4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
      YYCASE_(5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
# undef YYCASE_
    }

  yysize1 = yysize + yystrlen (yyformat);
  if (! (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
    return 2;
  yysize = yysize1;

  if (*yymsg_alloc < yysize)
    {
      *yymsg_alloc = 2 * yysize;
      if (! (yysize <= *yymsg_alloc
             && *yymsg_alloc <= YYSTACK_ALLOC_MAXIMUM))
        *yymsg_alloc = YYSTACK_ALLOC_MAXIMUM;
      return 1;
    }

  /* Avoid sprintf, as that infringes on the user's name space.
     Don't have undefined behavior even if the translation
     produced a string with the wrong number of "%s"s.  */
  {
    char *yyp = *yymsg;
    int yyi = 0;
    while ((*yyp = *yyformat) != '\0')
      if (*yyp == '%' && yyformat[1] == 's' && yyi < yycount)
        {
          yyp += yytnamerr (yyp, yyarg[yyi++]);
          yyformat += 2;
        }
      else
        {
          yyp++;
          yyformat++;
        }
  }
  return 0;
}
#endif /* YYERROR_VERBOSE */

/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep, parseObj *p)
#else
static void
yydestruct (yymsg, yytype, yyvaluep, p)
    const char *yymsg;
    int yytype;
    YYSTYPE *yyvaluep;
    parseObj *p;
#endif
{
  YYUSE (yyvaluep);
  YYUSE (p);

  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  switch (yytype)
    {

      default:
	break;
    }
}


/* Prevent warnings from -Wmissing-prototypes.  */
#ifdef YYPARSE_PARAM
#if defined __STDC__ || defined __cplusplus
int yyparse (void *YYPARSE_PARAM);
#else
int yyparse ();
#endif
#else /* ! YYPARSE_PARAM */
#if defined __STDC__ || defined __cplusplus
int yyparse (parseObj *p);
#else
int yyparse ();
#endif
#endif /* ! YYPARSE_PARAM */


/*----------.
| yyparse.  |
`----------*/

#ifdef YYPARSE_PARAM
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void *YYPARSE_PARAM)
#else
int
yyparse (YYPARSE_PARAM)
    void *YYPARSE_PARAM;
#endif
#else /* ! YYPARSE_PARAM */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (parseObj *p)
#else
int
yyparse (p)
    parseObj *p;
#endif
#endif
{
/* The lookahead symbol.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;

    /* Number of syntax errors so far.  */
    int yynerrs;

    int yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       `yyss': related to states.
       `yyvs': related to semantic values.

       Refer to the stacks thru separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* The state stack.  */
    yytype_int16 yyssa[YYINITDEPTH];
    yytype_int16 *yyss;
    yytype_int16 *yyssp;

    /* The semantic value stack.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs;
    YYSTYPE *yyvsp;

    YYSIZE_T yystacksize;

  int yyn;
  int yyresult;
  /* Lookahead token as an internal (translated) token number.  */
  int yytoken;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;

#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  yytoken = 0;
  yyss = yyssa;
  yyvs = yyvsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */

  /* Initialize stack pointers.
     Waste one element of value and location stack
     so that they stay on the same level as the state stack.
     The wasted elements are never initialized.  */
  yyssp = yyss;
  yyvsp = yyvs;

  goto yysetstate;

/*------------------------------------------------------------.
| yynewstate -- Push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
 yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;

 yysetstate:
  *yyssp = yystate;

  if (yyss + yystacksize - 1 <= yyssp)
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYSIZE_T yysize = yyssp - yyss + 1;

#ifdef yyoverflow
      {
	/* Give user a chance to reallocate the stack.  Use copies of
	   these so that the &'s don't force the real ones into
	   memory.  */
	YYSTYPE *yyvs1 = yyvs;
	yytype_int16 *yyss1 = yyss;

	/* Each stack pointer address is followed by the size of the
	   data in use in that stack, in bytes.  This used to be a
	   conditional around just the two extra args, but that might
	   be undefined if yyoverflow is a macro.  */
	yyoverflow (YY_("memory exhausted"),
		    &yyss1, yysize * sizeof (*yyssp),
		    &yyvs1, yysize * sizeof (*yyvsp),
		    &yystacksize);

	yyss = yyss1;
	yyvs = yyvs1;
      }
#else /* no yyoverflow */
# ifndef YYSTACK_RELOCATE
      goto yyexhaustedlab;
# else
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
	goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
	yystacksize = YYMAXDEPTH;

      {
	yytype_int16 *yyss1 = yyss;
	union yyalloc *yyptr =
	  (union yyalloc *) YYSTACK_ALLOC (YYSTACK_BYTES (yystacksize));
	if (! yyptr)
	  goto yyexhaustedlab;
	YYSTACK_RELOCATE (yyss_alloc, yyss);
	YYSTACK_RELOCATE (yyvs_alloc, yyvs);
#  undef YYSTACK_RELOCATE
	if (yyss1 != yyssa)
	  YYSTACK_FREE (yyss1);
      }
# endif
#endif /* no yyoverflow */

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YYDPRINTF ((stderr, "Stack size increased to %lu\n",
		  (unsigned long int) yystacksize));

      if (yyss + yystacksize - 1 <= yyssp)
	YYABORT;
    }

  YYDPRINTF ((stderr, "Entering state %d\n", yystate));

  if (yystate == YYFINAL)
    YYACCEPT;

  goto yybackup;

/*-----------.
| yybackup.  |
`-----------*/
yybackup:

  /* Do appropriate processing given the current state.  Read a
     lookahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to lookahead token.  */
  yyn = yypact[yystate];
  if (yypact_value_is_default (yyn))
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid lookahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = YYLEX;
    }

  if (yychar <= YYEOF)
    {
      yychar = yytoken = YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else
    {
      yytoken = YYTRANSLATE (yychar);
      YY_SYMBOL_PRINT ("Next token is", yytoken, &yylval, &yylloc);
    }

  /* If the proper action on seeing token YYTOKEN is to reduce or to
     detect an error, take that action.  */
  yyn += yytoken;
  if (yyn < 0 || YYLAST < yyn || yycheck[yyn] != yytoken)
    goto yydefault;
  yyn = yytable[yyn];
  if (yyn <= 0)
    {
      if (yytable_value_is_error (yyn))
        goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the lookahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);

  /* Discard the shifted token.  */
  yychar = YYEMPTY;

  yystate = yyn;
  *++yyvsp = yylval;

  goto yynewstate;


/*-----------------------------------------------------------.
| yydefault -- do the default action for the current state.  |
`-----------------------------------------------------------*/
yydefault:
  yyn = yydefact[yystate];
  if (yyn == 0)
    goto yyerrlab;
  goto yyreduce;


/*-----------------------------.
| yyreduce -- Do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     `$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
        case 3:

/* Line 1806 of yacc.c  */
#line 66 "/usr/src/mapserver/mapserver-master/mapparser.y"
    {
      switch(p->type) {
      case(MS_PARSE_TYPE_BOOLEAN):
        p->result.intval = (yyvsp[(1) - (1)].intval); 
        break;
      case(MS_PARSE_TYPE_STRING):
        if((yyvsp[(1) - (1)].intval)) 
          p->result.strval = strdup("true");
        else
          p->result.strval = strdup("false");
        break;
      }
    }
    break;

  case 4:

/* Line 1806 of yacc.c  */
#line 79 "/usr/src/mapserver/mapserver-master/mapparser.y"
    {
      switch(p->type) {
      case(MS_PARSE_TYPE_BOOLEAN):
        if((yyvsp[(1) - (1)].dblval) != 0)
          p->result.intval = MS_TRUE;
        else
          p->result.intval = MS_FALSE;			    
        break;
      case(MS_PARSE_TYPE_STRING):
        p->result.strval = (char *)malloc(64); /* large enough for a double */
        snprintf(p->result.strval, 64, "%g", (yyvsp[(1) - (1)].dblval));
        break;
      }
    }
    break;

  case 5:

/* Line 1806 of yacc.c  */
#line 93 "/usr/src/mapserver/mapserver-master/mapparser.y"
    {
      switch(p->type) {
      case(MS_PARSE_TYPE_BOOLEAN):
        if((yyvsp[(1) - (1)].strval)) /* string is not NULL */
          p->result.intval = MS_TRUE;
        else
          p->result.intval = MS_FALSE;
        break;
      case(MS_PARSE_TYPE_STRING):
        p->result.strval = (yyvsp[(1) - (1)].strval); // strdup($1);
        break;
      }
    }
    break;

  case 6:

/* Line 1806 of yacc.c  */
#line 106 "/usr/src/mapserver/mapserver-master/mapparser.y"
    {
    switch(p->type) {
    case(MS_PARSE_TYPE_SHAPE):
      p->result.shpval = (yyvsp[(1) - (1)].shpval);
      p->result.shpval->scratch = MS_FALSE;
      break;
    }
  }
    break;

  case 7:

/* Line 1806 of yacc.c  */
#line 117 "/usr/src/mapserver/mapserver-master/mapparser.y"
    {
	                                 if((yyvsp[(1) - (3)].intval) == MS_TRUE)
		                           (yyval.intval) = MS_TRUE;
		                         else if((yyvsp[(3) - (3)].intval) == MS_TRUE)
			                   (yyval.intval) = MS_TRUE;
			                 else
			                   (yyval.intval) = MS_FALSE;
		                       }
    break;

  case 8:

/* Line 1806 of yacc.c  */
#line 125 "/usr/src/mapserver/mapserver-master/mapparser.y"
    {
	                                 if((yyvsp[(1) - (3)].intval) == MS_TRUE) {
			                   if((yyvsp[(3) - (3)].intval) == MS_TRUE)
			                     (yyval.intval) = MS_TRUE;
			                   else
			                     (yyval.intval) = MS_FALSE;
			                 } else
			                   (yyval.intval) = MS_FALSE;
		                       }
    break;

  case 9:

/* Line 1806 of yacc.c  */
#line 134 "/usr/src/mapserver/mapserver-master/mapparser.y"
    {
	                                 if((yyvsp[(1) - (3)].intval) == MS_TRUE)
		                           (yyval.intval) = MS_TRUE;
		                         else if((yyvsp[(3) - (3)].dblval) != 0)
			                   (yyval.intval) = MS_TRUE;
			                 else
			                   (yyval.intval) = MS_FALSE;
		                       }
    break;

  case 10:

/* Line 1806 of yacc.c  */
#line 142 "/usr/src/mapserver/mapserver-master/mapparser.y"
    {
	                                 if((yyvsp[(1) - (3)].intval) == MS_TRUE) {
			                   if((yyvsp[(3) - (3)].dblval) != 0)
			                     (yyval.intval) = MS_TRUE;
			                   else
			                     (yyval.intval) = MS_FALSE;
			                 } else
			                   (yyval.intval) = MS_FALSE;
		                       }
    break;

  case 11:

/* Line 1806 of yacc.c  */
#line 151 "/usr/src/mapserver/mapserver-master/mapparser.y"
    {
	                                 if((yyvsp[(1) - (3)].dblval) != 0)
		                           (yyval.intval) = MS_TRUE;
		                         else if((yyvsp[(3) - (3)].intval) == MS_TRUE)
			                   (yyval.intval) = MS_TRUE;
			                 else
			                   (yyval.intval) = MS_FALSE;
		                       }
    break;

  case 12:

/* Line 1806 of yacc.c  */
#line 159 "/usr/src/mapserver/mapserver-master/mapparser.y"
    {
	                                 if((yyvsp[(1) - (3)].dblval) != 0) {
			                   if((yyvsp[(3) - (3)].intval) == MS_TRUE)
			                     (yyval.intval) = MS_TRUE;
			                   else
			                     (yyval.intval) = MS_FALSE;
			                 } else
			                   (yyval.intval) = MS_FALSE;
		                       }
    break;

  case 13:

/* Line 1806 of yacc.c  */
#line 168 "/usr/src/mapserver/mapserver-master/mapparser.y"
    {
	                                 if((yyvsp[(1) - (3)].dblval) != 0)
		                           (yyval.intval) = MS_TRUE;
		                         else if((yyvsp[(3) - (3)].dblval) != 0)
			                   (yyval.intval) = MS_TRUE;
			                 else
			                   (yyval.intval) = MS_FALSE;
		                       }
    break;

  case 14:

/* Line 1806 of yacc.c  */
#line 176 "/usr/src/mapserver/mapserver-master/mapparser.y"
    {
	                                 if((yyvsp[(1) - (3)].dblval) != 0) {
			                   if((yyvsp[(3) - (3)].dblval) != 0)
			                     (yyval.intval) = MS_TRUE;
			                   else
			                     (yyval.intval) = MS_FALSE;
			                 } else
			                   (yyval.intval) = MS_FALSE;
		                       }
    break;

  case 15:

/* Line 1806 of yacc.c  */
#line 185 "/usr/src/mapserver/mapserver-master/mapparser.y"
    { (yyval.intval) = !(yyvsp[(2) - (2)].intval); }
    break;

  case 16:

/* Line 1806 of yacc.c  */
#line 186 "/usr/src/mapserver/mapserver-master/mapparser.y"
    { (yyval.intval) = !(yyvsp[(2) - (2)].dblval); }
    break;

  case 17:

/* Line 1806 of yacc.c  */
#line 187 "/usr/src/mapserver/mapserver-master/mapparser.y"
    {
                                         ms_regex_t re;

                                         if(ms_regcomp(&re, (yyvsp[(3) - (3)].strval), MS_REG_EXTENDED|MS_REG_NOSUB) != 0) 
                                           (yyval.intval) = MS_FALSE;

                                         if(ms_regexec(&re, (yyvsp[(1) - (3)].strval), 0, NULL, 0) == 0)
                                  	   (yyval.intval) = MS_TRUE;
			                 else
			                   (yyval.intval) = MS_FALSE;

                                         ms_regfree(&re);
                                         free((yyvsp[(1) - (3)].strval));
                                         free((yyvsp[(3) - (3)].strval));
                                       }
    break;

  case 18:

/* Line 1806 of yacc.c  */
#line 202 "/usr/src/mapserver/mapserver-master/mapparser.y"
    {
                                         ms_regex_t re;

                                         if(ms_regcomp(&re, (yyvsp[(3) - (3)].strval), MS_REG_EXTENDED|MS_REG_NOSUB|MS_REG_ICASE) != 0) 
                                           (yyval.intval) = MS_FALSE;

                                         if(ms_regexec(&re, (yyvsp[(1) - (3)].strval), 0, NULL, 0) == 0)
                                  	   (yyval.intval) = MS_TRUE;
			                 else
			                   (yyval.intval) = MS_FALSE;

                                         ms_regfree(&re);
                                         free((yyvsp[(1) - (3)].strval));
                                         free((yyvsp[(3) - (3)].strval));
                                       }
    break;

  case 19:

/* Line 1806 of yacc.c  */
#line 217 "/usr/src/mapserver/mapserver-master/mapparser.y"
    {
	                                 if((yyvsp[(1) - (3)].dblval) == (yyvsp[(3) - (3)].dblval))
	 		                   (yyval.intval) = MS_TRUE;
			                 else
			                   (yyval.intval) = MS_FALSE;
		                       }
    break;

  case 20:

/* Line 1806 of yacc.c  */
#line 223 "/usr/src/mapserver/mapserver-master/mapparser.y"
    {
	                                 if((yyvsp[(1) - (3)].dblval) != (yyvsp[(3) - (3)].dblval))
			                   (yyval.intval) = MS_TRUE;
			                 else
			                   (yyval.intval) = MS_FALSE;
		                       }
    break;

  case 21:

/* Line 1806 of yacc.c  */
#line 229 "/usr/src/mapserver/mapserver-master/mapparser.y"
    {	                                 
	                                 if((yyvsp[(1) - (3)].dblval) > (yyvsp[(3) - (3)].dblval))
			                   (yyval.intval) = MS_TRUE;
			                 else
			                   (yyval.intval) = MS_FALSE;
		                       }
    break;

  case 22:

/* Line 1806 of yacc.c  */
#line 235 "/usr/src/mapserver/mapserver-master/mapparser.y"
    {
	                                 if((yyvsp[(1) - (3)].dblval) < (yyvsp[(3) - (3)].dblval))
			                   (yyval.intval) = MS_TRUE;
			                 else
			                   (yyval.intval) = MS_FALSE;
		                       }
    break;

  case 23:

/* Line 1806 of yacc.c  */
#line 241 "/usr/src/mapserver/mapserver-master/mapparser.y"
    {	                                 
	                                 if((yyvsp[(1) - (3)].dblval) >= (yyvsp[(3) - (3)].dblval))
			                   (yyval.intval) = MS_TRUE;
			                 else
			                   (yyval.intval) = MS_FALSE;
		                       }
    break;

  case 24:

/* Line 1806 of yacc.c  */
#line 247 "/usr/src/mapserver/mapserver-master/mapparser.y"
    {
	                                 if((yyvsp[(1) - (3)].dblval) <= (yyvsp[(3) - (3)].dblval))
			                   (yyval.intval) = MS_TRUE;
			                 else
			                   (yyval.intval) = MS_FALSE;
		                       }
    break;

  case 25:

/* Line 1806 of yacc.c  */
#line 253 "/usr/src/mapserver/mapserver-master/mapparser.y"
    { (yyval.intval) = (yyvsp[(2) - (3)].intval); }
    break;

  case 26:

/* Line 1806 of yacc.c  */
#line 254 "/usr/src/mapserver/mapserver-master/mapparser.y"
    {
                                         if(strcmp((yyvsp[(1) - (3)].strval), (yyvsp[(3) - (3)].strval)) == 0)
					   (yyval.intval) = MS_TRUE;
					 else
					   (yyval.intval) = MS_FALSE;
					 free((yyvsp[(1) - (3)].strval));
					 free((yyvsp[(3) - (3)].strval));
				       }
    break;

  case 27:

/* Line 1806 of yacc.c  */
#line 262 "/usr/src/mapserver/mapserver-master/mapparser.y"
    {
                                         if(strcmp((yyvsp[(1) - (3)].strval), (yyvsp[(3) - (3)].strval)) != 0)
					   (yyval.intval) = MS_TRUE;
					 else
					   (yyval.intval) = MS_FALSE;
					 free((yyvsp[(1) - (3)].strval));
					 free((yyvsp[(3) - (3)].strval));
				       }
    break;

  case 28:

/* Line 1806 of yacc.c  */
#line 270 "/usr/src/mapserver/mapserver-master/mapparser.y"
    {
                                         if(strcmp((yyvsp[(1) - (3)].strval), (yyvsp[(3) - (3)].strval)) > 0)
					   (yyval.intval) = MS_TRUE;
					 else
					   (yyval.intval) = MS_FALSE;
					 /* printf("Not freeing: %s >= %s\n",$1, $3); */
					 free((yyvsp[(1) - (3)].strval));
					 free((yyvsp[(3) - (3)].strval));
                                       }
    break;

  case 29:

/* Line 1806 of yacc.c  */
#line 279 "/usr/src/mapserver/mapserver-master/mapparser.y"
    {
                                         if(strcmp((yyvsp[(1) - (3)].strval), (yyvsp[(3) - (3)].strval)) < 0)
					   (yyval.intval) = MS_TRUE;
					 else
					   (yyval.intval) = MS_FALSE;
					 free((yyvsp[(1) - (3)].strval));
					 free((yyvsp[(3) - (3)].strval));
                                       }
    break;

  case 30:

/* Line 1806 of yacc.c  */
#line 287 "/usr/src/mapserver/mapserver-master/mapparser.y"
    {
                                         if(strcmp((yyvsp[(1) - (3)].strval), (yyvsp[(3) - (3)].strval)) >= 0)
					   (yyval.intval) = MS_TRUE;
					 else
					   (yyval.intval) = MS_FALSE;
					 free((yyvsp[(1) - (3)].strval));
					 free((yyvsp[(3) - (3)].strval));
                                       }
    break;

  case 31:

/* Line 1806 of yacc.c  */
#line 295 "/usr/src/mapserver/mapserver-master/mapparser.y"
    {
                                         if(strcmp((yyvsp[(1) - (3)].strval), (yyvsp[(3) - (3)].strval)) <= 0)
					   (yyval.intval) = MS_TRUE;
					 else
					   (yyval.intval) = MS_FALSE;
					 free((yyvsp[(1) - (3)].strval));
					 free((yyvsp[(3) - (3)].strval));
                                       }
    break;

  case 32:

/* Line 1806 of yacc.c  */
#line 303 "/usr/src/mapserver/mapserver-master/mapparser.y"
    {
                                     if(msTimeCompare(&((yyvsp[(1) - (3)].tmval)), &((yyvsp[(3) - (3)].tmval))) == 0)
				       (yyval.intval) = MS_TRUE;
				     else
				       (yyval.intval) = MS_FALSE;
				   }
    break;

  case 33:

/* Line 1806 of yacc.c  */
#line 309 "/usr/src/mapserver/mapserver-master/mapparser.y"
    {
                                     if(msTimeCompare(&((yyvsp[(1) - (3)].tmval)), &((yyvsp[(3) - (3)].tmval))) != 0)
				       (yyval.intval) = MS_TRUE;
				     else
				       (yyval.intval) = MS_FALSE;
				   }
    break;

  case 34:

/* Line 1806 of yacc.c  */
#line 315 "/usr/src/mapserver/mapserver-master/mapparser.y"
    {
                                     if(msTimeCompare(&((yyvsp[(1) - (3)].tmval)), &((yyvsp[(3) - (3)].tmval))) > 0)
				       (yyval.intval) = MS_TRUE;
				     else
				       (yyval.intval) = MS_FALSE;
                                   }
    break;

  case 35:

/* Line 1806 of yacc.c  */
#line 321 "/usr/src/mapserver/mapserver-master/mapparser.y"
    {
                                     if(msTimeCompare(&((yyvsp[(1) - (3)].tmval)), &((yyvsp[(3) - (3)].tmval))) < 0)
				       (yyval.intval) = MS_TRUE;
				     else
				       (yyval.intval) = MS_FALSE;
                                   }
    break;

  case 36:

/* Line 1806 of yacc.c  */
#line 327 "/usr/src/mapserver/mapserver-master/mapparser.y"
    {
                                     if(msTimeCompare(&((yyvsp[(1) - (3)].tmval)), &((yyvsp[(3) - (3)].tmval))) >= 0)
				       (yyval.intval) = MS_TRUE;
				     else
				       (yyval.intval) = MS_FALSE;
                                   }
    break;

  case 37:

/* Line 1806 of yacc.c  */
#line 333 "/usr/src/mapserver/mapserver-master/mapparser.y"
    {
                                     if(msTimeCompare(&((yyvsp[(1) - (3)].tmval)), &((yyvsp[(3) - (3)].tmval))) <= 0)
				       (yyval.intval) = MS_TRUE;
				     else
				       (yyval.intval) = MS_FALSE;
                                   }
    break;

  case 38:

/* Line 1806 of yacc.c  */
#line 339 "/usr/src/mapserver/mapserver-master/mapparser.y"
    {
					 char *delim,*bufferp;

					 (yyval.intval) = MS_FALSE;
					 bufferp=(yyvsp[(3) - (3)].strval);

					 while((delim=strchr(bufferp,',')) != NULL) {
					   *delim='\0';
					   if(strcmp((yyvsp[(1) - (3)].strval),bufferp) == 0) {
					     (yyval.intval) = MS_TRUE;
					     break;
					   } 
					   *delim=',';
					   bufferp=delim+1;
					 }

					 if((yyval.intval)==MS_FALSE && strcmp((yyvsp[(1) - (3)].strval),bufferp) == 0) // test for last (or only) item
					   (yyval.intval) = MS_TRUE;
					 free((yyvsp[(1) - (3)].strval));
					 free((yyvsp[(3) - (3)].strval));
				       }
    break;

  case 39:

/* Line 1806 of yacc.c  */
#line 360 "/usr/src/mapserver/mapserver-master/mapparser.y"
    {
					 char *delim,*bufferp;

					 (yyval.intval) = MS_FALSE;
					 bufferp=(yyvsp[(3) - (3)].strval);

					 while((delim=strchr(bufferp,',')) != NULL) {
					   *delim='\0';
					   if((yyvsp[(1) - (3)].dblval) == atof(bufferp)) {
					     (yyval.intval) = MS_TRUE;
					     break;
					   } 
					   *delim=',';
					   bufferp=delim+1;
					 }

					 if((yyvsp[(1) - (3)].dblval) == atof(bufferp)) // is this test necessary?
					   (yyval.intval) = MS_TRUE;
					   
					 free((yyvsp[(3) - (3)].strval));
				       }
    break;

  case 40:

/* Line 1806 of yacc.c  */
#line 381 "/usr/src/mapserver/mapserver-master/mapparser.y"
    {
	                                 if((yyvsp[(1) - (3)].dblval) == (yyvsp[(3) - (3)].dblval))
	 		                   (yyval.intval) = MS_TRUE;
			                 else
			                   (yyval.intval) = MS_FALSE;
		                       }
    break;

  case 41:

/* Line 1806 of yacc.c  */
#line 387 "/usr/src/mapserver/mapserver-master/mapparser.y"
    {
                                         if(strcasecmp((yyvsp[(1) - (3)].strval), (yyvsp[(3) - (3)].strval)) == 0)
					   (yyval.intval) = MS_TRUE;
					 else
					   (yyval.intval) = MS_FALSE;
					 free((yyvsp[(1) - (3)].strval));
					 free((yyvsp[(3) - (3)].strval));
				       }
    break;

  case 42:

/* Line 1806 of yacc.c  */
#line 395 "/usr/src/mapserver/mapserver-master/mapparser.y"
    {
                                     if(msTimeCompare(&((yyvsp[(1) - (3)].tmval)), &((yyvsp[(3) - (3)].tmval))) == 0)
				       (yyval.intval) = MS_TRUE;
				     else
				       (yyval.intval) = MS_FALSE;
				   }
    break;

  case 43:

/* Line 1806 of yacc.c  */
#line 402 "/usr/src/mapserver/mapserver-master/mapparser.y"
    {
      int rval;
      rval = msGEOSEquals((yyvsp[(1) - (3)].shpval), (yyvsp[(3) - (3)].shpval));
      if((yyvsp[(1) - (3)].shpval)->scratch == MS_TRUE) msFreeShape((yyvsp[(1) - (3)].shpval));
      if((yyvsp[(3) - (3)].shpval)->scratch == MS_TRUE) msFreeShape((yyvsp[(3) - (3)].shpval));
      if(rval == -1) {
        yyerror(p, "Equals (EQ or ==) operator failed.");
        return(-1);
      } else
        (yyval.intval) = rval;
    }
    break;

  case 44:

/* Line 1806 of yacc.c  */
#line 413 "/usr/src/mapserver/mapserver-master/mapparser.y"
    {
      int rval;
      rval = msGEOSIntersects((yyvsp[(1) - (3)].shpval), (yyvsp[(3) - (3)].shpval));      
      if((yyvsp[(1) - (3)].shpval)->scratch == MS_TRUE) msFreeShape((yyvsp[(1) - (3)].shpval));
      if((yyvsp[(3) - (3)].shpval)->scratch == MS_TRUE) msFreeShape((yyvsp[(3) - (3)].shpval)); 
      if(rval == -1) {
        yyerror(p, "Intersects operator failed.");
        return(-1);
      } else
        (yyval.intval) = rval;
    }
    break;

  case 45:

/* Line 1806 of yacc.c  */
#line 424 "/usr/src/mapserver/mapserver-master/mapparser.y"
    {
      int rval;
      rval = msGEOSDisjoint((yyvsp[(1) - (3)].shpval), (yyvsp[(3) - (3)].shpval));
      if((yyvsp[(1) - (3)].shpval)->scratch == MS_TRUE) msFreeShape((yyvsp[(1) - (3)].shpval));
      if((yyvsp[(3) - (3)].shpval)->scratch == MS_TRUE) msFreeShape((yyvsp[(3) - (3)].shpval));
      if(rval == -1) {
        yyerror(p, "Disjoint operator failed.");
        return(-1);
      } else
        (yyval.intval) = rval;
    }
    break;

  case 46:

/* Line 1806 of yacc.c  */
#line 435 "/usr/src/mapserver/mapserver-master/mapparser.y"
    {
      int rval;
      rval = msGEOSTouches((yyvsp[(1) - (3)].shpval), (yyvsp[(3) - (3)].shpval));
      if((yyvsp[(1) - (3)].shpval)->scratch == MS_TRUE) msFreeShape((yyvsp[(1) - (3)].shpval));
      if((yyvsp[(3) - (3)].shpval)->scratch == MS_TRUE) msFreeShape((yyvsp[(3) - (3)].shpval));
      if(rval == -1) {
        yyerror(p, "Touches operator failed.");
        return(-1);
      } else
        (yyval.intval) = rval;
    }
    break;

  case 47:

/* Line 1806 of yacc.c  */
#line 446 "/usr/src/mapserver/mapserver-master/mapparser.y"
    {
      int rval;
      rval = msGEOSOverlaps((yyvsp[(1) - (3)].shpval), (yyvsp[(3) - (3)].shpval));
      if((yyvsp[(1) - (3)].shpval)->scratch == MS_TRUE) msFreeShape((yyvsp[(1) - (3)].shpval));
      if((yyvsp[(3) - (3)].shpval)->scratch == MS_TRUE) msFreeShape((yyvsp[(3) - (3)].shpval));
      if(rval == -1) {
        yyerror(p, "Overlaps operator failed.");
        return(-1);
      } else
        (yyval.intval) = rval;
    }
    break;

  case 48:

/* Line 1806 of yacc.c  */
#line 457 "/usr/src/mapserver/mapserver-master/mapparser.y"
    {
      int rval;
      rval = msGEOSCrosses((yyvsp[(1) - (3)].shpval), (yyvsp[(3) - (3)].shpval));
      if((yyvsp[(1) - (3)].shpval)->scratch == MS_TRUE) msFreeShape((yyvsp[(1) - (3)].shpval));
      if((yyvsp[(3) - (3)].shpval)->scratch == MS_TRUE) msFreeShape((yyvsp[(3) - (3)].shpval));
      if(rval == -1) {
        yyerror(p, "Crosses operator failed.");
        return(-1);
      } else
        (yyval.intval) = rval;
    }
    break;

  case 49:

/* Line 1806 of yacc.c  */
#line 468 "/usr/src/mapserver/mapserver-master/mapparser.y"
    {
      int rval;
      rval = msGEOSWithin((yyvsp[(1) - (3)].shpval), (yyvsp[(3) - (3)].shpval));
      if((yyvsp[(1) - (3)].shpval)->scratch == MS_TRUE) msFreeShape((yyvsp[(1) - (3)].shpval));
      if((yyvsp[(3) - (3)].shpval)->scratch == MS_TRUE) msFreeShape((yyvsp[(3) - (3)].shpval));
      if(rval == -1) {
        yyerror(p, "Within operator failed.");
        return(-1);
      } else
        (yyval.intval) = rval;
    }
    break;

  case 50:

/* Line 1806 of yacc.c  */
#line 479 "/usr/src/mapserver/mapserver-master/mapparser.y"
    {
      int rval;
      rval = msGEOSContains((yyvsp[(1) - (3)].shpval), (yyvsp[(3) - (3)].shpval));
      if((yyvsp[(1) - (3)].shpval)->scratch == MS_TRUE) msFreeShape((yyvsp[(1) - (3)].shpval));
      if((yyvsp[(3) - (3)].shpval)->scratch == MS_TRUE) msFreeShape((yyvsp[(3) - (3)].shpval));
      if(rval == -1) {
        yyerror(p, "Contains operator failed.");
        return(-1);
      } else
        (yyval.intval) = rval;
    }
    break;

  case 51:

/* Line 1806 of yacc.c  */
#line 490 "/usr/src/mapserver/mapserver-master/mapparser.y"
    {
      double d;
      d = msGEOSDistance((yyvsp[(1) - (3)].shpval), (yyvsp[(3) - (3)].shpval));
      if((yyvsp[(1) - (3)].shpval)->scratch == MS_TRUE) msFreeShape((yyvsp[(1) - (3)].shpval));
      if((yyvsp[(3) - (3)].shpval)->scratch == MS_TRUE) msFreeShape((yyvsp[(3) - (3)].shpval));
      if(d == 0.0) 
        (yyval.intval) = MS_TRUE;
      else
        (yyval.intval) = MS_FALSE;
    }
    break;

  case 52:

/* Line 1806 of yacc.c  */
#line 500 "/usr/src/mapserver/mapserver-master/mapparser.y"
    {
      double d;
      d = msGEOSDistance((yyvsp[(1) - (3)].shpval), (yyvsp[(3) - (3)].shpval));
      if((yyvsp[(1) - (3)].shpval)->scratch == MS_TRUE) msFreeShape((yyvsp[(1) - (3)].shpval));
      if((yyvsp[(3) - (3)].shpval)->scratch == MS_TRUE) msFreeShape((yyvsp[(3) - (3)].shpval));
      if(d > 0.0) 
        (yyval.intval) = MS_TRUE;
      else
        (yyval.intval) = MS_FALSE;
    }
    break;

  case 54:

/* Line 1806 of yacc.c  */
#line 513 "/usr/src/mapserver/mapserver-master/mapparser.y"
    { (yyval.dblval) = (yyvsp[(2) - (3)].dblval); }
    break;

  case 55:

/* Line 1806 of yacc.c  */
#line 514 "/usr/src/mapserver/mapserver-master/mapparser.y"
    { (yyval.dblval) = (yyvsp[(1) - (3)].dblval) + (yyvsp[(3) - (3)].dblval); }
    break;

  case 56:

/* Line 1806 of yacc.c  */
#line 515 "/usr/src/mapserver/mapserver-master/mapparser.y"
    { (yyval.dblval) = (yyvsp[(1) - (3)].dblval) - (yyvsp[(3) - (3)].dblval); }
    break;

  case 57:

/* Line 1806 of yacc.c  */
#line 516 "/usr/src/mapserver/mapserver-master/mapparser.y"
    { (yyval.dblval) = (yyvsp[(1) - (3)].dblval) * (yyvsp[(3) - (3)].dblval); }
    break;

  case 58:

/* Line 1806 of yacc.c  */
#line 517 "/usr/src/mapserver/mapserver-master/mapparser.y"
    { (yyval.dblval) = (int)(yyvsp[(1) - (3)].dblval) % (int)(yyvsp[(3) - (3)].dblval); }
    break;

  case 59:

/* Line 1806 of yacc.c  */
#line 518 "/usr/src/mapserver/mapserver-master/mapparser.y"
    {
      if((yyvsp[(3) - (3)].dblval) == 0.0) {
        yyerror(p, "Division by zero.");
        return(-1);
      } else
        (yyval.dblval) = (yyvsp[(1) - (3)].dblval) / (yyvsp[(3) - (3)].dblval); 
    }
    break;

  case 60:

/* Line 1806 of yacc.c  */
#line 525 "/usr/src/mapserver/mapserver-master/mapparser.y"
    { (yyval.dblval) = (yyvsp[(2) - (2)].dblval); }
    break;

  case 61:

/* Line 1806 of yacc.c  */
#line 526 "/usr/src/mapserver/mapserver-master/mapparser.y"
    { (yyval.dblval) = pow((yyvsp[(1) - (3)].dblval), (yyvsp[(3) - (3)].dblval)); }
    break;

  case 62:

/* Line 1806 of yacc.c  */
#line 527 "/usr/src/mapserver/mapserver-master/mapparser.y"
    { (yyval.dblval) = strlen((yyvsp[(3) - (4)].strval)); }
    break;

  case 63:

/* Line 1806 of yacc.c  */
#line 528 "/usr/src/mapserver/mapserver-master/mapparser.y"
    {
      if((yyvsp[(3) - (4)].shpval)->type != MS_SHAPE_POLYGON) {
        yyerror(p, "Area can only be computed for polygon shapes.");
        return(-1);
      }
      (yyval.dblval) = msGetPolygonArea((yyvsp[(3) - (4)].shpval));
      if((yyvsp[(3) - (4)].shpval)->scratch == MS_TRUE) msFreeShape((yyvsp[(3) - (4)].shpval));
    }
    break;

  case 64:

/* Line 1806 of yacc.c  */
#line 536 "/usr/src/mapserver/mapserver-master/mapparser.y"
    { (yyval.dblval) = (MS_NINT((yyvsp[(3) - (6)].dblval)/(yyvsp[(5) - (6)].dblval)))*(yyvsp[(5) - (6)].dblval); }
    break;

  case 66:

/* Line 1806 of yacc.c  */
#line 540 "/usr/src/mapserver/mapserver-master/mapparser.y"
    { (yyval.shpval) = (yyvsp[(2) - (3)].shpval); }
    break;

  case 67:

/* Line 1806 of yacc.c  */
#line 541 "/usr/src/mapserver/mapserver-master/mapparser.y"
    {
      shapeObj *s;
      s = msGEOSBuffer((yyvsp[(3) - (6)].shpval), (yyvsp[(5) - (6)].dblval));
      if(!s) {
        yyerror(p, "Executing buffer failed.");
        return(-1);
      }
      s->scratch = MS_TRUE;
      (yyval.shpval) = s;
    }
    break;

  case 68:

/* Line 1806 of yacc.c  */
#line 551 "/usr/src/mapserver/mapserver-master/mapparser.y"
    {
      shapeObj *s;
      s = msGEOSDifference((yyvsp[(3) - (6)].shpval), (yyvsp[(5) - (6)].shpval));
      if(!s) {
        yyerror(p, "Executing difference failed.");
        return(-1);
      }
      s->scratch = MS_TRUE;
      (yyval.shpval) = s;
    }
    break;

  case 69:

/* Line 1806 of yacc.c  */
#line 561 "/usr/src/mapserver/mapserver-master/mapparser.y"
    {
      shapeObj *s;
      s = msGEOSSimplify((yyvsp[(3) - (6)].shpval), (yyvsp[(5) - (6)].dblval));
      if(!s) {
        yyerror(p, "Executing simplify failed.");
        return(-1);
      }
      s->scratch = MS_TRUE;
      (yyval.shpval) = s;
    }
    break;

  case 70:

/* Line 1806 of yacc.c  */
#line 571 "/usr/src/mapserver/mapserver-master/mapparser.y"
    {
      shapeObj *s;
      s = msGEOSTopologyPreservingSimplify((yyvsp[(3) - (6)].shpval), (yyvsp[(5) - (6)].dblval));
      if(!s) {
        yyerror(p, "Executing simplifypt failed.");
        return(-1);
      }
      s->scratch = MS_TRUE;
      (yyval.shpval) = s;
    }
    break;

  case 71:

/* Line 1806 of yacc.c  */
#line 581 "/usr/src/mapserver/mapserver-master/mapparser.y"
    {
      shapeObj *s;
      s = msGeneralize((yyvsp[(3) - (6)].shpval), (yyvsp[(5) - (6)].dblval));
      if(!s) {
        yyerror(p, "Executing generalize failed.");
        return(-1);
      }
      s->scratch = MS_TRUE;
      (yyval.shpval) = s;
    }
    break;

  case 72:

/* Line 1806 of yacc.c  */
#line 591 "/usr/src/mapserver/mapserver-master/mapparser.y"
    {
      shapeObj *s;
      s = msSmoothShapeSIA((yyvsp[(3) - (4)].shpval), 3, 1, NULL);
      if(!s) {
        yyerror(p, "Executing smoothsia failed.");
        return(-1);
      }
      s->scratch = MS_TRUE;
      (yyval.shpval) = s;
    }
    break;

  case 73:

/* Line 1806 of yacc.c  */
#line 601 "/usr/src/mapserver/mapserver-master/mapparser.y"
    {
      shapeObj *s;
      s = msSmoothShapeSIA((yyvsp[(3) - (6)].shpval), (yyvsp[(5) - (6)].dblval), 1, NULL);
      if(!s) {
        yyerror(p, "Executing smoothsia failed.");
        return(-1);
      }
      s->scratch = MS_TRUE;
      (yyval.shpval) = s;
    }
    break;

  case 74:

/* Line 1806 of yacc.c  */
#line 611 "/usr/src/mapserver/mapserver-master/mapparser.y"
    {
      shapeObj *s;
      s = msSmoothShapeSIA((yyvsp[(3) - (8)].shpval), (yyvsp[(5) - (8)].dblval), (yyvsp[(7) - (8)].dblval), NULL);
      if(!s) {
        yyerror(p, "Executing smoothsia failed.");
        return(-1);
      }
      s->scratch = MS_TRUE;
      (yyval.shpval) = s;
    }
    break;

  case 75:

/* Line 1806 of yacc.c  */
#line 621 "/usr/src/mapserver/mapserver-master/mapparser.y"
    {
      shapeObj *s;
      s = msSmoothShapeSIA((yyvsp[(3) - (10)].shpval), (yyvsp[(5) - (10)].dblval), (yyvsp[(7) - (10)].dblval), (yyvsp[(9) - (10)].strval));
      free((yyvsp[(9) - (10)].strval));
      if(!s) {
        yyerror(p, "Executing smoothsia failed.");
        return(-1);
      }
      s->scratch = MS_TRUE;
      (yyval.shpval) = s;
    }
    break;

  case 77:

/* Line 1806 of yacc.c  */
#line 635 "/usr/src/mapserver/mapserver-master/mapparser.y"
    { (yyval.strval) = (yyvsp[(2) - (3)].strval); }
    break;

  case 78:

/* Line 1806 of yacc.c  */
#line 636 "/usr/src/mapserver/mapserver-master/mapparser.y"
    { 
      (yyval.strval) = (char *)malloc(strlen((yyvsp[(1) - (3)].strval)) + strlen((yyvsp[(3) - (3)].strval)) + 1);
      sprintf((yyval.strval), "%s%s", (yyvsp[(1) - (3)].strval), (yyvsp[(3) - (3)].strval)); free((yyvsp[(1) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); 
    }
    break;

  case 79:

/* Line 1806 of yacc.c  */
#line 640 "/usr/src/mapserver/mapserver-master/mapparser.y"
    {
      (yyval.strval) = (char *) malloc(strlen((yyvsp[(5) - (6)].strval)) + 64); /* Plenty big? Should use snprintf below... */
      sprintf((yyval.strval), (yyvsp[(5) - (6)].strval), (yyvsp[(3) - (6)].dblval));
    }
    break;

  case 80:

/* Line 1806 of yacc.c  */
#line 644 "/usr/src/mapserver/mapserver-master/mapparser.y"
    {  
      (yyvsp[(3) - (4)].strval) = msCommifyString((yyvsp[(3) - (4)].strval)); 
      (yyval.strval) = (yyvsp[(3) - (4)].strval); 
    }
    break;

  case 82:

/* Line 1806 of yacc.c  */
#line 651 "/usr/src/mapserver/mapserver-master/mapparser.y"
    { (yyval.tmval) = (yyvsp[(2) - (3)].tmval); }
    break;



/* Line 1806 of yacc.c  */
#line 2650 "/usr/src/mapserver/mapserver-master/mapparser.c"
      default: break;
    }
  /* User semantic actions sometimes alter yychar, and that requires
     that yytoken be updated with the new translation.  We take the
     approach of translating immediately before every use of yytoken.
     One alternative is translating here after every semantic action,
     but that translation would be missed if the semantic action invokes
     YYABORT, YYACCEPT, or YYERROR immediately after altering yychar or
     if it invokes YYBACKUP.  In the case of YYABORT or YYACCEPT, an
     incorrect destructor might then be invoked immediately.  In the
     case of YYERROR or YYBACKUP, subsequent parser actions might lead
     to an incorrect destructor call or verbose syntax error message
     before the lookahead is translated.  */
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;

  /* Now `shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*------------------------------------.
| yyerrlab -- here on detecting error |
`------------------------------------*/
yyerrlab:
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYEMPTY : YYTRANSLATE (yychar);

  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (p, YY_("syntax error"));
#else
# define YYSYNTAX_ERROR yysyntax_error (&yymsg_alloc, &yymsg, \
                                        yyssp, yytoken)
      {
        char const *yymsgp = YY_("syntax error");
        int yysyntax_error_status;
        yysyntax_error_status = YYSYNTAX_ERROR;
        if (yysyntax_error_status == 0)
          yymsgp = yymsg;
        else if (yysyntax_error_status == 1)
          {
            if (yymsg != yymsgbuf)
              YYSTACK_FREE (yymsg);
            yymsg = (char *) YYSTACK_ALLOC (yymsg_alloc);
            if (!yymsg)
              {
                yymsg = yymsgbuf;
                yymsg_alloc = sizeof yymsgbuf;
                yysyntax_error_status = 2;
              }
            else
              {
                yysyntax_error_status = YYSYNTAX_ERROR;
                yymsgp = yymsg;
              }
          }
        yyerror (p, yymsgp);
        if (yysyntax_error_status == 2)
          goto yyexhaustedlab;
      }
# undef YYSYNTAX_ERROR
#endif
    }



  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse lookahead token after an
	 error, discard it.  */

      if (yychar <= YYEOF)
	{
	  /* Return failure if at end of input.  */
	  if (yychar == YYEOF)
	    YYABORT;
	}
      else
	{
	  yydestruct ("Error: discarding",
		      yytoken, &yylval, p);
	  yychar = YYEMPTY;
	}
    }

  /* Else will try to reuse lookahead token after shifting the error
     token.  */
  goto yyerrlab1;


/*---------------------------------------------------.
| yyerrorlab -- error raised explicitly by YYERROR.  |
`---------------------------------------------------*/
yyerrorlab:

  /* Pacify compilers like GCC when the user code never invokes
     YYERROR and the label yyerrorlab therefore never appears in user
     code.  */
  if (/*CONSTCOND*/ 0)
     goto yyerrorlab;

  /* Do not reclaim the symbols of the rule which action triggered
     this YYERROR.  */
  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);
  yystate = *yyssp;
  goto yyerrlab1;


/*-------------------------------------------------------------.
| yyerrlab1 -- common code for both syntax error and YYERROR.  |
`-------------------------------------------------------------*/
yyerrlab1:
  yyerrstatus = 3;	/* Each real token shifted decrements this.  */

  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
	{
	  yyn += YYTERROR;
	  if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYTERROR)
	    {
	      yyn = yytable[yyn];
	      if (0 < yyn)
		break;
	    }
	}

      /* Pop the current state because it cannot handle the error token.  */
      if (yyssp == yyss)
	YYABORT;


      yydestruct ("Error: popping",
		  yystos[yystate], yyvsp, p);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  *++yyvsp = yylval;


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", yystos[yyn], yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturn;

/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturn;

#if !defined(yyoverflow) || YYERROR_VERBOSE
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (p, YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif

yyreturn:
  if (yychar != YYEMPTY)
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      yytoken = YYTRANSLATE (yychar);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval, p);
    }
  /* Do not reclaim the symbols of the rule which action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
		  yystos[*yyssp], yyvsp, p);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif
#if YYERROR_VERBOSE
  if (yymsg != yymsgbuf)
    YYSTACK_FREE (yymsg);
#endif
  /* Make sure YYID is used.  */
  return YYID (yyresult);
}



/* Line 2067 of yacc.c  */
#line 654 "/usr/src/mapserver/mapserver-master/mapparser.y"


/*
** Any extra C functions
*/

int yylex(YYSTYPE *lvalp, parseObj *p) 
{
  int token;

  if(p->expr->curtoken == NULL) return(0); /* done */

  // fprintf(stderr, "in yylex() - curtoken=%d...\n", p->expr->curtoken->token);

  token = p->expr->curtoken->token; /* may override */
  switch(p->expr->curtoken->token) {
  case MS_TOKEN_LITERAL_NUMBER:
    token = NUMBER;    
    (*lvalp).dblval = p->expr->curtoken->tokenval.dblval;
    break;
  case MS_TOKEN_LITERAL_SHAPE:
    token = SHAPE;
    // fprintf(stderr, "token value = %s\n", msShapeToWKT(p->expr->curtoken->tokenval.shpval));
    (*lvalp).shpval = p->expr->curtoken->tokenval.shpval;
    break;
  case MS_TOKEN_LITERAL_STRING:
    // printf("token value = %s\n", p->expr->curtoken->tokenval.strval); 
    token = STRING;
    (*lvalp).strval = strdup(p->expr->curtoken->tokenval.strval);    
    break;
  case MS_TOKEN_LITERAL_TIME:
    token = TIME;
    (*lvalp).tmval = p->expr->curtoken->tokenval.tmval;
    break;

  case MS_TOKEN_COMPARISON_EQ: token = EQ; break;
  case MS_TOKEN_COMPARISON_IEQ: token = IEQ; break;
  case MS_TOKEN_COMPARISON_NE: token = NE; break;
  case MS_TOKEN_COMPARISON_LT: token = LT; break;
  case MS_TOKEN_COMPARISON_GT: token = GT; break;
  case MS_TOKEN_COMPARISON_LE: token = LE; break;
  case MS_TOKEN_COMPARISON_GE: token = GE; break;
  case MS_TOKEN_COMPARISON_RE: token = RE; break;
  case MS_TOKEN_COMPARISON_IRE: token = IRE; break;

  case MS_TOKEN_COMPARISON_INTERSECTS: token = INTERSECTS; break;
  case MS_TOKEN_COMPARISON_DISJOINT: token = DISJOINT; break;
  case MS_TOKEN_COMPARISON_TOUCHES: token = TOUCHES; break;
  case MS_TOKEN_COMPARISON_OVERLAPS: token = OVERLAPS; break; 
  case MS_TOKEN_COMPARISON_CROSSES: token = CROSSES; break;
  case MS_TOKEN_COMPARISON_WITHIN: token = WITHIN; break; 
  case MS_TOKEN_COMPARISON_CONTAINS: token = CONTAINS; break;
  case MS_TOKEN_COMPARISON_BEYOND: token = BEYOND; break;
  case MS_TOKEN_COMPARISON_DWITHIN: token = DWITHIN; break;

  case MS_TOKEN_LOGICAL_AND: token = AND; break;
  case MS_TOKEN_LOGICAL_OR: token = OR; break;
  case MS_TOKEN_LOGICAL_NOT: token = NOT; break;

  case MS_TOKEN_BINDING_DOUBLE:
  case MS_TOKEN_BINDING_INTEGER:
    token = NUMBER;
    (*lvalp).dblval = atof(p->shape->values[p->expr->curtoken->tokenval.bindval.index]);
    break;
  case MS_TOKEN_BINDING_STRING:
    token = STRING;
    (*lvalp).strval = strdup(p->shape->values[p->expr->curtoken->tokenval.bindval.index]);
    break;
  case MS_TOKEN_BINDING_SHAPE:
    token = SHAPE;
    // fprintf(stderr, "token value = %s\n", msShapeToWKT(p->shape));
    (*lvalp).shpval = p->shape;
    break;
  case MS_TOKEN_BINDING_MAP_CELLSIZE:
    token = NUMBER;
    (*lvalp).dblval = p->dblval;
    break;
  case MS_TOKEN_BINDING_DATA_CELLSIZE:
    token = NUMBER;
    (*lvalp).dblval = p->dblval2;
    break;    
  case MS_TOKEN_BINDING_TIME:
    token = TIME;
    msTimeInit(&((*lvalp).tmval));
    if(msParseTime(p->shape->values[p->expr->curtoken->tokenval.bindval.index], &((*lvalp).tmval)) != MS_TRUE) {
      yyerror(p, "Parsing time value failed.");
      return(-1);
    }
    break;

  case MS_TOKEN_FUNCTION_AREA: token = AREA; break;
  case MS_TOKEN_FUNCTION_LENGTH: token = LENGTH; break;
  case MS_TOKEN_FUNCTION_TOSTRING: token = TOSTRING; break;
  case MS_TOKEN_FUNCTION_COMMIFY: token = COMMIFY; break;
  case MS_TOKEN_FUNCTION_ROUND: token = ROUND; break;

  case MS_TOKEN_FUNCTION_BUFFER: token = YYBUFFER; break;
  case MS_TOKEN_FUNCTION_DIFFERENCE: token = DIFFERENCE; break;
  case MS_TOKEN_FUNCTION_SIMPLIFY: token = SIMPLIFY; break;
  case MS_TOKEN_FUNCTION_SIMPLIFYPT: token = SIMPLIFYPT; break;
  case MS_TOKEN_FUNCTION_GENERALIZE: token = GENERALIZE; break;
  case MS_TOKEN_FUNCTION_SMOOTHSIA: token = SMOOTHSIA; break;    

  default:
    break;
  }

  p->expr->curtoken = p->expr->curtoken->next; /* re-position */ 
  return(token);
}

int yyerror(parseObj *p, const char *s) {
  msSetError(MS_PARSEERR, s, "yyparse()");
  return(0);
}

