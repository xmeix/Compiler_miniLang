
/* A Bison parser, made by GNU Bison 2.4.1.  */

/* Skeleton implementation for Bison's Yacc-like parsers in C
   
      Copyright (C) 1984, 1989, 1990, 2000, 2001, 2002, 2003, 2004, 2005, 2006
   Free Software Foundation, Inc.
   
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
#define YYBISON_VERSION "2.4.1"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1

/* Using locations.  */
#define YYLSP_NEEDED 0



/* Copy the first part of user declarations.  */

/* Line 189 of yacc.c  */
#line 1 "syntaxique.y"

    #include "stdlib.h"
    #include "stdio.h"
	  #include "string.h"
	int nb_ligne=1;
	int Col = 1;
	extern yytext;
  extern FILE* yyin ;
    char FileName[100];
    char sauvType[20];
    char sauvVal[100];
    int typeExp = 0;
    int sauvCateg = 1;
    int sauvState;
    float val; 
    char val1[100],val2[100];
    float sauvValeur;
    char res[20];
    int  resComp;
    char valSigne[100];
    int valAnd=0;
    int valOr=0;
    int valLog;
    int deb;
    char buffer[500];
    char ch[100];
    int tab=-1; //0 idf 1 tab
    int pos;

    ////////// VARIABLES QUAD ///////////////////
    int Fin_if=0,deb_else=0 , Fin_For=0 , DebInstDo=0 , DebCondDo = 0 ,cptCondition=0 , verifFor=0;
    int qc=0 , cpt;
    char tmp [20];



/* Line 189 of yacc.c  */
#line 110 "syntaxique.tab.c"

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
     mc_exl = 258,
     mc_docprogram = 259,
     mc_sub = 260,
     mc_variable = 261,
     mc_body = 262,
     bal_ouv = 263,
     bal_fer = 264,
     bal_slch_fer = 265,
     bal_slch_ouv = 266,
     idf = 267,
     mc_as = 268,
     pvg = 269,
     ou = 270,
     mc_array = 271,
     deuxpt = 272,
     mc_constante = 273,
     egal = 274,
     par_ouv = 275,
     par_fer = 276,
     cr_ouv = 277,
     cr_fer = 278,
     cst_unsigned_int = 279,
     cst_int_pos = 280,
     cst_int_neg = 281,
     cst_float = 282,
     cst_bool = 283,
     cst_char = 284,
     plus = 285,
     moins = 286,
     mult = 287,
     divis = 288,
     and = 289,
     or = 290,
     not = 291,
     sup = 292,
     inf = 293,
     supeg = 294,
     infeg = 295,
     ega = 296,
     dif = 297,
     mc_int = 298,
     mc_float = 299,
     mc_char = 300,
     mc_string = 301,
     mc_bool = 302,
     mc_aff = 303,
     vrg = 304,
     mc_input = 305,
     mc_output = 306,
     dollar = 307,
     mod = 308,
     hash = 309,
     arob = 310,
     etcom = 311,
     chaine_gauche = 312,
     chaine_droite = 313,
     chaine_outdr = 314,
     simple_string = 315,
     mc_if = 316,
     mc_then = 317,
     mc_else = 318,
     mc_do = 319,
     mc_while = 320,
     mc_for = 321,
     mc_until = 322
   };
#endif



