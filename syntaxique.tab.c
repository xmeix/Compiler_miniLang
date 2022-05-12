
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
    char sauvType[20];
    char sauvVal[100];
    int sauvCateg = 1;
    int sauvState;
    float val;
    float sauvValeur;


/* Line 189 of yacc.c  */
#line 89 "syntaxique.tab.c"

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
#line 15 "syntaxique.y"

  int entier;
  char* string; 
  float reel;



/* Line 214 of yacc.c  */
#line 200 "syntaxique.tab.c"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif


/* Copy the second part of user declarations.  */


/* Line 264 of yacc.c  */
#line 212 "syntaxique.tab.c"

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
#define YYLAST   456

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  68
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  36
/* YYNRULES -- Number of rules.  */
#define YYNRULES  118
/* YYNRULES -- Number of states.  */
#define YYNSTATES  310

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
     121,   123,   124,   132,   136,   139,   142,   148,   151,   154,
     157,   161,   169,   180,   182,   184,   186,   188,   190,   192,
     196,   200,   204,   208,   212,   214,   218,   222,   224,   226,
     228,   233,   238,   243,   248,   252,   256,   258,   260,   262,
     264,   269,   276,   278,   280,   282,   284,   286,   288,   296,
     303,   307,   313,   316,   318,   320,   322,   324,   326,   329,
     332,   338,   339,   356,   372,   374,   376,   381,   384,   387,
     393,   396,   400,   410,   413,   416,   422,   425,   428,   431,
     435,   445,   455,   458,   461,   467,   470,   473,   476
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
      80,    -1,    11,    16,     9,    -1,    83,    82,    -1,    92,
      82,    -1,     8,    51,    17,    93,    82,    -1,    96,    82,
      -1,   100,    82,    -1,   102,    82,    -1,    11,     7,     9,
      -1,     8,    48,    17,    12,    49,    84,    10,    -1,     8,
      48,    17,    12,    22,    24,    23,    49,    84,    10,    -1,
      85,    -1,    90,    -1,    87,    -1,    60,    -1,    29,    -1,
      28,    -1,    20,    85,    21,    -1,    85,    30,    85,    -1,
      85,    31,    85,    -1,    85,    33,    85,    -1,    85,    32,
      85,    -1,    86,    -1,    20,    25,    21,    -1,    20,    26,
      21,    -1,    24,    -1,    27,    -1,    12,    -1,    12,    22,
      24,    23,    -1,    34,    20,    88,    21,    -1,    35,    20,
      88,    21,    -1,    36,    20,    89,    21,    -1,    89,    49,
      88,    -1,    89,    49,    89,    -1,    87,    -1,    90,    -1,
      12,    -1,    28,    -1,    12,    22,    24,    23,    -1,    91,
      20,    85,    49,    85,    21,    -1,    37,    -1,    39,    -1,
      40,    -1,    38,    -1,    41,    -1,    42,    -1,     8,    50,
      17,    12,    57,    94,    58,    -1,    57,    94,    59,    12,
      30,    93,    -1,    60,    30,    93,    -1,    57,    94,    59,
      12,    10,    -1,    60,    10,    -1,    52,    -1,    53,    -1,
      54,    -1,    55,    -1,    56,    -1,    83,    95,    -1,    92,
      95,    -1,     8,    51,    17,    93,    95,    -1,    -1,     8,
      61,    17,    97,     9,     8,    62,     9,    95,    11,    62,
       9,    98,    11,    61,     9,    -1,     8,    61,    17,    97,
       9,     8,    62,     9,    95,    11,    62,     9,    11,    61,
       9,    -1,    87,    -1,    90,    -1,     8,    63,     9,    99,
      -1,    83,    99,    -1,    92,    99,    -1,     8,    51,    17,
      93,    99,    -1,    96,    99,    -1,    11,    63,     9,    -1,
       8,    64,     9,   101,    97,    10,    11,    64,     9,    -1,
      83,   101,    -1,    92,   101,    -1,     8,    51,    17,    93,
     101,    -1,    96,   101,    -1,   100,   101,    -1,   102,   101,
      -1,     8,    65,    17,    -1,     8,    66,    12,    19,    77,
      67,    77,     9,   103,    -1,     8,    66,    12,    19,    77,
      67,    12,     9,   103,    -1,    83,   103,    -1,    92,   103,
      -1,     8,    51,    17,    93,   103,    -1,    96,   103,    -1,
     100,   103,    -1,   102,   103,    -1,    11,    66,     9,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint8 yyrline[] =
{
       0,    40,    40,    47,    48,    49,    50,    55,    56,    57,
      60,    60,    63,    64,    65,    67,    70,    71,    72,    73,
      74,    76,    77,    78,    81,    84,    90,    91,    92,    93,
      94,    97,    97,    98,   101,   102,   103,   104,   105,   106,
     107,   114,   122,   127,   128,   129,   130,   131,   132,   136,
     137,   138,   139,   140,   141,   143,   144,   145,   146,   147,
     153,   161,   162,   163,   166,   167,   169,   170,   171,   172,
     173,   176,   178,   179,   180,   181,   182,   183,   188,   192,
     193,   194,   195,   199,   200,   201,   202,   203,   206,   207,
     208,   209,   212,   213,   216,   217,   221,   223,   224,   225,
     226,   227,   232,   234,   235,   236,   237,   238,   239,   240,
     245,   246,   249,   250,   251,   252,   253,   254,   255
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
  "DECLARATION_SIMPLE", "TYPE", "DECLARATION_TAB", "$@2", "BODY",
  "AFFECTATION", "X", "EXPRESSION_ARITH", "TERM", "EXPRESSION_LOGIQUE",
  "EXPRESSIONS", "TYPE_EXP", "EXPRESSION_COMPARAISON", "MC_COMPARAISON",
  "INPUT", "OUTPUT", "SIGNE_FORMATAGE", "INSTRUCTION", "INST_IF",
  "CONDITION", "INST_ELSE", "INSTRUCTION_ELSE", "BOUCLE_DO",
  "INSTRUCTION_BOUCLE_DO", "BOUCLE_FOR", "INSTRUCTION_BOUCLE_FOR", 0
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
      79,    81,    80,    80,    82,    82,    82,    82,    82,    82,
      82,    83,    83,    84,    84,    84,    84,    84,    84,    85,
      85,    85,    85,    85,    85,    86,    86,    86,    86,    86,
      86,    87,    87,    87,    88,    88,    89,    89,    89,    89,
      89,    90,    91,    91,    91,    91,    91,    91,    92,    93,
      93,    93,    93,    94,    94,    94,    94,    94,    95,    95,
      95,    95,    96,    96,    97,    97,    98,    99,    99,    99,
      99,    99,   100,   101,   101,   101,   101,   101,   101,   101,
     102,   102,   103,   103,   103,   103,   103,   103,   103
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,    13,     6,     6,     5,     1,     3,     7,     4,
       0,     6,     3,     3,     4,     5,     1,     1,     1,     1,
       1,     3,     3,     1,     3,     5,     1,     1,     1,     1,
       1,     0,     7,     3,     2,     2,     5,     2,     2,     2,
       3,     7,    10,     1,     1,     1,     1,     1,     1,     3,
       3,     3,     3,     3,     1,     3,     3,     1,     1,     1,
       4,     4,     4,     4,     3,     3,     1,     1,     1,     1,
       4,     6,     1,     1,     1,     1,     1,     1,     7,     6,
       3,     5,     2,     1,     1,     1,     1,     1,     2,     2,
       5,     0,    16,    15,     1,     1,     4,     2,     2,     5,
       2,     3,     9,     2,     2,     5,     2,     2,     2,     3,
       9,     9,     2,     2,     5,     2,     2,     2,     3
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
       3,     0,     0,    11,     0,     0,     0,     0,     0,     0,
       0,     0,    34,    35,    37,    38,    39,     4,     0,     0,
       0,     7,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    40,     0,    26,    27,    28,    29,
      30,     0,    24,     0,     9,     0,    13,    12,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    72,    75,    73,
      74,    76,    77,    94,    95,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     2,     0,     0,     0,    23,
      17,    18,    19,    20,     0,    16,    14,     0,     0,     0,
      83,    84,    85,    86,    87,     0,    82,     0,    36,     0,
       0,     0,     0,     0,     0,     0,   103,   104,   106,   107,
       0,   108,     0,    25,     0,     0,     0,     0,     0,     0,
       0,    59,     0,    57,    58,    48,    47,    46,     0,    43,
      54,    45,    44,     0,     0,    80,    68,    69,    66,     0,
       0,    67,     0,     0,     0,     0,     0,   109,     0,     0,
       0,     0,     8,    21,    22,    15,     0,     0,     0,     0,
       0,    41,     0,     0,     0,     0,    78,     0,     0,    61,
       0,    62,    63,     0,     0,     0,     0,     0,     0,     0,
      33,     0,     0,    55,    56,    49,    50,    51,    53,    52,
      81,     0,     0,    64,    65,     0,    91,   105,     0,     0,
       0,     0,     0,    60,    79,    70,    71,     0,    91,    91,
       0,   102,     0,     0,     0,     0,     0,     0,     0,   111,
     110,    31,    42,     0,    88,    89,     0,     0,     0,   112,
     113,   115,   116,   117,     0,     0,     0,     0,   118,    32,
      91,     0,     0,    90,     0,     0,     0,   114,     0,     0,
       0,     0,    93,     0,     0,     0,     0,     0,     0,    96,
      92,     0,     0,    97,    98,   100,     0,   101,     0,    99
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     2,     9,    24,    10,    25,    43,    65,   124,   125,
      37,    81,   156,   274,    28,   254,   168,   169,   170,   178,
     179,   180,   181,   105,   255,    93,   135,   250,   256,   106,
     286,   299,   257,   112,   258,   259
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -234
static const yytype_int16 yypact[] =
{
      78,    89,   116,    90,  -234,   120,   133,   151,   162,   188,
     193,    65,   205,   214,   217,   222,   224,   233,   109,  -234,
     157,   240,    28,   245,   244,   219,   203,   254,   259,   157,
     157,   157,   157,   157,   109,    55,   252,   109,   275,   277,
    -234,   291,   290,  -234,   287,   294,   295,   314,   297,   296,
     323,   329,  -234,  -234,  -234,  -234,  -234,  -234,   212,   322,
     212,  -234,   326,   318,   126,   219,   219,   319,   327,   328,
     178,   283,   330,   324,  -234,   332,  -234,  -234,  -234,  -234,
    -234,   334,  -234,   333,  -234,   165,  -234,  -234,   336,     7,
     292,   274,    18,   157,   331,   335,   337,  -234,  -234,  -234,
    -234,  -234,  -234,  -234,  -234,   338,   339,   149,   330,   330,
     330,   330,   283,   330,    45,  -234,   340,   255,    59,  -234,
    -234,  -234,  -234,  -234,   342,  -234,  -234,   341,   142,   274,
    -234,  -234,  -234,  -234,  -234,   288,  -234,   178,  -234,   206,
     206,   206,    37,   345,   343,   344,  -234,  -234,  -234,  -234,
     346,  -234,   299,  -234,   347,   348,   109,   325,   349,   353,
     350,   352,   289,  -234,  -234,  -234,  -234,  -234,   358,   242,
    -234,  -234,  -234,   304,   351,  -234,   354,  -234,  -234,   356,
     301,  -234,   357,   359,   104,   307,   178,  -234,   360,    94,
     355,   366,  -234,  -234,  -234,  -234,   361,   362,   363,   364,
     117,  -234,    37,    37,    37,    37,  -234,    20,   365,  -234,
     206,  -234,  -234,    37,   370,   330,   317,   373,   374,   367,
    -234,   142,   369,  -234,  -234,  -234,    76,    76,  -234,  -234,
    -234,   178,   371,  -234,   301,   190,   379,  -234,   381,   272,
     272,   378,   383,  -234,  -234,  -234,  -234,     3,   379,   379,
     384,  -234,   241,   368,   272,   272,   272,   272,   272,  -234,
    -234,  -234,  -234,   380,  -234,  -234,   375,   382,   387,  -234,
    -234,  -234,  -234,  -234,   255,   178,   389,   178,  -234,  -234,
     379,   279,   272,  -234,   372,   377,   390,  -234,   391,   393,
     385,   286,  -234,   394,   113,   376,   286,   286,   286,  -234,
    -234,   388,   395,  -234,  -234,  -234,   178,  -234,   286,  -234
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -234,  -234,  -234,   -30,   392,  -234,   107,  -234,  -234,   -68,
       4,   396,   132,  -234,    98,   -20,   186,   -80,  -234,   -70,
    -135,  -138,   -69,  -234,   -12,  -131,   280,  -233,     2,   300,
    -234,  -110,    -6,   -72,    47,   -50
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -1
static const yytype_uint16 yytable[] =
{
      29,   103,   104,   183,    57,   182,   175,    61,    30,    29,
      29,    29,    29,    29,    32,   264,   265,    30,    30,    30,
      30,    30,    31,    32,    32,    32,    32,    32,   136,   127,
     230,    31,    31,    31,    31,    31,   146,   147,   148,   149,
      35,   151,   103,   104,    36,    66,   152,   283,   137,   161,
     231,    44,   108,    45,   263,   215,   128,   162,   171,   172,
     109,   163,   184,    82,   164,   118,   111,    33,    58,   119,
      59,    14,   234,    29,   110,   233,    33,    33,    33,    33,
      33,    30,   200,    15,   157,   158,     1,    32,   108,   108,
     108,   108,     3,   108,     5,    31,   109,   109,   109,   109,
     244,   109,   111,   111,   111,   111,   217,   111,   204,   205,
     110,   110,   110,   110,   118,   110,     4,    22,   119,   113,
      23,   218,   226,   227,   228,   229,   192,    52,    53,    54,
      55,    56,     6,   235,   202,   203,   204,   205,   225,    58,
      33,    59,     7,   237,   280,    85,   282,   202,   203,   204,
     205,   171,   172,   213,   161,   113,   113,   113,   113,     8,
     113,    44,   162,    45,   301,    26,   163,    11,    27,   164,
     165,   166,    86,    87,    47,   308,    94,    95,    96,    97,
      98,    99,   100,   101,   102,   118,   303,   304,   305,   119,
     260,   138,   120,   121,   122,   108,    12,    44,   309,    45,
     144,    13,   167,   109,   269,   270,   271,   272,   273,   111,
      47,   246,    16,    48,   145,    49,   248,   110,   176,    17,
     202,   203,   204,   205,   249,   123,    18,    41,   248,   248,
      42,    19,   287,    20,   177,    91,   249,   249,    92,    21,
      94,    95,    96,    97,    98,    99,   100,   101,   102,    34,
      38,    44,    39,    45,    46,    76,    77,    78,    79,    80,
     248,    50,   113,   154,    47,    60,   155,    48,   249,    49,
      51,   296,   202,   203,   204,   205,   296,   296,   296,   297,
     252,    62,    63,   253,   297,   297,   297,   284,   296,    44,
     285,    45,   267,   298,   294,    67,   297,   295,   298,   298,
     298,   161,    47,    64,    68,    48,    72,    49,    73,   162,
     298,    69,    70,   163,   198,   199,   164,    94,    95,    96,
      97,    98,    99,   100,   101,   102,   130,   131,   132,   133,
     134,    71,    74,    75,    35,    84,    15,    88,   107,    89,
      90,   115,   117,   114,   116,   126,   193,   174,   143,   129,
     210,   139,   159,   185,   153,   140,   188,   141,   142,   190,
     186,   187,   206,   207,   191,   160,   189,   195,   201,   214,
     194,   216,   219,   196,   197,   220,   208,   209,   211,   236,
     212,   238,   239,   240,   223,   224,   222,   247,   261,   232,
     251,   241,   243,   262,   245,   266,   278,   275,   281,   277,
     291,   290,   292,   300,   307,   306,   279,   242,     0,   173,
     221,     0,   150,     0,     0,     0,    40,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   268,   288,     0,   276,   289,   302,
       0,     0,     0,     0,     0,     0,   293,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    83
};

static const yytype_int16 yycheck[] =
{
      20,    71,    71,   141,    34,   140,   137,    37,    20,    29,
      30,    31,    32,    33,    20,   248,   249,    29,    30,    31,
      32,    33,    20,    29,    30,    31,    32,    33,    10,    22,
      10,    29,    30,    31,    32,    33,   108,   109,   110,   111,
      12,   113,   112,   112,    16,    41,   114,   280,    30,    12,
      30,    48,    72,    50,    51,   186,    49,    20,   128,   128,
      72,    24,   142,    59,    27,    20,    72,    20,    13,    24,
      15,     6,   210,    93,    72,   210,    29,    30,    31,    32,
      33,    93,   162,    18,    25,    26,     8,    93,   108,   109,
     110,   111,     3,   113,     4,    93,   108,   109,   110,   111,
     231,   113,   108,   109,   110,   111,    12,   113,    32,    33,
     108,   109,   110,   111,    20,   113,     0,     8,    24,    72,
      11,   189,   202,   203,   204,   205,   156,    29,    30,    31,
      32,    33,    12,   213,    30,    31,    32,    33,    21,    13,
      93,    15,     9,   215,   275,    19,   277,    30,    31,    32,
      33,   221,   221,    49,    12,   108,   109,   110,   111,     8,
     113,    48,    20,    50,    51,     8,    24,     5,    11,    27,
      28,    29,    65,    66,    61,   306,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    20,   296,   297,   298,    24,
     240,    93,    27,    28,    29,   215,     8,    48,   308,    50,
      51,     8,    60,   215,   254,   255,   256,   257,   258,   215,
      61,    21,     7,    64,    65,    66,   236,   215,    12,     5,
      30,    31,    32,    33,   236,    60,     9,     8,   248,   249,
      11,     9,   282,     9,    28,    57,   248,   249,    60,     6,
      34,    35,    36,    37,    38,    39,    40,    41,    42,     9,
       5,    48,     8,    50,    51,    43,    44,    45,    46,    47,
     280,     7,   215,     8,    61,    13,    11,    64,   280,    66,
      11,   291,    30,    31,    32,    33,   296,   297,   298,   291,
       8,     6,     5,    11,   296,   297,   298,     8,   308,    48,
      11,    50,    51,   291,     8,     5,   308,    11,   296,   297,
     298,    12,    61,    12,    17,    64,     9,    66,    12,    20,
     308,    17,    17,    24,    25,    26,    27,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    52,    53,    54,    55,
      56,    17,     9,     4,    12,     9,    18,    18,     8,    12,
      12,     9,     9,    19,    10,     9,    21,    59,     9,    57,
      49,    20,    10,     8,    14,    20,    10,    20,    20,    12,
      17,    17,    58,    12,    16,    24,    67,    14,    10,    62,
      21,    11,    17,    23,    22,     9,    22,    21,    21,     9,
      21,    64,     9,     9,    21,    21,    24,     8,    10,    24,
       9,    24,    23,    10,    23,    11,     9,    17,     9,    17,
       9,    11,     9,     9,     9,    17,   274,   221,    -1,   129,
      49,    -1,   112,    -1,    -1,    -1,    24,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    66,    63,    -1,    62,    61,    63,
      -1,    -1,    -1,    -1,    -1,    -1,    61,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    60
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     8,    69,     3,     0,     4,    12,     9,     8,    70,
      72,     5,     8,     8,     6,    18,     7,     5,     9,     9,
       9,     6,     8,    11,    71,    73,     8,    11,    82,    83,
      92,    96,   100,   102,     9,    12,    16,    78,     5,     8,
      72,     8,    11,    74,    48,    50,    51,    61,    64,    66,
       7,    11,    82,    82,    82,    82,    82,    71,    13,    15,
      13,    71,     6,     5,    12,    75,    78,     5,    17,    17,
      17,    17,     9,    12,     9,     4,    43,    44,    45,    46,
      47,    79,    78,    79,     9,    19,    74,    74,    18,    12,
      12,    57,    60,    93,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    87,    90,    91,    97,     8,    83,    92,
      96,   100,   101,   102,    19,     9,    10,     9,    20,    24,
      27,    28,    29,    60,    76,    77,     9,    22,    49,    57,
      52,    53,    54,    55,    56,    94,    10,    30,    82,    20,
      20,    20,    20,     9,    51,    65,   101,   101,   101,   101,
      97,   101,    77,    14,     8,    11,    80,    25,    26,    10,
      24,    12,    20,    24,    27,    28,    29,    60,    84,    85,
      86,    87,    90,    94,    59,    93,    12,    28,    87,    88,
      89,    90,    88,    89,    85,     8,    17,    17,    10,    67,
      12,    16,    71,    21,    21,    14,    23,    22,    25,    26,
      85,    10,    30,    31,    32,    33,    58,    12,    22,    21,
      49,    21,    21,    49,    62,    93,    11,    12,    77,    17,
       9,    49,    24,    21,    21,    21,    85,    85,    85,    85,
      10,    30,    24,    88,    89,    85,     9,   101,    64,     9,
       9,    24,    84,    23,    93,    23,    21,     8,    83,    92,
      95,     9,     8,    11,    83,    92,    96,   100,   102,   103,
     103,    10,    10,    51,    95,    95,    11,    51,    66,   103,
     103,   103,   103,   103,    81,    17,    62,    17,     9,    80,
      93,     9,    93,    95,     8,    11,    98,   103,    63,    61,
      11,     9,     9,    61,     8,    11,    83,    92,    96,    99,
       9,    51,    63,    99,    99,    99,    17,     9,    93,    99
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
#line 41 "syntaxique.y"
    {printf("programme syntaxiquement correct");
                                YYACCEPT;;}
    break;

  case 9:

/* Line 1455 of yacc.c  */
#line 57 "syntaxique.y"
    { sauvCateg = 0;;}
    break;

  case 10:

/* Line 1455 of yacc.c  */
#line 60 "syntaxique.y"
    { sauvCateg = 0; ;}
    break;

  case 14:

/* Line 1455 of yacc.c  */
#line 65 "syntaxique.y"
    { sauvCateg = 1;;}
    break;

  case 15:

/* Line 1455 of yacc.c  */
#line 67 "syntaxique.y"
    { verificationInsertion((yyvsp[(1) - (5)].string),sauvCateg,sauvType,sauvVal,0,sauvState);;}
    break;

  case 17:

/* Line 1455 of yacc.c  */
#line 71 "syntaxique.y"
    {sprintf(sauvVal,"%f",(yyvsp[(1) - (1)].reel)); sauvState=1; strcpy(sauvType,"FLT");;}
    break;

  case 18:

/* Line 1455 of yacc.c  */
#line 72 "syntaxique.y"
    {strcpy(sauvVal,(yyvsp[(1) - (1)].string)); sauvState=2; strcpy(sauvType,"BOL");;}
    break;

  case 19:

/* Line 1455 of yacc.c  */
#line 73 "syntaxique.y"
    {strcpy(sauvVal,(yyvsp[(1) - (1)].string));   sauvState=2; strcpy(sauvType,"CHR");;}
    break;

  case 20:

/* Line 1455 of yacc.c  */
#line 74 "syntaxique.y"
    {strcpy(sauvVal,(yyvsp[(1) - (1)].string)); sauvState=2; strcpy(sauvType,"STR");;}
    break;

  case 21:

/* Line 1455 of yacc.c  */
#line 76 "syntaxique.y"
    {sprintf(sauvVal,"%d",(yyvsp[(2) - (3)].entier)); sauvState=0; strcpy(sauvType,"INT");;}
    break;

  case 22:

/* Line 1455 of yacc.c  */
#line 77 "syntaxique.y"
    {sprintf(sauvVal,"%d",(yyvsp[(2) - (3)].entier)); sauvState=0; strcpy(sauvType,"INT");;}
    break;

  case 23:

/* Line 1455 of yacc.c  */
#line 78 "syntaxique.y"
    {sprintf(sauvVal,"%d",(yyvsp[(1) - (1)].entier)); sauvState=0; strcpy(sauvType,"INT");;}
    break;

  case 24:

/* Line 1455 of yacc.c  */
#line 81 "syntaxique.y"
    {
                    verificationInsertion((yyvsp[(1) - (3)].string),sauvCateg,sauvType,"",0,3);
                  ;}
    break;

  case 25:

/* Line 1455 of yacc.c  */
#line 84 "syntaxique.y"
    {
                    verificationInsertion((yyvsp[(1) - (5)].string),sauvCateg,sauvType,"",0,3);
                  ;}
    break;

  case 26:

/* Line 1455 of yacc.c  */
#line 90 "syntaxique.y"
    {strcpy(sauvType,"INT");;}
    break;

  case 27:

/* Line 1455 of yacc.c  */
#line 91 "syntaxique.y"
    {strcpy(sauvType,"FLT");;}
    break;

  case 28:

/* Line 1455 of yacc.c  */
#line 92 "syntaxique.y"
    {strcpy(sauvType,"CHR");;}
    break;

  case 29:

/* Line 1455 of yacc.c  */
#line 93 "syntaxique.y"
    {strcpy(sauvType,"STR");;}
    break;

  case 30:

/* Line 1455 of yacc.c  */
#line 94 "syntaxique.y"
    {strcpy(sauvType,"BOL");;}
    break;

  case 31:

/* Line 1455 of yacc.c  */
#line 97 "syntaxique.y"
    { insertion((yyvsp[(2) - (5)].string),"tableau",sauvType,"",(yyvsp[(4) - (5)].entier),3); ;}
    break;

  case 41:

/* Line 1455 of yacc.c  */
#line 114 "syntaxique.y"
    {
                  printf("Val exp affectation =  %f \n",sauvValeur);
                  //verificationAffectation(idf,sauvValeur,sauvType);
                  //si est une variable alors on insere X
                  // sinon ERREUR Affectation constante  
             

            ;}
    break;

  case 42:

/* Line 1455 of yacc.c  */
#line 122 "syntaxique.y"
    {
                   InsertionTab((yyvsp[(4) - (10)].string),(yyvsp[(6) - (10)].entier),sauvVal);
            ;}
    break;

  case 43:

/* Line 1455 of yacc.c  */
#line 127 "syntaxique.y"
    { sauvValeur=(yyvsp[(1) - (1)].reel); sprintf(sauvVal,"%f",(yyvsp[(1) - (1)].reel)); ;}
    break;

  case 46:

/* Line 1455 of yacc.c  */
#line 130 "syntaxique.y"
    {strcpy(sauvType,"STR"); strcpy(sauvVal,(yyvsp[(1) - (1)].string));;}
    break;

  case 47:

/* Line 1455 of yacc.c  */
#line 131 "syntaxique.y"
    {strcpy(sauvType,"CHR"); strcpy(sauvVal,(yyvsp[(1) - (1)].string));;}
    break;

  case 48:

/* Line 1455 of yacc.c  */
#line 132 "syntaxique.y"
    {strcpy(sauvType,"BOL"); strcpy(sauvVal,(yyvsp[(1) - (1)].string));;}
    break;

  case 49:

/* Line 1455 of yacc.c  */
#line 136 "syntaxique.y"
    { (yyval.reel) =((yyvsp[(2) - (3)].reel)) ; ;}
    break;

  case 50:

/* Line 1455 of yacc.c  */
#line 137 "syntaxique.y"
    { (yyval.reel) = (yyvsp[(1) - (3)].reel) + (yyvsp[(3) - (3)].reel); ;}
    break;

  case 51:

/* Line 1455 of yacc.c  */
#line 138 "syntaxique.y"
    { (yyval.reel) = (yyvsp[(1) - (3)].reel) - (yyvsp[(3) - (3)].reel) ; ;}
    break;

  case 52:

/* Line 1455 of yacc.c  */
#line 139 "syntaxique.y"
    { (yyval.reel) = (yyvsp[(1) - (3)].reel) / (yyvsp[(3) - (3)].reel) ; ;}
    break;

  case 53:

/* Line 1455 of yacc.c  */
#line 140 "syntaxique.y"
    { (yyval.reel) = (yyvsp[(1) - (3)].reel) * (yyvsp[(3) - (3)].reel) ;;}
    break;

  case 54:

/* Line 1455 of yacc.c  */
#line 141 "syntaxique.y"
    { (yyval.reel) = (yyvsp[(1) - (1)].reel); ;}
    break;

  case 55:

/* Line 1455 of yacc.c  */
#line 143 "syntaxique.y"
    { (yyval.reel) = (float)(yyvsp[(2) - (3)].entier); ;}
    break;

  case 56:

/* Line 1455 of yacc.c  */
#line 144 "syntaxique.y"
    { (yyval.reel) = (float)(yyvsp[(2) - (3)].entier); ;}
    break;

  case 57:

/* Line 1455 of yacc.c  */
#line 145 "syntaxique.y"
    { (yyval.reel) = (float)(yyvsp[(1) - (1)].entier); ;}
    break;

  case 58:

/* Line 1455 of yacc.c  */
#line 146 "syntaxique.y"
    { (yyval.reel) = (yyvsp[(1) - (1)].reel); ;}
    break;

  case 59:

/* Line 1455 of yacc.c  */
#line 147 "syntaxique.y"
    { 
       sauvState=typeEntite((yyvsp[(1) - (1)].string));
       val=verificationValIdf((yyvsp[(1) - (1)].string),sauvState);
       printf("SAUV VAL IDF = %f\n",val);
       (yyval.reel)=sauvValeur;
     ;}
    break;

  case 60:

/* Line 1455 of yacc.c  */
#line 153 "syntaxique.y"
    { 
       sauvValeur=getValueTab((yyvsp[(1) - (4)].string),(yyvsp[(3) - (4)].entier));
       (yyval.reel)=sauvValeur;
     ;}
    break;



/* Line 1455 of yacc.c  */
#line 1984 "syntaxique.tab.c"
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
#line 258 "syntaxique.y"

main()
{   
    create_hash_table();
    yyparse(); 
    affichage_table();
    
}
    
yywrap ()
{

}

int  yyerror(char *msg){

   printf(" erreur syntaxique a la ligne %d a la colonne %d de l'entite lexical %s\n",nb_ligne,Col,yytext);
    return 1;
}
