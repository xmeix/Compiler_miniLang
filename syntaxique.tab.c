
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
    int Fin_if=0,deb_else=0 , Fin_Do=0 , DebInstDo=0 , DebCondDo = 0;
    int qc=0;
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
#define YYLAST   416

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  68
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  47
/* YYNRULES -- Number of rules.  */
#define YYNRULES  129
/* YYNRULES -- Number of states.  */
#define YYNSTATES  316

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
       0,     0,     3,    17,    24,    31,    37,    39,    43,    51,
      56,    57,    64,    68,    72,    77,    83,    85,    87,    89,
      91,    93,    97,   101,   103,   107,   113,   115,   117,   119,
     121,   123,   124,   132,   136,   139,   142,   143,   150,   153,
     156,   159,   163,   171,   182,   184,   186,   188,   190,   192,
     194,   198,   202,   206,   210,   214,   216,   220,   222,   224,
     226,   231,   236,   241,   243,   245,   249,   253,   255,   257,
     259,   261,   266,   273,   275,   277,   279,   281,   283,   285,
     293,   300,   304,   310,   313,   315,   320,   322,   324,   326,
     328,   330,   333,   336,   337,   344,   345,   350,   357,   363,
     368,   373,   375,   377,   382,   385,   388,   389,   396,   399,
     403,   407,   410,   413,   419,   422,   425,   431,   434,   437,
     440,   444,   454,   464,   467,   470,   476,   479,   482,   485
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      69,     0,    -1,     8,     3,     4,    12,     9,    70,     8,
       7,     9,    82,    11,     4,     9,    -1,     8,     5,     6,
       9,    71,    72,    -1,    72,     8,     5,     6,     9,    71,
      -1,     8,     5,     6,     9,    71,    -1,    72,    -1,     8,
      78,    71,    -1,     8,    16,    13,    79,     9,    80,    71,
      -1,    11,     5,     6,     9,    -1,    -1,     8,     5,    18,
       9,    73,    74,    -1,     8,    78,    74,    -1,     8,    75,
      74,    -1,    11,     5,    18,     9,    -1,    12,    19,    76,
      10,    14,    -1,    77,    -1,    27,    -1,    28,    -1,    29,
      -1,    60,    -1,    20,    25,    21,    -1,    20,    26,    21,
      -1,    24,    -1,    12,    15,    78,    -1,    12,    13,    79,
      10,    14,    -1,    43,    -1,    44,    -1,    45,    -1,    46,
      -1,    47,    -1,    -1,     8,    12,    17,    24,    10,    81,
      80,    -1,    11,    16,     9,    -1,    84,    82,    -1,    94,
      82,    -1,    -1,     8,    51,    17,    95,    83,    82,    -1,
     103,    82,    -1,   111,    82,    -1,   113,    82,    -1,    11,
       7,     9,    -1,     8,    48,    17,    12,    49,    85,    10,
      -1,     8,    48,    17,    12,    22,    24,    23,    49,    85,
      10,    -1,    86,    -1,    92,    -1,    88,    -1,    60,    -1,
      29,    -1,    28,    -1,    20,    86,    21,    -1,    86,    30,
      86,    -1,    86,    31,    86,    -1,    86,    33,    86,    -1,
      86,    32,    86,    -1,    87,    -1,    20,    26,    21,    -1,
      24,    -1,    27,    -1,    12,    -1,    12,    22,    24,    23,
      -1,    89,    20,    90,    21,    -1,    36,    20,    91,    21,
      -1,    34,    -1,    35,    -1,    91,    49,    90,    -1,    91,
      49,    91,    -1,    88,    -1,    92,    -1,    28,    -1,    12,
      -1,    12,    22,    24,    23,    -1,    93,    20,    86,    49,
      86,    21,    -1,    37,    -1,    39,    -1,    40,    -1,    38,
      -1,    41,    -1,    42,    -1,     8,    50,    17,    12,    57,
      97,    58,    -1,    57,    97,    59,    96,    30,    95,    -1,
      60,    30,    95,    -1,    57,    97,    59,    96,    10,    -1,
      60,    10,    -1,    12,    -1,    12,    22,    24,    23,    -1,
      52,    -1,    53,    -1,    54,    -1,    55,    -1,    56,    -1,
      84,    98,    -1,    94,    98,    -1,    -1,     8,    51,    17,
      95,    99,    98,    -1,    -1,     8,    61,    17,   104,    -1,
     100,     9,     8,    62,     9,    98,    -1,   101,    11,    62,
       9,   105,    -1,   101,    11,    62,     9,    -1,   102,    11,
      61,     9,    -1,    88,    -1,    92,    -1,     8,    63,     9,
     106,    -1,    84,   106,    -1,    94,   106,    -1,    -1,     8,
      51,    17,    95,   107,   106,    -1,   103,   106,    -1,    11,
      63,     9,    -1,     8,    64,     9,    -1,   108,   112,    -1,
     109,   104,    -1,   110,    10,    11,    64,     9,    -1,    84,
     112,    -1,    94,   112,    -1,     8,    51,    17,    95,   112,
      -1,   103,   112,    -1,   111,   112,    -1,   113,   112,    -1,
       8,    65,    17,    -1,     8,    66,    12,    19,    77,    67,
      77,     9,   114,    -1,     8,    66,    12,    19,    77,    67,
      12,     9,   114,    -1,    84,   114,    -1,    94,   114,    -1,
       8,    51,    17,    95,   114,    -1,   103,   114,    -1,   111,
     114,    -1,   113,   114,    -1,    11,    66,     9,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    71,    71,    78,    79,    80,    81,    86,    87,    88,
      91,    91,    94,    95,    96,    98,   101,   102,   103,   104,
     105,   107,   108,   109,   112,   115,   121,   122,   123,   124,
     125,   128,   128,   129,   132,   133,   134,   134,   135,   136,
     137,   138,   145,   156,   178,   179,   184,   187,   188,   189,
     193,   194,   195,   196,   200,   201,   203,   204,   205,   206,
     214,   225,   232,   240,   241,   243,   250,   259,   262,   265,
     269,   275,   284,   312,   313,   314,   315,   316,   317,   322,
     330,   366,   376,   404,   418,   419,   422,   423,   424,   425,
     426,   429,   430,   431,   431,   437,   447,   456,   464,   467,
     469,   478,   482,   488,   490,   491,   492,   492,   498,   499,
     507,   516,   522,   528,   535,   536,   537,   538,   539,   540,
     541,   546,   547,   550,   551,   552,   553,   554,   555,   556
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
  "$accept", "S", "DEC_TOTAL", "DECLARATION", "DECLARATION_CONST", "$@1",
  "LISTE_DEC_CONST", "DEC_CONST_EGAL", "SWITCH_CST_TYPES", "SWITCH_INT",
  "DECLARATION_SIMPLE", "TYPE", "DECLARATION_TAB", "$@2", "BODY", "$@3",
  "AFFECTATION", "X", "EXPRESSION_ARITH", "TERM", "EXPRESSION_LOGIQUE",
  "OpLog", "EXPRESSIONS", "TYPE_EXP", "EXPRESSION_COMPARAISON",
  "MC_COMPARAISON", "INPUT", "OUTPUT", "ID", "SIGNE_FORMATAGE",
  "INSTRUCTION", "$@4", "IF_A", "IF_B", "IF_C", "INST_IF", "CONDITION",
  "INST_ELSE", "INSTRUCTION_ELSE", "$@5", "BOUCLE_DO_A", "BOUCLE_DO_B",
  "BOUCLE_DO_C", "BOUCLE_DO", "INSTRUCTION_BOUCLE_DO", "BOUCLE_FOR",
  "INSTRUCTION_BOUCLE_FOR", 0
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
       0,    68,    69,    70,    70,    70,    70,    71,    71,    71,
      73,    72,    74,    74,    74,    75,    76,    76,    76,    76,
      76,    77,    77,    77,    78,    78,    79,    79,    79,    79,
      79,    81,    80,    80,    82,    82,    83,    82,    82,    82,
      82,    82,    84,    84,    85,    85,    85,    85,    85,    85,
      86,    86,    86,    86,    86,    86,    87,    87,    87,    87,
      87,    88,    88,    89,    89,    90,    90,    91,    91,    91,
      91,    91,    92,    93,    93,    93,    93,    93,    93,    94,
      95,    95,    95,    95,    96,    96,    97,    97,    97,    97,
      97,    98,    98,    99,    98,    98,   100,   101,   102,   102,
     103,   104,   104,   105,   106,   106,   107,   106,   106,   106,
     108,   109,   110,   111,   112,   112,   112,   112,   112,   112,
     112,   113,   113,   114,   114,   114,   114,   114,   114,   114
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,    13,     6,     6,     5,     1,     3,     7,     4,
       0,     6,     3,     3,     4,     5,     1,     1,     1,     1,
       1,     3,     3,     1,     3,     5,     1,     1,     1,     1,
       1,     0,     7,     3,     2,     2,     0,     6,     2,     2,
       2,     3,     7,    10,     1,     1,     1,     1,     1,     1,
       3,     3,     3,     3,     3,     1,     3,     1,     1,     1,
       4,     4,     4,     1,     1,     3,     3,     1,     1,     1,
       1,     4,     6,     1,     1,     1,     1,     1,     1,     7,
       6,     3,     5,     2,     1,     4,     1,     1,     1,     1,
       1,     2,     2,     0,     6,     0,     4,     6,     5,     4,
       4,     1,     1,     4,     2,     2,     0,     6,     2,     3,
       3,     2,     2,     5,     2,     2,     5,     2,     2,     2,
       3,     9,     9,     2,     2,     5,     2,     2,     2,     3
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,     0,     0,     1,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    10,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     3,     0,     0,    11,
       0,     0,     0,     0,     0,     0,     0,     0,    34,    35,
       0,     0,     0,    38,     0,     0,     0,     0,     0,   111,
       0,    63,    64,     0,    73,    76,    74,    75,    77,    78,
     101,     0,   102,     0,   112,     0,    39,    40,     4,     0,
       0,     0,     7,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   110,     0,    41,     0,     0,     0,     0,
       0,     0,   114,   115,   117,   118,   119,     0,     0,     0,
       0,    26,    27,    28,    29,    30,     0,    24,     0,     9,
       0,    13,    12,     0,     0,     0,     0,     0,    36,    96,
       0,     2,     0,    99,   100,     0,   120,    70,    69,    67,
       0,    68,     0,     0,    59,     0,    57,    58,     0,    55,
       0,     0,     0,     0,    23,    17,    18,    19,    20,     0,
      16,    14,     0,     0,     0,    86,    87,    88,    89,    90,
       0,    83,     0,     0,     0,    95,     0,    98,     0,     0,
      62,    61,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   113,    25,     0,     0,     0,     0,     0,     0,     0,
      49,    48,    47,     0,    44,    46,    45,     0,     0,    81,
      37,     0,     0,    95,    95,    97,     0,   116,     0,    65,
      66,     0,    56,    50,    51,    52,    54,    53,     0,     0,
       0,     8,    21,    22,    15,     0,    42,    79,    84,     0,
       0,     0,     0,    91,    92,     0,    71,    60,    72,     0,
      33,     0,     0,    82,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   103,     0,     0,     0,    80,     0,     0,
       0,     0,     0,     0,     0,   122,   121,    93,     0,     0,
     104,   105,   108,    31,    43,    85,     0,     0,   123,   124,
     126,   127,   128,    95,     0,   109,     0,     0,   129,    94,
     106,    32,     0,     0,   125,   107
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     2,     9,    24,    10,    25,    49,    96,   169,   170,
      43,   126,   205,   306,    28,   183,   280,   213,   214,   159,
     149,    81,   152,   150,   151,    83,   281,   138,   249,   180,
     225,   303,    31,    32,    33,   282,    84,   187,   273,   313,
      35,    36,    37,   283,    69,   284,   285
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -188
static const yytype_int16 yypact[] =
{
      19,    48,    59,    39,  -188,    67,    83,    91,   125,   136,
     142,    68,   131,   154,   173,   181,   192,   201,    80,  -188,
     150,   203,    28,   211,   219,   156,   212,   214,   218,   150,
     150,   223,   230,   233,   150,   226,   294,   239,   150,   150,
      80,   187,   240,    80,   248,   251,  -188,   249,   260,  -188,
     252,   257,   258,   264,   259,   272,   276,   282,  -188,  -188,
     280,   227,   231,  -188,   158,   226,   226,   226,   226,  -188,
     226,  -188,  -188,   277,  -188,  -188,  -188,  -188,  -188,  -188,
    -188,   278,  -188,   279,  -188,   300,  -188,  -188,  -188,   271,
     330,   271,  -188,   303,   325,   122,   156,   156,   326,   333,
     334,   -49,   294,  -188,   328,  -188,   339,   287,   341,   342,
     335,   336,  -188,  -188,  -188,  -188,  -188,   157,   157,   193,
     290,  -188,  -188,  -188,  -188,  -188,   345,  -188,   347,  -188,
     119,  -188,  -188,   348,     9,   301,   285,    31,  -188,  -188,
      40,  -188,   350,   352,  -188,   -49,  -188,   340,  -188,  -188,
     343,  -188,   344,   312,   346,   213,  -188,  -188,    96,  -188,
     354,   353,   165,    81,  -188,  -188,  -188,  -188,  -188,   356,
    -188,  -188,   349,   267,   285,  -188,  -188,  -188,  -188,  -188,
     310,  -188,   -49,   150,   304,   362,   309,  -188,   226,   351,
    -188,  -188,   157,   355,   357,   215,   193,   193,   193,   193,
     193,  -188,  -188,   364,   358,    80,   359,   360,   363,   361,
    -188,  -188,  -188,   372,   293,  -188,  -188,   327,   371,  -188,
    -188,   112,   130,   362,   362,  -188,   377,  -188,   365,  -188,
     312,   366,  -188,  -188,    82,    82,  -188,  -188,   289,   370,
     381,  -188,  -188,  -188,  -188,   367,  -188,  -188,   369,    32,
     383,   384,   378,  -188,  -188,   176,  -188,  -188,  -188,   373,
    -188,   267,   374,  -188,   -49,   178,   178,   -49,   101,   331,
     176,   176,   176,  -188,   386,   389,   379,  -188,   216,   337,
     178,   178,   178,   178,   178,  -188,  -188,  -188,   387,   391,
    -188,  -188,  -188,  -188,  -188,  -188,   388,   392,  -188,  -188,
    -188,  -188,  -188,   362,   -49,  -188,   165,   -49,  -188,  -188,
    -188,  -188,   178,   176,  -188,  -188
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -188,  -188,  -188,   -39,   382,  -188,   118,  -188,  -188,  -138,
     -34,   316,   102,  -188,    -6,  -188,   -20,   148,   -43,  -188,
     -33,  -188,   220,  -112,   -31,  -188,   -13,  -133,  -188,   236,
    -187,  -188,  -188,  -188,  -188,     0,   311,  -188,  -153,  -188,
    -188,  -188,  -188,    43,    30,    55,  -179
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -1
static const yytype_uint16 yytable[] =
{
      29,    88,   184,    80,    92,    82,   153,    30,   136,    29,
      29,   137,   188,    97,    29,    65,    30,    30,    29,    29,
      34,    30,    66,    58,    59,    30,    30,     1,    63,    34,
      34,   172,    86,    87,    34,    67,   253,   254,    34,    34,
      41,   181,   263,     5,    42,    65,    65,    65,    65,   219,
      65,     3,    66,    66,    66,    66,   127,    66,   173,     4,
     163,   182,   264,    38,   164,    67,    67,    67,    67,    80,
      67,    82,    38,    38,    14,    39,   158,    38,    68,     6,
     230,    38,    38,   251,    39,    39,    15,   286,    22,    39,
      70,    23,     7,    39,    39,   112,   113,   114,   115,     8,
     116,   298,   299,   300,   301,   302,   206,   207,    68,    68,
      68,    68,   195,    68,   198,   199,   309,   290,   291,   292,
      70,    70,    70,    70,   250,    70,   196,   197,   198,   199,
      11,   277,   163,   314,   287,    89,   164,    90,    16,   163,
     215,   130,   216,   164,    12,   200,   165,   166,   167,    50,
      13,    51,   288,   234,   235,   236,   237,   238,    26,    17,
     315,    27,    53,    29,    47,   223,   241,    48,    65,   147,
      30,   310,   224,   203,   312,    66,   204,   220,    50,   168,
      51,   252,    18,    34,   268,   148,   278,   269,    67,   279,
      19,    71,    72,    73,    74,    75,    76,    77,    78,    79,
      89,    20,    90,   223,   223,   154,    50,    21,    51,   110,
     224,   224,    40,   155,   131,   132,    44,   156,   227,    53,
     157,    56,    54,   111,    55,   154,    38,    45,   215,    57,
     216,    68,    60,   155,    64,   270,   233,   156,    39,   194,
     157,    61,   271,    70,    62,   196,   197,   198,   199,    85,
     270,   270,   270,    91,    93,   272,    94,   271,   271,   271,
      50,    95,    51,    52,    50,    98,    51,   296,   103,    99,
     272,   272,   272,    53,   100,   101,    54,    53,    55,   154,
      54,   102,    55,   223,   104,   105,   106,   155,   107,   108,
     224,   156,   109,   270,   157,   210,   211,   117,   118,   119,
     271,    71,    72,    73,    74,    75,    76,    77,    78,    79,
     258,   120,   129,   272,   121,   122,   123,   124,   125,   196,
     197,   198,   199,   196,   197,   198,   199,   212,    71,    72,
      73,    74,    75,    76,    77,    78,    79,   175,   176,   177,
     178,   179,    41,    15,   133,   134,   135,   140,   141,   142,
     143,   144,   145,   146,   160,   161,   162,   171,   174,   185,
     186,   192,   189,   201,   190,   191,   208,   202,   193,   218,
     222,   221,   226,   209,   240,   228,   239,   244,   232,   231,
     242,   243,   246,   248,   245,   247,   255,   259,   256,   257,
     260,   262,   265,   266,   289,   267,   293,   274,   276,   294,
     305,   308,   295,   297,   304,   307,    46,   128,   311,   275,
     217,     0,   229,   139,     0,     0,   261
};

static const yytype_int16 yycheck[] =
{
      20,    40,   140,    36,    43,    36,   118,    20,    57,    29,
      30,    60,   145,    47,    34,    35,    29,    30,    38,    39,
      20,    34,    35,    29,    30,    38,    39,     8,    34,    29,
      30,    22,    38,    39,    34,    35,   223,   224,    38,    39,
      12,    10,    10,     4,    16,    65,    66,    67,    68,   182,
      70,     3,    65,    66,    67,    68,    90,    70,    49,     0,
      20,    30,    30,    20,    24,    65,    66,    67,    68,   102,
      70,   102,    29,    30,     6,    20,   119,    34,    35,    12,
     192,    38,    39,   221,    29,    30,    18,   266,     8,    34,
      35,    11,     9,    38,    39,    65,    66,    67,    68,     8,
      70,   280,   281,   282,   283,   284,    25,    26,    65,    66,
      67,    68,   155,    70,    32,    33,   303,   270,   271,   272,
      65,    66,    67,    68,    12,    70,    30,    31,    32,    33,
       5,   264,    20,   312,   267,    13,    24,    15,     7,    20,
     173,    19,   173,    24,     8,    49,    27,    28,    29,    48,
       8,    50,    51,   196,   197,   198,   199,   200,     8,     5,
     313,    11,    61,   183,     8,   185,   205,    11,   188,    12,
     183,   304,   185,     8,   307,   188,    11,   183,    48,    60,
      50,    51,     9,   183,     8,    28,     8,    11,   188,    11,
       9,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      13,     9,    15,   223,   224,    12,    48,     6,    50,    51,
     223,   224,     9,    20,    96,    97,     5,    24,   188,    61,
      27,     7,    64,    65,    66,    12,   183,     8,   261,    11,
     261,   188,     9,    20,     8,   255,    21,    24,   183,    26,
      27,    11,   255,   188,    11,    30,    31,    32,    33,    10,
     270,   271,   272,    13,     6,   255,     5,   270,   271,   272,
      48,    12,    50,    51,    48,     5,    50,    51,     9,    17,
     270,   271,   272,    61,    17,    17,    64,    61,    66,    12,
      64,    17,    66,   303,    12,     9,     4,    20,     8,    62,
     303,    24,    61,   313,    27,    28,    29,    20,    20,    20,
     313,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      21,    11,     9,   313,    43,    44,    45,    46,    47,    30,
      31,    32,    33,    30,    31,    32,    33,    60,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    52,    53,    54,
      55,    56,    12,    18,    18,    12,    12,    19,     9,    62,
       9,     9,    17,    17,    64,    10,     9,     9,    57,     9,
       8,    49,    22,     9,    21,    21,    10,    14,    22,    59,
       8,    67,    63,    24,    16,    24,    12,    14,    21,    24,
      21,    21,    10,    12,    23,    58,     9,    17,    23,    23,
       9,    22,     9,     9,    63,    17,    10,    24,    24,    10,
       9,     9,    23,    66,    17,    17,    24,    91,   306,   261,
     174,    -1,   192,   102,    -1,    -1,    49
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     8,    69,     3,     0,     4,    12,     9,     8,    70,
      72,     5,     8,     8,     6,    18,     7,     5,     9,     9,
       9,     6,     8,    11,    71,    73,     8,    11,    82,    84,
      94,   100,   101,   102,   103,   108,   109,   110,   111,   113,
       9,    12,    16,    78,     5,     8,    72,     8,    11,    74,
      48,    50,    51,    61,    64,    66,     7,    11,    82,    82,
       9,    11,    11,    82,     8,    84,    94,   103,   111,   112,
     113,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      88,    89,    92,    93,   104,    10,    82,    82,    71,    13,
      15,    13,    71,     6,     5,    12,    75,    78,     5,    17,
      17,    17,    17,     9,    12,     9,     4,     8,    62,    61,
      51,    65,   112,   112,   112,   112,   112,    20,    20,    20,
      11,    43,    44,    45,    46,    47,    79,    78,    79,     9,
      19,    74,    74,    18,    12,    12,    57,    60,    95,   104,
      19,     9,    62,     9,     9,    17,    17,    12,    28,    88,
      91,    92,    90,    91,    12,    20,    24,    27,    86,    87,
      64,    10,     9,    20,    24,    27,    28,    29,    60,    76,
      77,     9,    22,    49,    57,    52,    53,    54,    55,    56,
      97,    10,    30,    83,    77,     9,     8,   105,    95,    22,
      21,    21,    49,    22,    26,    86,    30,    31,    32,    33,
      49,     9,    14,     8,    11,    80,    25,    26,    10,    24,
      28,    29,    60,    85,    86,    88,    92,    97,    59,    95,
      82,    67,     8,    84,    94,    98,    63,   112,    24,    90,
      91,    24,    21,    21,    86,    86,    86,    86,    86,    12,
      16,    71,    21,    21,    14,    23,    10,    58,    12,    96,
      12,    77,    51,    98,    98,     9,    23,    23,    21,    17,
       9,    49,    22,    10,    30,     9,     9,    17,     8,    11,
      84,    94,   103,   106,    24,    85,    24,    95,     8,    11,
      84,    94,   103,   111,   113,   114,   114,    95,    51,    63,
     106,   106,   106,    10,    10,    23,    51,    66,   114,   114,
     114,   114,   114,    99,    17,     9,    81,    17,     9,    98,
      95,    80,    95,   107,   114,   106
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
#line 72 "syntaxique.y"
    {printf("programme syntaxiquement correct");
                                YYACCEPT;;}
    break;

  case 9:

/* Line 1455 of yacc.c  */
#line 88 "syntaxique.y"
    { sauvCateg = 0;;}
    break;

  case 10:

/* Line 1455 of yacc.c  */
#line 91 "syntaxique.y"
    { sauvCateg = 0; ;}
    break;

  case 14:

/* Line 1455 of yacc.c  */
#line 96 "syntaxique.y"
    { sauvCateg = 1;;}
    break;

  case 15:

/* Line 1455 of yacc.c  */
#line 98 "syntaxique.y"
    { verificationInsertion((yyvsp[(1) - (5)].string),sauvCateg,sauvType,sauvVal,0,sauvState);;}
    break;

  case 17:

/* Line 1455 of yacc.c  */
#line 102 "syntaxique.y"
    {sprintf(sauvVal,"%f",(yyvsp[(1) - (1)].reel)); sauvState=1; strcpy(sauvType,"FLT");;}
    break;

  case 18:

/* Line 1455 of yacc.c  */
#line 103 "syntaxique.y"
    {strcpy(sauvVal,(yyvsp[(1) - (1)].string)); sauvState=2; strcpy(sauvType,"BOL");;}
    break;

  case 19:

/* Line 1455 of yacc.c  */
#line 104 "syntaxique.y"
    {strcpy(sauvVal,(yyvsp[(1) - (1)].string));   sauvState=2; strcpy(sauvType,"CHR");;}
    break;

  case 20:

/* Line 1455 of yacc.c  */
#line 105 "syntaxique.y"
    {strcpy(sauvVal,(yyvsp[(1) - (1)].string)); sauvState=2; strcpy(sauvType,"STR");;}
    break;

  case 21:

/* Line 1455 of yacc.c  */
#line 107 "syntaxique.y"
    {sprintf(sauvVal,"%d",(yyvsp[(2) - (3)].entier)); sauvState=0; strcpy(sauvType,"INT");;}
    break;

  case 22:

/* Line 1455 of yacc.c  */
#line 108 "syntaxique.y"
    {sprintf(sauvVal,"%d",(yyvsp[(2) - (3)].entier)); sauvState=0; strcpy(sauvType,"INT");;}
    break;

  case 23:

/* Line 1455 of yacc.c  */
#line 109 "syntaxique.y"
    {sprintf(sauvVal,"%d",(yyvsp[(1) - (1)].entier)); sauvState=0; strcpy(sauvType,"INT");;}
    break;

  case 24:

/* Line 1455 of yacc.c  */
#line 112 "syntaxique.y"
    {
                    verificationInsertion((yyvsp[(1) - (3)].string),sauvCateg,sauvType,"",0,3);
                  ;}
    break;

  case 25:

/* Line 1455 of yacc.c  */
#line 115 "syntaxique.y"
    {
                    verificationInsertion((yyvsp[(1) - (5)].string),sauvCateg,sauvType,"",0,3);
                  ;}
    break;

  case 26:

/* Line 1455 of yacc.c  */
#line 121 "syntaxique.y"
    {strcpy(sauvType,"INT");;}
    break;

  case 27:

/* Line 1455 of yacc.c  */
#line 122 "syntaxique.y"
    {strcpy(sauvType,"FLT");;}
    break;

  case 28:

/* Line 1455 of yacc.c  */
#line 123 "syntaxique.y"
    {strcpy(sauvType,"CHR");;}
    break;

  case 29:

/* Line 1455 of yacc.c  */
#line 124 "syntaxique.y"
    {strcpy(sauvType,"STR");;}
    break;

  case 30:

/* Line 1455 of yacc.c  */
#line 125 "syntaxique.y"
    {strcpy(sauvType,"BOL");;}
    break;

  case 31:

/* Line 1455 of yacc.c  */
#line 128 "syntaxique.y"
    { insertion((yyvsp[(2) - (5)].string),"tableau",sauvType,"",(yyvsp[(4) - (5)].entier),3); ;}
    break;

  case 36:

/* Line 1455 of yacc.c  */
#line 134 "syntaxique.y"
    {AfficheInverseOutput(buffer); ;}
    break;

  case 42:

/* Line 1455 of yacc.c  */
#line 145 "syntaxique.y"
    {
  
                  printf("Val exp affectation 1 =  %f \n",sauvValeur);
                  
                  if(isItConst((yyvsp[(4) - (7)].string))!=0 && verificationType((yyvsp[(4) - (7)].string),typeExp)==0  ){
                    InsertionIdf((yyvsp[(4) - (7)].string),typeExp,sauvVal);
                    quadr("AFF",sauvVal,"vide",(yyvsp[(4) - (7)].string)); 
                  }
                  typeExp=0;
                   
            ;}
    break;

  case 43:

/* Line 1455 of yacc.c  */
#line 156 "syntaxique.y"
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

  case 44:

/* Line 1455 of yacc.c  */
#line 178 "syntaxique.y"
    { sauvValeur=(yyvsp[(1) - (1)].reel); sprintf(sauvVal,"%f",(yyvsp[(1) - (1)].reel));;}
    break;

  case 45:

/* Line 1455 of yacc.c  */
#line 179 "syntaxique.y"
    { 
      typeExp = 3;  
      if((yyvsp[(1) - (1)].entier) == 1) strcpy(sauvVal,"TRUE");
      else if((yyvsp[(1) - (1)].entier) == 0) strcpy(sauvVal,"FALSE");
  ;}
    break;

  case 46:

/* Line 1455 of yacc.c  */
#line 184 "syntaxique.y"
    { typeExp = 3; 
      if((yyvsp[(1) - (1)].entier) == 1) strcpy(sauvVal,"TRUE");
      else if((yyvsp[(1) - (1)].entier) == 0) strcpy(sauvVal,"FALSE");  ;}
    break;

  case 47:

/* Line 1455 of yacc.c  */
#line 187 "syntaxique.y"
    {strcpy(sauvType,"STR"); strcpy(sauvVal,(yyvsp[(1) - (1)].string));  typeExp = 2;;}
    break;

  case 48:

/* Line 1455 of yacc.c  */
#line 188 "syntaxique.y"
    {strcpy(sauvType,"CHR"); strcpy(sauvVal,(yyvsp[(1) - (1)].string)); typeExp = 2;;}
    break;

  case 49:

/* Line 1455 of yacc.c  */
#line 189 "syntaxique.y"
    {strcpy(sauvType,"BOL"); strcpy(sauvVal,(yyvsp[(1) - (1)].string)); typeExp = 3;;}
    break;

  case 50:

/* Line 1455 of yacc.c  */
#line 193 "syntaxique.y"
    { (yyval.reel) =((yyvsp[(2) - (3)].reel)) ; ;}
    break;

  case 51:

/* Line 1455 of yacc.c  */
#line 194 "syntaxique.y"
    { (yyval.reel) = (yyvsp[(1) - (3)].reel) + (yyvsp[(3) - (3)].reel); printf ("+\n");;}
    break;

  case 52:

/* Line 1455 of yacc.c  */
#line 195 "syntaxique.y"
    { (yyval.reel) = (yyvsp[(1) - (3)].reel) - (yyvsp[(3) - (3)].reel) ; ;}
    break;

  case 53:

/* Line 1455 of yacc.c  */
#line 196 "syntaxique.y"
    { 
                        if( (yyvsp[(3) - (3)].reel) != 0 ) (yyval.reel) = (yyvsp[(1) - (3)].reel) / (yyvsp[(3) - (3)].reel) ; 
                        else printf("Erreur semantique : division par zero \n");                                  
                                                            ;}
    break;

  case 54:

/* Line 1455 of yacc.c  */
#line 200 "syntaxique.y"
    { (yyval.reel) = (yyvsp[(1) - (3)].reel) * (yyvsp[(3) - (3)].reel) ;;}
    break;

  case 55:

/* Line 1455 of yacc.c  */
#line 201 "syntaxique.y"
    { (yyval.reel) = (yyvsp[(1) - (1)].reel); ;}
    break;

  case 56:

/* Line 1455 of yacc.c  */
#line 203 "syntaxique.y"
    { (yyval.reel) = (float)(yyvsp[(2) - (3)].entier); ;}
    break;

  case 57:

/* Line 1455 of yacc.c  */
#line 204 "syntaxique.y"
    { (yyval.reel) = (float)(yyvsp[(1) - (1)].entier); ;}
    break;

  case 58:

/* Line 1455 of yacc.c  */
#line 205 "syntaxique.y"
    { (yyval.reel) = (yyvsp[(1) - (1)].reel);  typeExp=1; ;}
    break;

  case 59:

/* Line 1455 of yacc.c  */
#line 206 "syntaxique.y"
    { 
       printf("idf = %s\n",(yyvsp[(1) - (1)].string));
       sauvState=typeEntite((yyvsp[(1) - (1)].string));
       if(sauvState==1) typeExp=1;
       getValueIdf((yyvsp[(1) - (1)].string),res); 
       sauvValeur=atof(res);
       (yyval.reel)=atof(res);
     ;}
    break;

  case 60:

/* Line 1455 of yacc.c  */
#line 214 "syntaxique.y"
    { 
       
       sauvState=typeEntite((yyvsp[(1) - (4)].string));
       if(sauvState==1) typeExp=1;
       sauvValeur=getValueTab((yyvsp[(1) - (4)].string),(yyvsp[(3) - (4)].entier));
       (yyval.reel)=sauvValeur;
     ;}
    break;

  case 61:

/* Line 1455 of yacc.c  */
#line 225 "syntaxique.y"
    {
                    (yyval.entier) = (yyvsp[(3) - (4)].entier); 

                    if((yyvsp[(3) - (4)].entier) == 0)  quadr((yyvsp[(1) - (4)].string),"FALSE","vide","vide");
                    else quadr((yyvsp[(1) - (4)].string),"TRUE","vide","vide");
                   
                  ;}
    break;

  case 62:

/* Line 1455 of yacc.c  */
#line 232 "syntaxique.y"
    {
                    (yyval.entier) = !(yyvsp[(3) - (4)].entier); 

                    if((yyvsp[(3) - (4)].entier) != 0)  quadr("NOT","FALSE","vide","vide");
                    else quadr("NOT","TRUE","vide","vide");
                  ;}
    break;

  case 63:

/* Line 1455 of yacc.c  */
#line 240 "syntaxique.y"
    { valLog = 0; (yyval.string) = "AND"; ;}
    break;

  case 64:

/* Line 1455 of yacc.c  */
#line 241 "syntaxique.y"
    { valLog = 1;  (yyval.string) = "OR"; ;}
    break;

  case 65:

/* Line 1455 of yacc.c  */
#line 243 "syntaxique.y"
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
#line 250 "syntaxique.y"
    {
            if(valLog == 0){
                  (yyval.entier) = (yyvsp[(1) - (3)].entier) && (yyvsp[(3) - (3)].entier);
            }else if(valLog == 1){
                  (yyval.entier) = (yyvsp[(1) - (3)].entier) || (yyvsp[(3) - (3)].entier) ;
           }
            ;}
    break;

  case 67:

/* Line 1455 of yacc.c  */
#line 259 "syntaxique.y"
    {
          (yyval.entier) = (yyvsp[(1) - (1)].entier); 
         ;}
    break;

  case 68:

/* Line 1455 of yacc.c  */
#line 262 "syntaxique.y"
    { 
          (yyval.entier) = (yyvsp[(1) - (1)].entier);
         ;}
    break;

  case 69:

/* Line 1455 of yacc.c  */
#line 265 "syntaxique.y"
    {
            if(strcmp((yyvsp[(1) - (1)].string),"FALSE")==0) (yyval.entier) = 0; //false
            else if(strcmp((yyvsp[(1) - (1)].string),"TRUE")==0) (yyval.entier) = 1; //true
         ;}
    break;

  case 70:

/* Line 1455 of yacc.c  */
#line 269 "syntaxique.y"
    { 
            
            if(ValueIdfBol((yyvsp[(1) - (1)].string))==1) (yyval.entier) = 0; //false
            else if(ValueIdfBol((yyvsp[(1) - (1)].string))==0) (yyval.entier) = 1; //true    
         ;}
    break;

  case 71:

/* Line 1455 of yacc.c  */
#line 275 "syntaxique.y"
    {
           
          
            if(ValueTabBol((yyvsp[(1) - (4)].string),(yyvsp[(3) - (4)].entier))==1) (yyval.entier) = 0; //false
            else if(ValueTabBol((yyvsp[(1) - (4)].string),(yyvsp[(3) - (4)].entier))==0) (yyval.entier) = 1; //true 
            
         ;}
    break;

  case 72:

/* Line 1455 of yacc.c  */
#line 284 "syntaxique.y"
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

  case 73:

/* Line 1455 of yacc.c  */
#line 312 "syntaxique.y"
    { (yyval.entier)=0; ;}
    break;

  case 74:

/* Line 1455 of yacc.c  */
#line 313 "syntaxique.y"
    { (yyval.entier)=1 ;;}
    break;

  case 75:

/* Line 1455 of yacc.c  */
#line 314 "syntaxique.y"
    { (yyval.entier)=2 ;;}
    break;

  case 76:

/* Line 1455 of yacc.c  */
#line 315 "syntaxique.y"
    { (yyval.entier)=3 ;;}
    break;

  case 77:

/* Line 1455 of yacc.c  */
#line 316 "syntaxique.y"
    { (yyval.entier)=4 ;;}
    break;

  case 78:

/* Line 1455 of yacc.c  */
#line 317 "syntaxique.y"
    { (yyval.entier)=5 ;}
    break;

  case 79:

/* Line 1455 of yacc.c  */
#line 322 "syntaxique.y"
    {
  fonctionInput((yyvsp[(4) - (7)].string),(yyvsp[(6) - (7)].entier));
  quadr("INPUT","vide","vide",(yyvsp[(4) - (7)].string));
;}
    break;

  case 80:

/* Line 1455 of yacc.c  */
#line 331 "syntaxique.y"
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

  case 81:

/* Line 1455 of yacc.c  */
#line 366 "syntaxique.y"
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

  case 82:

/* Line 1455 of yacc.c  */
#line 376 "syntaxique.y"
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

  case 83:

/* Line 1455 of yacc.c  */
#line 404 "syntaxique.y"
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

  case 84:

/* Line 1455 of yacc.c  */
#line 418 "syntaxique.y"
    { (yyval.string) = (yyvsp[(1) - (1)].string); tab = 0; ;}
    break;

  case 85:

/* Line 1455 of yacc.c  */
#line 419 "syntaxique.y"
    { (yyval.string) = (yyvsp[(1) - (4)].string); tab = 1; pos = (yyvsp[(3) - (4)].entier); ;}
    break;

  case 86:

/* Line 1455 of yacc.c  */
#line 422 "syntaxique.y"
    { (yyval.entier) = 1;;}
    break;

  case 87:

/* Line 1455 of yacc.c  */
#line 423 "syntaxique.y"
    { (yyval.entier) = 2;;}
    break;

  case 88:

/* Line 1455 of yacc.c  */
#line 424 "syntaxique.y"
    { (yyval.entier) = 3;;}
    break;

  case 89:

/* Line 1455 of yacc.c  */
#line 425 "syntaxique.y"
    { (yyval.entier) = 4;;}
    break;

  case 90:

/* Line 1455 of yacc.c  */
#line 426 "syntaxique.y"
    { (yyval.entier) = 5;;}
    break;

  case 93:

/* Line 1455 of yacc.c  */
#line 431 "syntaxique.y"
    {  
              InverserChaine(buffer);  
              printf("%s\n",buffer);
              quadr("OUTPUT",buffer,"vide","vide");
              strncpy(buffer, "", sizeof(buffer));  
              ;}
    break;

  case 96:

/* Line 1455 of yacc.c  */
#line 447 "syntaxique.y"
    {

               deb_else = qc;
               quadr("BZ","","tmp_cond","vide");
                

    ;}
    break;

  case 97:

/* Line 1455 of yacc.c  */
#line 456 "syntaxique.y"
    {
      Fin_if=qc;
      quadr("BR","","vide","vide"); 
      sprintf(tmp,"%d",qc);
      ajour_quad(deb_else,1,tmp); 
;}
    break;

  case 98:

/* Line 1455 of yacc.c  */
#line 464 "syntaxique.y"
    {

    ;}
    break;

  case 100:

/* Line 1455 of yacc.c  */
#line 469 "syntaxique.y"
    { 

      sprintf(tmp,"%d",qc);
      ajour_quad(Fin_if,1,tmp);
      printf("pgm correct\n"); 

;}
    break;

  case 101:

/* Line 1455 of yacc.c  */
#line 478 "syntaxique.y"
    { 
              (yyval.entier) = (yyvsp[(1) - (1)].entier); 
              
          ;}
    break;

  case 102:

/* Line 1455 of yacc.c  */
#line 482 "syntaxique.y"
    { 
              (yyval.entier) = (yyvsp[(1) - (1)].entier);
         ;}
    break;

  case 106:

/* Line 1455 of yacc.c  */
#line 492 "syntaxique.y"
    {  
                    InverserChaine(buffer);  
                    printf("%s\n",buffer);
                    quadr("OUTPUT",buffer,"vide","vide");
                    strncpy(buffer, "", sizeof(buffer));  
              ;}
    break;

  case 110:

/* Line 1455 of yacc.c  */
#line 507 "syntaxique.y"
    { //R1
    
    DebCondDo=qc;
    quadr("BR","","vide","vide");

    DebInstDo=qc;

;}
    break;

  case 111:

/* Line 1455 of yacc.c  */
#line 516 "syntaxique.y"
    {
  sprintf(tmp,"%d",qc);
  ajour_quad(DebCondDo,1,tmp);
;}
    break;

  case 112:

/* Line 1455 of yacc.c  */
#line 522 "syntaxique.y"
    { //R3
    sprintf(tmp,"%d",DebInstDo);
     quadr("BNZ",tmp,"tempInst","vide");
;}
    break;

  case 113:

/* Line 1455 of yacc.c  */
#line 528 "syntaxique.y"
    {
  
      printf("pgm correct\n"); 
;}
    break;



/* Line 1455 of yacc.c  */
#line 2551 "syntaxique.tab.c"
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
#line 559 "syntaxique.y"

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