#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
{

/* Line 214 of yacc.c  */
#line 36 "syntaxique.y"

  int entier;
  char* string; 
  float reel;



/* Line 214 of yacc.c  */
#line 221 "syntaxique.tab.c"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif


/* Copy the second part of user declarations.  */


/* Line 264 of yacc.c  */
#line 233 "syntaxique.tab.c"

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
# if YYENABLE_NLS
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
#    if ! defined _ALLOCA_H && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#     ifndef _STDLIB_H
#      define _STDLIB_H 1
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
#  if (defined __cplusplus && ! defined _STDLIB_H \
       && ! ((defined YYMALLOC || defined malloc) \
	     && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef _STDLIB_H
#    define _STDLIB_H 1
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
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

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  4
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   434

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  68
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  51
/* YYNRULES -- Number of rules.  */
#define YYNRULES  133
/* YYNRULES -- Number of states.  */
#define YYNSTATES  337

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   322

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
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
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    67
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,    22,    41,    59,    73,    77,    85,    90,
      91,    98,   102,   106,   111,   117,   119,   121,   123,   125,
     127,   131,   135,   137,   141,   147,   149,   151,   153,   155,
     157,   158,   166,   170,   173,   176,   177,   184,   187,   190,
     193,   197,   205,   216,   218,   220,   222,   224,   226,   228,
     232,   236,   240,   244,   248,   250,   254,   256,   258,   260,
     265,   270,   275,   277,   279,   283,   287,   289,   291,   293,
     295,   300,   307,   309,   311,   313,   315,   317,   319,   327,
     334,   338,   344,   347,   349,   354,   356,   358,   360,   362,
     364,   367,   370,   371,   378,   379,   384,   391,   397,   402,
     407,   409,   411,   416,   419,   422,   423,   430,   433,   437,
     441,   444,   447,   453,   456,   459,   460,   467,   470,   473,
     476,   480,   486,   490,   494,   496,   498,   501,   504,   505,
     512,   515,   518,   521
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      69,     0,    -1,     8,     3,     4,    12,     9,     8,     5,
       6,     9,    70,    71,     8,     7,     9,    81,    11,     4,
       9,    -1,     8,     3,     4,    12,     9,    71,     8,     5,
       6,     9,    70,     8,     7,     9,    81,    11,     4,     9,
      -1,     8,     3,     4,    12,     9,     8,     5,     6,     9,
      70,     8,     7,     9,    81,    11,     4,     9,    -1,     8,
       3,     4,    12,     9,    71,     8,     7,     9,    81,    11,
       4,     9,    -1,     8,    77,    70,    -1,     8,    16,    13,
      78,     9,    79,    70,    -1,    11,     5,     6,     9,    -1,
      -1,     8,     5,    18,     9,    72,    73,    -1,     8,    77,
      73,    -1,     8,    74,    73,    -1,    11,     5,    18,     9,
      -1,    12,    19,    75,    10,    14,    -1,    76,    -1,    27,
      -1,    28,    -1,    29,    -1,    60,    -1,    20,    25,    21,
      -1,    20,    26,    21,    -1,    24,    -1,    12,    15,    77,
      -1,    12,    13,    78,    10,    14,    -1,    43,    -1,    44,
      -1,    45,    -1,    46,    -1,    47,    -1,    -1,     8,    12,
      17,    24,    10,    80,    79,    -1,    11,    16,     9,    -1,
      83,    81,    -1,    93,    81,    -1,    -1,     8,    51,    17,
      94,    82,    81,    -1,   102,    81,    -1,   110,    81,    -1,
     115,    81,    -1,    11,     7,     9,    -1,     8,    48,    17,
      12,    49,    84,    10,    -1,     8,    48,    17,    12,    22,
      24,    23,    49,    84,    10,    -1,    85,    -1,    91,    -1,
      87,    -1,    60,    -1,    29,    -1,    28,    -1,    20,    85,
      21,    -1,    85,    30,    85,    -1,    85,    31,    85,    -1,
      85,    33,    85,    -1,    85,    32,    85,    -1,    86,    -1,
      20,    26,    21,    -1,    24,    -1,    27,    -1,    12,    -1,
      12,    22,    24,    23,    -1,    88,    20,    89,    21,    -1,
      36,    20,    90,    21,    -1,    34,    -1,    35,    -1,    90,
      49,    89,    -1,    90,    49,    90,    -1,    87,    -1,    91,
      -1,    28,    -1,    12,    -1,    12,    22,    24,    23,    -1,
      92,    20,    85,    49,    85,    21,    -1,    37,    -1,    39,
      -1,    40,    -1,    38,    -1,    41,    -1,    42,    -1,     8,
      50,    17,    12,    57,    96,    58,    -1,    57,    96,    59,
      95,    30,    94,    -1,    60,    30,    94,    -1,    57,    96,
      59,    95,    10,    -1,    60,    10,    -1,    12,    -1,    12,
      22,    24,    23,    -1,    52,    -1,    53,    -1,    54,    -1,
      55,    -1,    56,    -1,    83,    97,    -1,    93,    97,    -1,
      -1,     8,    51,    17,    94,    98,    97,    -1,    -1,     8,
      61,    17,   103,    -1,    99,     9,     8,    62,     9,    97,
      -1,   100,    11,    62,     9,   104,    -1,   100,    11,    62,
       9,    -1,   101,    11,    61,     9,    -1,    87,    -1,    91,
      -1,     8,    63,     9,   105,    -1,    83,   105,    -1,    93,
     105,    -1,    -1,     8,    51,    17,    94,   106,   105,    -1,
     102,   105,    -1,    11,    63,     9,    -1,     8,    64,     9,
      -1,   107,   111,    -1,   108,   103,    -1,   109,    10,    11,
      64,     9,    -1,    83,   111,    -1,    93,   111,    -1,    -1,
       8,    51,    17,    94,   112,   111,    -1,   102,   111,    -1,
     110,   111,    -1,   115,   111,    -1,     8,    65,    17,    -1,
       8,    66,    12,    19,    76,    -1,   113,    67,   116,    -1,
     114,     9,   117,    -1,    12,    -1,    76,    -1,    83,   117,
      -1,    93,   117,    -1,    -1,     8,    51,    17,    94,   118,
     117,    -1,   102,   117,    -1,   110,   117,    -1,   115,   117,
      -1,    11,    66,     9,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    73,    73,    76,    79,    82,    96,    97,    98,   101,
     101,   104,   105,   106,   108,   111,   112,   113,   114,   115,
     117,   118,   119,   122,   125,   131,   132,   133,   134,   135,
     138,   138,   139,   142,   143,   144,   144,   150,   151,   152,
     153,   158,   169,   191,   192,   197,   200,   201,   202,   206,
     207,   208,   209,   213,   214,   216,   217,   218,   219,   227,
     238,   245,   253,   254,   256,   263,   272,   275,   278,   282,
     288,   297,   325,   326,   327,   328,   329,   330,   335,   343,
     379,   389,   417,   431,   432,   435,   436,   437,   438,   439,
     442,   443,   444,   444,   450,   460,   469,   477,   480,   482,
     491,   495,   501,   503,   504,   505,   505,   511,   512,   520,
     529,   535,   542,   549,   550,   551,   551,   558,   559,   560,
     561,   567,   577,   585,   596,   599,   602,   603,   604,   604,
     611,   612,   613,   614
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "mc_exl", "mc_docprogram", "mc_sub",
  "mc_variable", "mc_body", "bal_ouv", "bal_fer", "bal_slch_fer",
  "bal_slch_ouv", "idf", "mc_as", "pvg", "ou", "mc_array", "deuxpt",
  "mc_constante", "egal", "par_ouv", "par_fer", "cr_ouv", "cr_fer",
  "cst_unsigned_int", "cst_int_pos", "cst_int_neg", "cst_float",
  "cst_bool", "cst_char", "plus", "moins", "mult", "divis", "and", "or",
  "not", "sup", "inf", "supeg", "infeg", "ega", "dif", "mc_int",
  "mc_float", "mc_char", "mc_string", "mc_bool", "mc_aff", "vrg",
  "mc_input", "mc_output", "dollar", "mod", "hash", "arob", "etcom",
  "chaine_gauche", "chaine_droite", "chaine_outdr", "simple_string",
  "mc_if", "mc_then", "mc_else", "mc_do", "mc_while", "mc_for", "mc_until",
  "$accept", "S", "DECLARATION", "DECLARATION_CONST", "$@1",
  "LISTE_DEC_CONST", "DEC_CONST_EGAL", "SWITCH_CST_TYPES", "SWITCH_INT",
  "DECLARATION_SIMPLE", "TYPE", "DECLARATION_TAB", "$@2", "BODY", "$@3",
  "AFFECTATION", "X", "EXPRESSION_ARITH", "TERM", "EXPRESSION_LOGIQUE",
  "OpLog", "EXPRESSIONS", "TYPE_EXP", "EXPRESSION_COMPARAISON",
  "MC_COMPARAISON", "INPUT", "OUTPUT", "ID", "SIGNE_FORMATAGE",
  "INSTRUCTION", "$@4", "IF_A", "IF_B", "IF_C", "INST_IF", "CONDITION",
  "INST_ELSE", "INSTRUCTION_ELSE", "$@5", "BOUCLE_DO_A", "BOUCLE_DO_B",
  "BOUCLE_DO_C", "BOUCLE_DO", "INSTRUCTION_BOUCLE_DO", "$@6",
  "BOUCLE_FOR_A", "BOUCLE_FOR_B", "BOUCLE_FOR", "SWITCHID_INT",
  "INSTRUCTION_BOUCLE_FOR", "$@7", 0
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
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307,   308,   309,   310,   311,   312,   313,   314,
     315,   316,   317,   318,   319,   320,   321,   322
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    68,    69,    69,    69,    69,    70,    70,    70,    72,
      71,    73,    73,    73,    74,    75,    75,    75,    75,    75,
      76,    76,    76,    77,    77,    78,    78,    78,    78,    78,
      80,    79,    79,    81,    81,    82,    81,    81,    81,    81,
      81,    83,    83,    84,    84,    84,    84,    84,    84,    85,
      85,    85,    85,    85,    85,    86,    86,    86,    86,    86,
      87,    87,    88,    88,    89,    89,    90,    90,    90,    90,
      90,    91,    92,    92,    92,    92,    92,    92,    93,    94,
      94,    94,    94,    95,    95,    96,    96,    96,    96,    96,
      97,    97,    98,    97,    97,    99,   100,   101,   101,   102,
     103,   103,   104,   105,   105,   106,   105,   105,   105,   107,
     108,   109,   110,   111,   111,   112,   111,   111,   111,   111,
     111,   113,   114,   115,   116,   116,   117,   117,   118,   117,
     117,   117,   117,   117
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,    18,    18,    17,    13,     3,     7,     4,     0,
       6,     3,     3,     4,     5,     1,     1,     1,     1,     1,
       3,     3,     1,     3,     5,     1,     1,     1,     1,     1,
       0,     7,     3,     2,     2,     0,     6,     2,     2,     2,
       3,     7,    10,     1,     1,     1,     1,     1,     1,     3,
       3,     3,     3,     3,     1,     3,     1,     1,     1,     4,
       4,     4,     1,     1,     3,     3,     1,     1,     1,     1,
       4,     6,     1,     1,     1,     1,     1,     1,     7,     6,
       3,     5,     2,     1,     4,     1,     1,     1,     1,     1,
       2,     2,     0,     6,     0,     4,     6,     5,     4,     4,
       1,     1,     4,     2,     2,     0,     6,     2,     3,     3,
       2,     2,     5,     2,     2,     0,     6,     2,     2,     2,
       3,     5,     3,     3,     1,     1,     2,     2,     0,     6,
       2,     2,     2,     3
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,     0,     0,     1,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     9,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    10,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    33,
      34,     0,     0,     0,    37,     0,     0,     0,     0,     0,
     110,     0,    62,    63,     0,    72,    75,    73,    74,    76,
      77,   100,     0,   101,     0,   111,     0,    38,     0,     0,
      39,     0,     0,     0,     6,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   109,     0,
      40,     0,     0,     0,     0,     0,     0,   113,   114,   117,
     118,   119,     0,     0,     0,     0,   124,     0,    22,   125,
     122,     0,     0,     0,     0,     0,     0,     0,   123,    25,
      26,    27,    28,    29,     0,    23,     0,     8,     0,     0,
       0,    12,    11,     0,     0,     0,     0,     0,     0,    35,
      95,     0,     5,     0,    98,    99,     0,   120,    69,    68,
      66,     0,    67,     0,     0,    58,     0,    56,    57,     0,
      54,     0,     0,     0,     0,     0,   126,   127,   130,   131,
     132,     0,     0,     0,     0,    16,    17,    18,    19,     0,
      15,    13,     0,     0,     0,     0,    85,    86,    87,    88,
      89,     0,    82,     0,     0,   121,    94,     0,    97,   115,
       0,    61,    60,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   112,    20,    21,     0,   133,    24,     0,     0,
       0,     0,     0,     0,     0,     0,    48,    47,    46,     0,
      43,    45,    44,     0,     0,    80,    36,     0,    94,    94,
      96,     0,     0,     0,    64,    65,     0,    55,    49,    50,
      51,    53,    52,     0,   128,     0,     0,     7,     0,     0,
      14,     0,     0,    41,    78,    83,     0,     0,    90,    91,
       0,   116,    70,    59,    71,     0,     0,    32,     4,     0,
       0,     0,     0,    81,     0,     0,     0,     0,     0,     0,
       0,   102,   129,     0,     2,     3,     0,     0,    79,    92,
       0,     0,   103,   104,   107,    30,    42,    84,    94,     0,
     108,     0,    93,   105,    31,     0,   106
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     2,    22,     9,    23,    49,   100,   199,   129,    43,
     144,   240,   331,    27,   214,    28,   249,   250,   180,   170,
      82,   173,   171,   172,    84,    29,   159,   286,   211,   260,
     328,    30,    31,    32,    33,    85,   218,   311,   335,    34,
      35,    36,    37,    70,   262,    38,    39,    40,   130,   138,
     295
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -284
static const yytype_int16 yypact[] =
{
      13,    27,    53,    68,  -284,    76,    87,    72,   124,   102,
       1,    66,   162,   166,   175,   198,    71,  -284,   213,   157,
      42,   224,   234,   183,    71,   142,   237,   235,   157,   157,
     223,   249,   266,   157,   270,   299,   269,   157,   216,   275,
     157,   112,   272,    71,   283,   209,   282,   279,   288,  -284,
     295,   287,   289,   291,   292,   296,   303,   302,   312,  -284,
    -284,   313,   258,   261,  -284,   113,   270,   270,   270,   270,
    -284,   270,  -284,  -284,   322,  -284,  -284,  -284,  -284,  -284,
    -284,  -284,   323,  -284,   324,  -284,   335,  -284,    65,   190,
    -284,   252,   311,   252,  -284,   338,   330,   340,   344,   147,
     183,   183,   334,   346,   342,   343,   145,   299,  -284,   337,
    -284,   348,   297,   349,   351,   345,   347,  -284,  -284,  -284,
    -284,  -284,   116,   116,   199,   301,  -284,    34,  -284,  -284,
    -284,   149,   300,   190,   190,   190,   190,   190,  -284,  -284,
    -284,  -284,  -284,  -284,   353,  -284,   352,  -284,   157,   358,
      63,  -284,  -284,   359,   360,   -20,   314,   197,    18,  -284,
    -284,   100,  -284,   361,   364,  -284,   145,  -284,   354,  -284,
    -284,   356,  -284,   357,   325,   362,   221,  -284,  -284,   110,
    -284,   366,   365,   367,   363,   370,  -284,  -284,  -284,  -284,
    -284,   368,   201,   372,   157,  -284,  -284,  -284,  -284,   371,
    -284,  -284,   157,   369,   290,   197,  -284,  -284,  -284,  -284,
    -284,   326,  -284,   145,   157,  -284,   379,   310,  -284,  -284,
     373,  -284,  -284,   116,   374,   375,   206,   199,   199,   199,
     199,   199,  -284,  -284,  -284,   145,  -284,  -284,   377,   376,
      71,   386,   380,   381,   383,   378,  -284,  -284,  -284,   389,
     105,  -284,  -284,   350,   388,  -284,  -284,    47,   379,   379,
    -284,   393,   270,   382,  -284,   325,   384,  -284,  -284,   225,
     225,  -284,  -284,   233,  -284,   387,   394,  -284,   397,   405,
    -284,   406,   385,  -284,  -284,   390,    26,   396,  -284,  -284,
     210,  -284,  -284,  -284,  -284,   190,   391,  -284,  -284,   402,
     407,   290,   395,  -284,   145,   145,   119,   355,   210,   210,
     210,  -284,  -284,   404,  -284,  -284,   410,   398,  -284,  -284,
     400,   413,  -284,  -284,  -284,  -284,  -284,  -284,   379,   145,
    -284,   201,  -284,  -284,  -284,   210,  -284
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -284,  -284,   -23,   401,  -284,   171,  -284,  -284,   -99,   -42,
     331,    94,  -284,    41,  -284,   -34,   125,   -82,  -284,   -32,
    -284,   204,  -101,   -31,  -284,   -28,  -109,  -284,   226,  -235,
    -284,  -284,  -284,  -284,   -22,   321,  -284,  -283,  -284,  -284,
    -284,  -284,    -3,   -58,  -284,  -284,  -284,    50,  -284,  -119,
    -284
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -1
static const yytype_uint16 yytable[] =
{
      66,    50,   203,    81,    83,   101,    67,    12,   117,   118,
     119,   120,    68,   121,   186,   187,   188,   189,   190,    13,
      94,     1,   174,   288,   289,   322,   323,   324,   212,   204,
       3,    69,    66,    66,    66,    66,   303,    66,    67,    67,
      67,    67,   179,    67,    68,    68,    68,    68,   213,    68,
     145,   200,   336,     4,    41,   133,   304,   219,    42,   182,
     183,   134,   215,    69,    69,    69,    69,   135,    69,    59,
      60,    14,     5,    15,    64,    81,    83,   126,    87,    20,
       8,    90,    21,   127,    71,   127,   136,   128,     6,   128,
     195,   196,   197,   332,   226,    51,     7,    52,   287,   133,
     133,   133,   133,   133,   255,   134,   134,   134,   134,   134,
      11,   135,   135,   135,   135,   135,    71,    71,    71,    71,
     127,    71,   265,   198,   128,    91,   274,    92,   168,    10,
     136,   136,   136,   136,   136,   227,   228,   229,   230,   137,
     227,   228,   229,   230,   169,   269,   270,   271,   272,   273,
      72,    73,    74,    75,    76,    77,    78,    79,    80,   231,
      91,    51,    92,    52,   115,    25,   150,    51,    26,    52,
     320,    16,   251,   252,    54,    17,   312,    55,   116,    56,
      54,    18,   258,   137,   137,   137,   137,   137,   259,   193,
      51,    47,    52,    53,    48,   318,   319,    51,   131,    52,
     184,   132,   157,    54,   291,   158,    55,    19,    56,   238,
      54,   175,   239,    55,    96,    56,    97,   277,   306,   176,
     333,   307,    24,   177,   258,   258,   178,   268,    66,    44,
     259,   259,    61,   175,    67,   242,   227,   228,   229,   230,
      68,   176,    45,   244,    57,   177,    58,   225,   178,   206,
     207,   208,   209,   210,   294,   256,   308,   229,   230,    69,
      62,   133,   309,   227,   228,   229,   230,   134,   310,   251,
     252,   151,   152,   135,   308,   308,   308,    63,    65,    86,
     309,   309,   309,    88,    89,    93,   310,   310,   310,    95,
      98,    99,   136,   102,   258,   139,   140,   141,   142,   143,
     259,   308,   175,   103,   104,   108,   105,   309,   106,   107,
     176,   110,    71,   310,   177,   109,   111,   178,   246,   247,
     113,   112,   114,    41,    72,    73,    74,    75,    76,    77,
      78,    79,    80,    72,    73,    74,    75,    76,    77,    78,
      79,    80,   122,   123,   124,   137,   125,   147,    13,   148,
     248,   149,   153,   154,   155,   156,   161,   162,   164,   163,
     165,   192,   166,   191,   167,   181,   185,   194,   201,   202,
     216,   205,   217,   261,   223,   232,   220,   221,   222,   236,
     235,   243,   237,   241,   224,   254,   233,   257,   234,   275,
     278,   279,   276,   245,   281,   280,   267,   263,   266,   283,
     285,   282,   290,   297,   296,   292,   298,   293,   284,   299,
     300,   314,   302,   305,   325,   313,   315,   329,   321,   317,
     326,   327,   330,    46,   146,   334,   316,   264,   160,     0,
       0,   253,     0,     0,   301
};

static const yytype_int16 yycheck[] =
{
      34,    24,    22,    35,    35,    47,    34,     6,    66,    67,
      68,    69,    34,    71,   133,   134,   135,   136,   137,    18,
      43,     8,   123,   258,   259,   308,   309,   310,    10,    49,
       3,    34,    66,    67,    68,    69,    10,    71,    66,    67,
      68,    69,   124,    71,    66,    67,    68,    69,    30,    71,
      92,   150,   335,     0,    12,    89,    30,   166,    16,    25,
      26,    89,   161,    66,    67,    68,    69,    89,    71,    28,
      29,     5,     4,     7,    33,   107,   107,    12,    37,     8,
       8,    40,    11,    20,    34,    20,    89,    24,    12,    24,
      27,    28,    29,   328,   176,    48,     9,    50,    51,   133,
     134,   135,   136,   137,   213,   133,   134,   135,   136,   137,
       8,   133,   134,   135,   136,   137,    66,    67,    68,    69,
      20,    71,   223,    60,    24,    13,   235,    15,    12,     5,
     133,   134,   135,   136,   137,    30,    31,    32,    33,    89,
      30,    31,    32,    33,    28,   227,   228,   229,   230,   231,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    49,
      13,    48,    15,    50,    51,     8,    19,    48,    11,    50,
      51,     9,   204,   204,    61,     9,   295,    64,    65,    66,
      61,     6,   216,   133,   134,   135,   136,   137,   216,   148,
      48,     8,    50,    51,    11,   304,   305,    48,     8,    50,
      51,    11,    57,    61,   262,    60,    64,     9,    66,     8,
      61,    12,    11,    64,     5,    66,     7,   240,     8,    20,
     329,    11,     9,    24,   258,   259,    27,    21,   262,     5,
     258,   259,     9,    12,   262,   194,    30,    31,    32,    33,
     262,    20,     8,   202,     7,    24,    11,    26,    27,    52,
      53,    54,    55,    56,    21,   214,   290,    32,    33,   262,
      11,   295,   290,    30,    31,    32,    33,   295,   290,   301,
     301,   100,   101,   295,   308,   309,   310,    11,     8,    10,
     308,   309,   310,    67,     9,    13,   308,   309,   310,     6,
       8,    12,   295,     5,   328,    43,    44,    45,    46,    47,
     328,   335,    12,     8,    17,     9,    17,   335,    17,    17,
      20,     9,   262,   335,    24,    12,     4,    27,    28,    29,
      62,     8,    61,    12,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    20,    20,    20,   295,    11,     9,    18,     9,
      60,     7,    18,     7,    12,    12,    19,     9,     9,    62,
       9,     9,    17,    10,    17,    64,    66,     9,     9,     9,
       9,    57,     8,    63,    49,     9,    22,    21,    21,     9,
      17,    10,    14,    11,    22,    59,    21,     8,    21,    12,
       4,    11,    16,    24,    11,    14,    21,    24,    24,    10,
      12,    23,     9,     9,    17,    23,     9,    23,    58,     4,
       4,     9,    22,    17,    10,    24,     9,    17,    63,    24,
      10,    23,     9,    22,    93,   331,   301,   223,   107,    -1,
      -1,   205,    -1,    -1,    49
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     8,    69,     3,     0,     4,    12,     9,     8,    71,
       5,     8,     6,    18,     5,     7,     9,     9,     6,     9,
       8,    11,    70,    72,     9,     8,    11,    81,    83,    93,
      99,   100,   101,   102,   107,   108,   109,   110,   113,   114,
     115,    12,    16,    77,     5,     8,    71,     8,    11,    73,
      70,    48,    50,    51,    61,    64,    66,     7,    11,    81,
      81,     9,    11,    11,    81,     8,    83,    93,   102,   110,
     111,   115,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    87,    88,    91,    92,   103,    10,    81,    67,     9,
      81,    13,    15,    13,    70,     6,     5,     7,     8,    12,
      74,    77,     5,     8,    17,    17,    17,    17,     9,    12,
       9,     4,     8,    62,    61,    51,    65,   111,   111,   111,
     111,   111,    20,    20,    20,    11,    12,    20,    24,    76,
     116,     8,    11,    83,    93,   102,   110,   115,   117,    43,
      44,    45,    46,    47,    78,    77,    78,     9,     9,     7,
      19,    73,    73,    18,     7,    12,    12,    57,    60,    94,
     103,    19,     9,    62,     9,     9,    17,    17,    12,    28,
      87,    90,    91,    89,    90,    12,    20,    24,    27,    85,
      86,    64,    25,    26,    51,    66,   117,   117,   117,   117,
     117,    10,     9,    81,     9,    27,    28,    29,    60,    75,
      76,     9,     9,    22,    49,    57,    52,    53,    54,    55,
      56,    96,    10,    30,    82,    76,     9,     8,   104,    94,
      22,    21,    21,    49,    22,    26,    85,    30,    31,    32,
      33,    49,     9,    21,    21,    17,     9,    14,     8,    11,
      79,    11,    81,    10,    81,    24,    28,    29,    60,    84,
      85,    87,    91,    96,    59,    94,    81,     8,    83,    93,
      97,    63,   112,    24,    89,    90,    24,    21,    21,    85,
      85,    85,    85,    85,    94,    12,    16,    70,     4,    11,
      14,    11,    23,    10,    58,    12,    95,    51,    97,    97,
       9,   111,    23,    23,    21,   118,    17,     9,     9,     4,
       4,    49,    22,    10,    30,    17,     8,    11,    83,    93,
     102,   105,   117,    24,     9,     9,    84,    24,    94,    94,
      51,    63,   105,   105,   105,    10,    10,    23,    98,    17,
       9,    80,    97,    94,    79,   106,   105
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
   Once GCC version 2 has supplanted version 1, this can go.  */

#define YYFAIL		goto yyerrlab

#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)					\
do								\
  if (yychar == YYEMPTY && yylen == 1)				\
    {								\
      yychar = (Token);						\
      yylval = (Value);						\
      yytoken = YYTRANSLATE (yychar);				\
      YYPOPSTACK (1);						\
      goto yybackup;						\
    }								\
  else								\
    {								\
      yyerror (YY_("syntax error: cannot back up")); \
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


/* YY_LOCATION_PRINT -- Print the location on the stream.
   This macro was not mandated originally: define only if we know
   we won't break user code: when these are the locations we know.  */

#ifndef YY_LOCATION_PRINT
# if YYLTYPE_IS_TRIVIAL
#  define YY_LOCATION_PRINT(File, Loc)			\
     fprintf (File, "%d.%d-%d.%d",			\
	      (Loc).first_line, (Loc).first_column,	\
	      (Loc).last_line,  (Loc).last_column)
# else
#  define YY_LOCATION_PRINT(File, Loc) ((void) 0)
# endif
#endif


/* YYLEX -- calling `yylex' with the right arguments.  */

#ifdef YYLEX_PARAM
# define YYLEX yylex (YYLEX_PARAM)
#else
# define YYLEX yylex ()
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
		  Type, Value); \
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
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_value_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  if (!yyvaluep)
    return;
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
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  if (yytype < YYNTOKENS)
    YYFPRINTF (yyoutput, "token %s (", yytname[yytype]);
  else
    YYFPRINTF (yyoutput, "nterm %s (", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep);
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
yy_reduce_print (YYSTYPE *yyvsp, int yyrule)
#else
static void
yy_reduce_print (yyvsp, yyrule)
    YYSTYPE *yyvsp;
    int yyrule;
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
		       		       );
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)		\
do {					\
  if (yydebug)				\
    yy_reduce_print (yyvsp, Rule); \
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

/* Copy into YYRESULT an error message about the unexpected token
   YYCHAR while in state YYSTATE.  Return the number of bytes copied,
   including the terminating null byte.  If YYRESULT is null, do not
   copy anything; just return the number of bytes that would be
   copied.  As a special case, return 0 if an ordinary "syntax error"
   message will do.  Return YYSIZE_MAXIMUM if overflow occurs during
   size calculation.  */
static YYSIZE_T
yysyntax_error (char *yyresult, int yystate, int yychar)
{
  int yyn = yypact[yystate];

  if (! (YYPACT_NINF < yyn && yyn <= YYLAST))
    return 0;
  else
    {
      int yytype = YYTRANSLATE (yychar);
      YYSIZE_T yysize0 = yytnamerr (0, yytname[yytype]);
      YYSIZE_T yysize = yysize0;
      YYSIZE_T yysize1;
      int yysize_overflow = 0;
      enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
      char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
      int yyx;

# if 0
      /* This is so xgettext sees the translatable formats that are
	 constructed on the fly.  */
      YY_("syntax error, unexpected %s");
      YY_("syntax error, unexpected %s, expecting %s");
      YY_("syntax error, unexpected %s, expecting %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s");
# endif
      char *yyfmt;
      char const *yyf;
      static char const yyunexpected[] = "syntax error, unexpected %s";
      static char const yyexpecting[] = ", expecting %s";
      static char const yyor[] = " or %s";
      char yyformat[sizeof yyunexpected
		    + sizeof yyexpecting - 1
		    + ((YYERROR_VERBOSE_ARGS_MAXIMUM - 2)
		       * (sizeof yyor - 1))];
      char const *yyprefix = yyexpecting;

      /* Start YYX at -YYN if negative to avoid negative indexes in
	 YYCHECK.  */
      int yyxbegin = yyn < 0 ? -yyn : 0;

      /* Stay within bounds of both yycheck and yytname.  */
      int yychecklim = YYLAST - yyn + 1;
      int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
      int yycount = 1;

      yyarg[0] = yytname[yytype];
      yyfmt = yystpcpy (yyformat, yyunexpected);

      for (yyx = yyxbegin; yyx < yyxend; ++yyx)
	if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR)
	  {
	    if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
	      {
		yycount = 1;
		yysize = yysize0;
		yyformat[sizeof yyunexpected - 1] = '\0';
		break;
	      }
	    yyarg[yycount++] = yytname[yyx];
	    yysize1 = yysize + yytnamerr (0, yytname[yyx]);
	    yysize_overflow |= (yysize1 < yysize);
	    yysize = yysize1;
	    yyfmt = yystpcpy (yyfmt, yyprefix);
	    yyprefix = yyor;
	  }

      yyf = YY_(yyformat);
      yysize1 = yysize + yystrlen (yyf);
      yysize_overflow |= (yysize1 < yysize);
      yysize = yysize1;

      if (yysize_overflow)
	return YYSIZE_MAXIMUM;

      if (yyresult)
	{
	  /* Avoid sprintf, as that infringes on the user's name space.
	     Don't have undefined behavior even if the translation
	     produced a string with the wrong number of "%s"s.  */
	  char *yyp = yyresult;
	  int yyi = 0;
	  while ((*yyp = *yyf) != '\0')
	    {
	      if (*yyp == '%' && yyf[1] == 's' && yyi < yycount)
		{
		  yyp += yytnamerr (yyp, yyarg[yyi++]);
		  yyf += 2;
		}
	      else
		{
		  yyp++;
		  yyf++;
		}
	    }
	}
      return yysize;
    }
}
#endif /* YYERROR_VERBOSE */


/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
#else
static void
yydestruct (yymsg, yytype, yyvaluep)
    const char *yymsg;
    int yytype;
    YYSTYPE *yyvaluep;
#endif
{
  YYUSE (yyvaluep);

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
int yyparse (void);
#else
int yyparse ();
#endif
#endif /* ! YYPARSE_PARAM */


/* The lookahead symbol.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;

/* Number of syntax errors so far.  */
int yynerrs;



/*-------------------------.
| yyparse or yypush_parse.  |
`-------------------------*/

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
yyparse (void)
#else
int
yyparse ()

#endif
#endif
{


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
  if (yyn == YYPACT_NINF)
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
      if (yyn == 0 || yyn == YYTABLE_NINF)
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
        case 2:

/* Line 1455 of yacc.c  */
#line 74 "syntaxique.y"
    {printf("programme syntaxiquement correct");
                                YYACCEPT;;}
    break;

  case 3:

/* Line 1455 of yacc.c  */
#line 77 "syntaxique.y"
    {printf("programme syntaxiquement correct");
                                YYACCEPT;;}
    break;

  case 4:

/* Line 1455 of yacc.c  */
#line 80 "syntaxique.y"
    {printf("programme syntaxiquement correct");
                                YYACCEPT;;}
    break;

  case 5:

/* Line 1455 of yacc.c  */
#line 83 "syntaxique.y"
    {printf("programme syntaxiquement correct");
                                YYACCEPT;;}
    break;

  case 8:

/* Line 1455 of yacc.c  */
#line 98 "syntaxique.y"
    { sauvCateg = 0;;}
    break;

  case 9:

/* Line 1455 of yacc.c  */
#line 101 "syntaxique.y"
    { sauvCateg = 0; ;}
    break;

  case 13:

/* Line 1455 of yacc.c  */
#line 106 "syntaxique.y"
    { sauvCateg = 1;;}
    break;

  case 14:

/* Line 1455 of yacc.c  */
#line 108 "syntaxique.y"
    { verificationInsertion((yyvsp[(1) - (5)].string),sauvCateg,sauvType,sauvVal,0,sauvState);;}
    break;

  case 16:

/* Line 1455 of yacc.c  */
#line 112 "syntaxique.y"
    {sprintf(sauvVal,"%f",(yyvsp[(1) - (1)].reel)); sauvState=1; strcpy(sauvType,"FLT");;}
    break;

  case 17:

/* Line 1455 of yacc.c  */
#line 113 "syntaxique.y"
    {strcpy(sauvVal,(yyvsp[(1) - (1)].string)); sauvState=2; strcpy(sauvType,"BOL");;}
    break;

  case 18:

/* Line 1455 of yacc.c  */
#line 114 "syntaxique.y"
    {strcpy(sauvVal,(yyvsp[(1) - (1)].string));   sauvState=2; strcpy(sauvType,"CHR");;}
    break;

  case 19:

/* Line 1455 of yacc.c  */
#line 115 "syntaxique.y"
    {strcpy(sauvVal,(yyvsp[(1) - (1)].string)); sauvState=2; strcpy(sauvType,"STR");;}
    break;

  case 20:

/* Line 1455 of yacc.c  */
#line 117 "syntaxique.y"
    {sprintf(sauvVal,"%d",(yyvsp[(2) - (3)].entier)); sauvState=0; strcpy(sauvType,"INT"); (yyval.entier) = (yyvsp[(2) - (3)].entier);;}
    break;

  case 21:

/* Line 1455 of yacc.c  */
#line 118 "syntaxique.y"
    {sprintf(sauvVal,"%d",(yyvsp[(2) - (3)].entier)); sauvState=0; strcpy(sauvType,"INT"); (yyval.entier) = (yyvsp[(2) - (3)].entier);;}
    break;

  case 22:

/* Line 1455 of yacc.c  */
#line 119 "syntaxique.y"
    {sprintf(sauvVal,"%d",(yyvsp[(1) - (1)].entier)); sauvState=0; strcpy(sauvType,"INT"); (yyval.entier) = (yyvsp[(1) - (1)].entier);;}
    break;

  case 23:

/* Line 1455 of yacc.c  */
#line 122 "syntaxique.y"
    {
                    verificationInsertion((yyvsp[(1) - (3)].string),sauvCateg,sauvType,"",0,3);
                  ;}
    break;

  case 24:

/* Line 1455 of yacc.c  */
#line 125 "syntaxique.y"
    {
                    verificationInsertion((yyvsp[(1) - (5)].string),sauvCateg,sauvType,"",0,3);
                  ;}
    break;

  case 25:

/* Line 1455 of yacc.c  */
#line 131 "syntaxique.y"
    {strcpy(sauvType,"INT");;}
    break;

  case 26:

/* Line 1455 of yacc.c  */
#line 132 "syntaxique.y"
    {strcpy(sauvType,"FLT");;}
    break;

  case 27:

/* Line 1455 of yacc.c  */
#line 133 "syntaxique.y"
    {strcpy(sauvType,"CHR");;}
    break;

  case 28:

/* Line 1455 of yacc.c  */
#line 134 "syntaxique.y"
    {strcpy(sauvType,"STR");;}
    break;

  case 29:

/* Line 1455 of yacc.c  */
#line 135 "syntaxique.y"
    {strcpy(sauvType,"BOL");;}
    break;

  case 30:

/* Line 1455 of yacc.c  */
#line 138 "syntaxique.y"
    { insertion((yyvsp[(2) - (5)].string),"tableau",sauvType,"",(yyvsp[(4) - (5)].entier),3); ;}
    break;

  case 35:

/* Line 1455 of yacc.c  */
#line 144 "syntaxique.y"
    {
              InverserChaine(buffer);  
              printf("%s\n",buffer);
              quadr("OUTPUT",buffer,"vide","vide");
              strncpy(buffer, "", sizeof(buffer));  
              ;}
    break;

  case 41:

/* Line 1455 of yacc.c  */
#line 158 "syntaxique.y"
    {
  
                  printf("Val exp affectation 1 =  %f \n",sauvValeur);
                  
                  if(isItConst((yyvsp[(4) - (7)].string))!=0 && verificationType((yyvsp[(4) - (7)].string),typeExp)==0  ){
                    InsertionIdf((yyvsp[(4) - (7)].string),typeExp,sauvVal);
                    quadr("AFF",sauvVal,"vide",(yyvsp[(4) - (7)].string)); 
                  }
                  typeExp=0;
                   
            ;}
    break;

  case 42:

/* Line 1455 of yacc.c  */
#line 169 "syntaxique.y"
    {
                   
                   if(categDeclaredAs((yyvsp[(4) - (10)].string),"tableau")==0){ 
                     printf("Val exp affectation2 =  %f \n",sauvValeur);
                     
                     if(verificationType((yyvsp[(4) - (10)].string),typeExp)==0){
                       
                       InsertionTab((yyvsp[(4) - (10)].string),(yyvsp[(6) - (10)].entier),sauvVal);
                       char str[100];
                       strcat(str,(yyvsp[(4) - (10)].string));
                        strcat(str,"[");
                        sprintf(sauvVal,"%d",(yyvsp[(6) - (10)].entier));
                        strcat(str,sauvVal);
                        strcat(str,"]");
                       quadr("AFF",sauvVal,"vide",str);
                     }
                     
                    
                   } 
            ;}
    break;

  case 43:

/* Line 1455 of yacc.c  */
#line 191 "syntaxique.y"
    { sauvValeur=(yyvsp[(1) - (1)].reel); sprintf(sauvVal,"%f",(yyvsp[(1) - (1)].reel));;}
    break;

  case 44:

/* Line 1455 of yacc.c  */
#line 192 "syntaxique.y"
    { 
      typeExp = 3;  
      if((yyvsp[(1) - (1)].entier) == 1) strcpy(sauvVal,"TRUE");
      else if((yyvsp[(1) - (1)].entier) == 0) strcpy(sauvVal,"FALSE");
  ;}
    break;

  case 45:

/* Line 1455 of yacc.c  */
#line 197 "syntaxique.y"
    { typeExp = 3; 
      if((yyvsp[(1) - (1)].entier) == 1) strcpy(sauvVal,"TRUE");
      else if((yyvsp[(1) - (1)].entier) == 0) strcpy(sauvVal,"FALSE");  ;}
    break;

  case 46:

/* Line 1455 of yacc.c  */
#line 200 "syntaxique.y"
    {strcpy(sauvType,"STR"); strcpy(sauvVal,(yyvsp[(1) - (1)].string));  typeExp = 2;;}
    break;

  case 47:

/* Line 1455 of yacc.c  */
#line 201 "syntaxique.y"
    {strcpy(sauvType,"CHR"); strcpy(sauvVal,(yyvsp[(1) - (1)].string)); typeExp = 2;;}
    break;

  case 48:

/* Line 1455 of yacc.c  */
#line 202 "syntaxique.y"
    {strcpy(sauvType,"BOL"); strcpy(sauvVal,(yyvsp[(1) - (1)].string)); typeExp = 3;;}
    break;

  case 49:

/* Line 1455 of yacc.c  */
#line 206 "syntaxique.y"
    { (yyval.reel) =((yyvsp[(2) - (3)].reel)) ; ;}
    break;

  case 50:

/* Line 1455 of yacc.c  */
#line 207 "syntaxique.y"
    { (yyval.reel) = (yyvsp[(1) - (3)].reel) + (yyvsp[(3) - (3)].reel); printf ("+\n");;}
    break;

  case 51:

/* Line 1455 of yacc.c  */
#line 208 "syntaxique.y"
    { (yyval.reel) = (yyvsp[(1) - (3)].reel) - (yyvsp[(3) - (3)].reel) ; ;}
    break;

  case 52:

/* Line 1455 of yacc.c  */
#line 209 "syntaxique.y"
    { 
                        if( (yyvsp[(3) - (3)].reel) != 0 ) (yyval.reel) = (yyvsp[(1) - (3)].reel) / (yyvsp[(3) - (3)].reel) ; 
                        else printf("Erreur semantique : division par zero \n");                                  
                                                            ;}
    break;

  case 53:

/* Line 1455 of yacc.c  */
#line 213 "syntaxique.y"
    { (yyval.reel) = (yyvsp[(1) - (3)].reel) * (yyvsp[(3) - (3)].reel) ;;}
    break;

  case 54:

/* Line 1455 of yacc.c  */
#line 214 "syntaxique.y"
    { (yyval.reel) = (yyvsp[(1) - (1)].reel); ;}
    break;

  case 55:

/* Line 1455 of yacc.c  */
#line 216 "syntaxique.y"
    { (yyval.reel) = (float)(yyvsp[(2) - (3)].entier); ;}
    break;

  case 56:

/* Line 1455 of yacc.c  */
#line 217 "syntaxique.y"
    { (yyval.reel) = (float)(yyvsp[(1) - (1)].entier); ;}
    break;

  case 57:

/* Line 1455 of yacc.c  */
#line 218 "syntaxique.y"
    { (yyval.reel) = (yyvsp[(1) - (1)].reel);  typeExp=1; ;}
    break;

  case 58:

/* Line 1455 of yacc.c  */
#line 219 "syntaxique.y"
    { 
       printf("idf = %s\n",(yyvsp[(1) - (1)].string));
       sauvState=typeEntite((yyvsp[(1) - (1)].string));
       if(sauvState==1) typeExp=1;
       getValueIdf((yyvsp[(1) - (1)].string),res); 
       sauvValeur=atof(res);
       (yyval.reel)=atof(res);
     ;}
    break;

  case 59:

/* Line 1455 of yacc.c  */
#line 227 "syntaxique.y"
    { 
       
       sauvState=typeEntite((yyvsp[(1) - (4)].string));
       if(sauvState==1) typeExp=1;
       sauvValeur=getValueTab((yyvsp[(1) - (4)].string),(yyvsp[(3) - (4)].entier));
       (yyval.reel)=sauvValeur;
     ;}
    break;

  case 60:

/* Line 1455 of yacc.c  */
#line 238 "syntaxique.y"
    {
                    (yyval.entier) = (yyvsp[(3) - (4)].entier); 

                    if((yyvsp[(3) - (4)].entier) == 0)  quadr((yyvsp[(1) - (4)].string),"FALSE","vide","vide");
                    else quadr((yyvsp[(1) - (4)].string),"TRUE","vide","vide");
                   
                  ;}
    break;

  case 61:

/* Line 1455 of yacc.c  */
#line 245 "syntaxique.y"
    {
                    (yyval.entier) = !(yyvsp[(3) - (4)].entier); 

                    if((yyvsp[(3) - (4)].entier) != 0)  quadr("NOT","FALSE","vide","vide");
                    else quadr("NOT","TRUE","vide","vide");
                  ;}
    break;

  case 62:

/* Line 1455 of yacc.c  */
#line 253 "syntaxique.y"
    { valLog = 0; (yyval.string) = "AND"; ;}
    break;

  case 63:

/* Line 1455 of yacc.c  */
#line 254 "syntaxique.y"
    { valLog = 1;  (yyval.string) = "OR"; ;}
    break;

  case 64:

/* Line 1455 of yacc.c  */
#line 256 "syntaxique.y"
    {
            if(valLog == 0){
                  (yyval.entier) = (yyvsp[(1) - (3)].entier) && (yyvsp[(3) - (3)].entier);
            }else if(valLog == 1){
                  (yyval.entier) = (yyvsp[(1) - (3)].entier) || (yyvsp[(3) - (3)].entier) ;
           }
            ;}
    break;

  case 65:

/* Line 1455 of yacc.c  */
#line 263 "syntaxique.y"
    {
            if(valLog == 0){
                  (yyval.entier) = (yyvsp[(1) - (3)].entier) && (yyvsp[(3) - (3)].entier);
            }else if(valLog == 1){
                  (yyval.entier) = (yyvsp[(1) - (3)].entier) || (yyvsp[(3) - (3)].entier) ;
           }
            ;}
    break;

  case 66:

/* Line 1455 of yacc.c  */
#line 272 "syntaxique.y"
    {
          (yyval.entier) = (yyvsp[(1) - (1)].entier); 
         ;}
    break;

  case 67:

/* Line 1455 of yacc.c  */
#line 275 "syntaxique.y"
    { 
          (yyval.entier) = (yyvsp[(1) - (1)].entier);
         ;}
    break;

  case 68:

/* Line 1455 of yacc.c  */
#line 278 "syntaxique.y"
    {
            if(strcmp((yyvsp[(1) - (1)].string),"FALSE")==0) (yyval.entier) = 0; //false
            else if(strcmp((yyvsp[(1) - (1)].string),"TRUE")==0) (yyval.entier) = 1; //true
         ;}
    break;

  case 69:

/* Line 1455 of yacc.c  */
#line 282 "syntaxique.y"
    { 
            
            if(ValueIdfBol((yyvsp[(1) - (1)].string))==1) (yyval.entier) = 0; //false
            else if(ValueIdfBol((yyvsp[(1) - (1)].string))==0) (yyval.entier) = 1; //true    
         ;}
    break;

  case 70:

/* Line 1455 of yacc.c  */
#line 288 "syntaxique.y"
    {
           
          
            if(ValueTabBol((yyvsp[(1) - (4)].string),(yyvsp[(3) - (4)].entier))==1) (yyval.entier) = 0; //false
            else if(ValueTabBol((yyvsp[(1) - (4)].string),(yyvsp[(3) - (4)].entier))==0) (yyval.entier) = 1; //true 
            
         ;}
    break;

  case 71:

/* Line 1455 of yacc.c  */
#line 297 "syntaxique.y"
    {
   
  sprintf(val1,"%f",(float)(yyvsp[(3) - (6)].reel));
  sprintf(val2,"%f",(float)(yyvsp[(5) - (6)].reel));
  sprintf(valSigne,"%d",(yyvsp[(1) - (6)].entier));
  resComp=resultatComparaison(val1,val2,valSigne);
  //printf("Resultat: %d \n",resComp);
  if(resComp == 0){
    (yyval.entier)=1; //TRUE
  }else if(resComp ==1 ){
    (yyval.entier)=0; //FALSE
  }

  char str[100];
  if(resComp == 0 ) strcpy(str,"TRUE");
  else strcpy(str,"FALSE");

  if((yyvsp[(1) - (6)].entier) == 0) quadr("SUP",str,"vide","vide");
  else if((yyvsp[(1) - (6)].entier) == 1) quadr("SUPEG",str,"vide","vide");
  else if((yyvsp[(1) - (6)].entier) == 2) quadr("INFEG",str,"vide","vide");
  else if((yyvsp[(1) - (6)].entier) == 3) quadr("INF",str,"vide","vide");
  else if((yyvsp[(1) - (6)].entier) == 4) quadr("EGA",str,"vide","vide");
  else if((yyvsp[(1) - (6)].entier) == 5) quadr("DIF",str,"vide","vide");



;}
    break;

  case 72:

/* Line 1455 of yacc.c  */
#line 325 "syntaxique.y"
    { (yyval.entier)=0; ;}
    break;

  case 73:

/* Line 1455 of yacc.c  */
#line 326 "syntaxique.y"
    { (yyval.entier)=1 ;;}
    break;

  case 74:

/* Line 1455 of yacc.c  */
#line 327 "syntaxique.y"
    { (yyval.entier)=2 ;;}
    break;

  case 75:

/* Line 1455 of yacc.c  */
#line 328 "syntaxique.y"
    { (yyval.entier)=3 ;;}
    break;

  case 76:

/* Line 1455 of yacc.c  */
#line 329 "syntaxique.y"
    { (yyval.entier)=4 ;;}
    break;

  case 77:

/* Line 1455 of yacc.c  */
#line 330 "syntaxique.y"
    { (yyval.entier)=5 ;}
    break;

  case 78:

/* Line 1455 of yacc.c  */
#line 335 "syntaxique.y"
    {
  fonctionInput((yyvsp[(4) - (7)].string),(yyvsp[(6) - (7)].entier));
  quadr("INPUT","vide","vide",(yyvsp[(4) - (7)].string));
;}
    break;

  case 79:

/* Line 1455 of yacc.c  */
#line 344 "syntaxique.y"
    { 
        VerificationTypeINOUT((yyvsp[(4) - (6)].string),(yyvsp[(2) - (6)].entier)); 
        char str[100]; 

        strcpy(str,(yyvsp[(3) - (6)].string));
        str[strlen(str)-1]='\0';
        str[strlen(str)-2]='\0';
        InverserChaine(str);
        strcat(buffer,str);
        str[0]='\0';
        
        if(tab == 0 ){ 
          
           
          getValIdf((yyvsp[(4) - (6)].string),ch,-1);
          printf("ch0 = %s\n",ch);
        }else if (tab == 1){ 
          getValIdf((yyvsp[(4) - (6)].string),ch,pos);
          printf("ch0 = %s\n",ch);
          pos = 0;
        } 
        
        InverserChaine(ch);
        printf("ch = %s\n",ch);      
        strcat(buffer,ch);
        ch[0]='\0';

        strcpy(str,(yyvsp[(1) - (6)].string));
        strncpy(str,str + 1,strlen(str));
        InverserChaine(str);
        strcat(buffer,str);
        str[0]='\0';

        
      ;}
    break;

  case 80:

/* Line 1455 of yacc.c  */
#line 379 "syntaxique.y"
    {
        deb = 2; 
        char str[100]; 
        strcpy(str,(yyvsp[(1) - (3)].string));
        str[strlen(str)-1]='\0';
        strncpy(str,str + 1,strlen(str)); 
        InverserChaine(str);
        strcat(buffer,str);
        strcpy(str,"");
      ;}
    break;

  case 81:

/* Line 1455 of yacc.c  */
#line 389 "syntaxique.y"
    {
        deb = 3;
         VerificationTypeINOUT((yyvsp[(4) - (5)].string),(yyvsp[(2) - (5)].entier)); 
        char str[100]; 

        strcpy(str,(yyvsp[(3) - (5)].string));
        str[strlen(str)-1]='\0';
        str[strlen(str)-2]='\0';
        InverserChaine(str);
        strcat(buffer,str);
        strcpy(str,"");
        
        if(tab == 0 ){
          getValIdf((yyvsp[(4) - (5)].string),ch,-1);
        }else if (tab == 1){ 
          getValIdf((yyvsp[(4) - (5)].string),ch,pos);
          pos = 0;
        } 
        InverserChaine(ch);
        strcat(buffer,ch);
        strcpy(ch,"");

        strcpy(str,(yyvsp[(1) - (5)].string));
        strncpy(str,str + 1,strlen(str));
        InverserChaine(str);
        strcat(buffer,str);
        strcpy(str,"");
      ;}
    break;

  case 82:

/* Line 1455 of yacc.c  */
#line 417 "syntaxique.y"
    {
        deb = 4; 
        char str[100]; 
        strcpy(str,(yyvsp[(1) - (2)].string));
        str[strlen(str)-1]='\0';
        strncpy(str,str + 1,strlen(str)); 
        InverserChaine(str);
        strcat(buffer,str);
        
        strcpy(str,"");

      ;}
    break;

  case 83:

/* Line 1455 of yacc.c  */
#line 431 "syntaxique.y"
    { (yyval.string) = (yyvsp[(1) - (1)].string); tab = 0; ;}
    break;

  case 84:

/* Line 1455 of yacc.c  */
#line 432 "syntaxique.y"
    { (yyval.string) = (yyvsp[(1) - (4)].string); tab = 1; pos = (yyvsp[(3) - (4)].entier); ;}
    break;

  case 85:

/* Line 1455 of yacc.c  */
#line 435 "syntaxique.y"
    { (yyval.entier) = 1;;}
    break;

  case 86:

/* Line 1455 of yacc.c  */
#line 436 "syntaxique.y"
    { (yyval.entier) = 2;;}
    break;

  case 87:

/* Line 1455 of yacc.c  */
#line 437 "syntaxique.y"
    { (yyval.entier) = 3;;}
    break;

  case 88:

/* Line 1455 of yacc.c  */
#line 438 "syntaxique.y"
    { (yyval.entier) = 4;;}
    break;

  case 89:

/* Line 1455 of yacc.c  */
#line 439 "syntaxique.y"
    { (yyval.entier) = 5;;}
    break;

  case 92:

/* Line 1455 of yacc.c  */
#line 444 "syntaxique.y"
    {  
              InverserChaine(buffer);  
              printf("%s\n",buffer);
              quadr("OUTPUT",buffer,"vide","vide");
              strncpy(buffer, "", sizeof(buffer));  
              ;}
    break;

  case 95:

/* Line 1455 of yacc.c  */
#line 460 "syntaxique.y"
    {

               deb_else = qc;
               quadr("BZ","","tmp_cond","vide");
                

    ;}
    break;

  case 96:

/* Line 1455 of yacc.c  */
#line 469 "syntaxique.y"
    {
      Fin_if=qc;
      quadr("BR","","vide","vide"); 
      sprintf(tmp,"%d",qc);
      ajour_quad(deb_else,1,tmp); 
;}
    break;

  case 97:

/* Line 1455 of yacc.c  */
#line 477 "syntaxique.y"
    {

    ;}
    break;

  case 99:

/* Line 1455 of yacc.c  */
#line 482 "syntaxique.y"
    { 

      sprintf(tmp,"%d",qc);
      ajour_quad(Fin_if,1,tmp);
      printf("pgm correct\n"); 

;}
    break;

  case 100:

/* Line 1455 of yacc.c  */
#line 491 "syntaxique.y"
    { 
              (yyval.entier) = (yyvsp[(1) - (1)].entier); 
              
          ;}
    break;

  case 101:

/* Line 1455 of yacc.c  */
#line 495 "syntaxique.y"
    { 
              (yyval.entier) = (yyvsp[(1) - (1)].entier);
         ;}
    break;

  case 105:

/* Line 1455 of yacc.c  */
#line 505 "syntaxique.y"
    {  
                    InverserChaine(buffer);  
                    printf("%s\n",buffer);
                    quadr("OUTPUT",buffer,"vide","vide");
                    strncpy(buffer, "", sizeof(buffer));  
              ;}
    break;

  case 109:

/* Line 1455 of yacc.c  */
#line 520 "syntaxique.y"
    { //R1
    
    DebCondDo=qc;
    quadr("BR","","vide","vide");

    DebInstDo=qc;

;}
    break;

  case 110:

/* Line 1455 of yacc.c  */
#line 529 "syntaxique.y"
    {
  sprintf(tmp,"%d",qc);
  ajour_quad(DebCondDo,1,tmp);
;}
    break;

  case 111:

/* Line 1455 of yacc.c  */
#line 535 "syntaxique.y"
    { //R3
    sprintf(tmp,"%d",DebInstDo);
     quadr("BNZ",tmp,"tempInst","vide");
    
;}
    break;

  case 112:

/* Line 1455 of yacc.c  */
#line 542 "syntaxique.y"
    {
  
      printf("pgm correct\n"); 
;}
    break;

  case 115:

/* Line 1455 of yacc.c  */
#line 551 "syntaxique.y"
    {  
                      
                    printf("%s\n",buffer);
                    InverserChaine(buffer);  
                    printf("%s\n",buffer);
                    quadr("OUTPUT",buffer,"vide","vide");
                    strncpy(buffer,"", sizeof(buffer));;}
    break;

  case 121:

/* Line 1455 of yacc.c  */
#line 567 "syntaxique.y"
    { //R1
  Declared((yyvsp[(3) - (5)].string));
  if(typeEntite((yyvsp[(3) - (5)].string))!=0) {
        printf("Erreur semantique : le type de l'entite %s est incompatible au type de la condition For \n",(yyvsp[(3) - (5)].string));
        exit(0);
    }
  cptCondition = qc ; 

;}
    break;

  case 122:

/* Line 1455 of yacc.c  */
#line 577 "syntaxique.y"
    {//R2
  Fin_For = qc;  
  quadr("BZ","","vide","vide");
 

;}
    break;

  case 123:

/* Line 1455 of yacc.c  */
#line 585 "syntaxique.y"
    {
  //R3
 
  sprintf(tmp,"%d",cptCondition); 
  quadr("BR",tmp,"vide","vide");
  
  sprintf(tmp,"%d",qc);
  ajour_quad(Fin_For,1,tmp);
  printf("pgm correct\n"); 
;}
    break;

  case 124:

/* Line 1455 of yacc.c  */
#line 596 "syntaxique.y"
    { 
    if(verificationConditionFor((yyvsp[(1) - (1)].string)) == 1) {(yyval.entier) = getValIdf((yyvsp[(1) - (1)].string)); printf("IDFINT %s = %d \n",(yyvsp[(1) - (1)].string),getValIdf((yyvsp[(1) - (1)].string)));}
   ;}
    break;

  case 125:

/* Line 1455 of yacc.c  */
#line 599 "syntaxique.y"
    { (yyval.entier) = (yyvsp[(1) - (1)].entier); ;}
    break;

  case 128:

/* Line 1455 of yacc.c  */
#line 604 "syntaxique.y"
    {
                   InverserChaine(buffer);  
                    printf("%s\n",buffer);
                    quadr("OUTPUT",buffer,"vide","vide");
                    strncpy(buffer, "", sizeof(buffer));  
              
              ;}
    break;



/* Line 1455 of yacc.c  */
#line 2687 "syntaxique.tab.c"
      default: break;
    }
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
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
      {
	YYSIZE_T yysize = yysyntax_error (0, yystate, yychar);
	if (yymsg_alloc < yysize && yymsg_alloc < YYSTACK_ALLOC_MAXIMUM)
	  {
	    YYSIZE_T yyalloc = 2 * yysize;
	    if (! (yysize <= yyalloc && yyalloc <= YYSTACK_ALLOC_MAXIMUM))
	      yyalloc = YYSTACK_ALLOC_MAXIMUM;
	    if (yymsg != yymsgbuf)
	      YYSTACK_FREE (yymsg);
	    yymsg = (char *) YYSTACK_ALLOC (yyalloc);
	    if (yymsg)
	      yymsg_alloc = yyalloc;
	    else
	      {
		yymsg = yymsgbuf;
		yymsg_alloc = sizeof yymsgbuf;
	      }
	  }

	if (0 < yysize && yysize <= yymsg_alloc)
	  {
	    (void) yysyntax_error (yymsg, yystate, yychar);
	    yyerror (yymsg);
	  }
	else
	  {
	    yyerror (YY_("syntax error"));
	    if (yysize != 0)
	      goto yyexhaustedlab;
	  }
      }
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
		      yytoken, &yylval);
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
      if (yyn != YYPACT_NINF)
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
		  yystos[yystate], yyvsp);
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
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif

yyreturn:
  if (yychar != YYEMPTY)
     yydestruct ("Cleanup: discarding lookahead",
		 yytoken, &yylval);
  /* Do not reclaim the symbols of the rule which action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
		  yystos[*yyssp], yyvsp);
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



/* Line 1675 of yacc.c  */
#line 617 "syntaxique.y"

int main(int argc,char* argv[])
{   

      
      /*yyin = fopen(argv[1], "r");
      strcpy(FileName,argv[1]);
      if (yyin==NULL) printf("ERROR \n");
      else {}*/
        create_hash_table();
        yyparse(); 
        affichage_table();
        afficher_qdr();


    return 0;
}
    
yywrap ()
{

}

int  yyerror(char *msg){

  //File "Test", line 4, character 56:syntax error
  /* switch(i){ 
    case 1:printf("File \"%s\", line %d, character %d:semantic error: %s",FileName,nb_ligne,Col,msg);break;
    case 2:printf("File \"%s\", line %d, character %d:lexical error: %s",FileName,nb_ligne,Col,msg);break;
    default:printf("File \"%s\", line %d, character %d:%s",FileName,nb_ligne,Col,msg);break;
  } */
    //printf("File \"%s\", line %d, character %d:%s",FileName,nb_ligne,Col,msg);
    printf("line %d, character %d:%s",nb_ligne,Col,msg);
  return 1;
}
