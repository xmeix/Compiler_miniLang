
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
    char sauvType[10];
    char sauvValStr[100];
    float sauvVal;
    int sauvCateg = 1; 
    //0 constante 1 var


/* Line 189 of yacc.c  */
#line 88 "syntaxique.tab.c"

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
     cst_signed_int = 280,
     cst_float = 281,
     cst_bool = 282,
     cst_char = 283,
     plus = 284,
     moins = 285,
     mult = 286,
     divis = 287,
     and = 288,
     or = 289,
     not = 290,
     sup = 291,
     inf = 292,
     supeg = 293,
     infeg = 294,
     ega = 295,
     dif = 296,
     mc_int = 297,
     mc_float = 298,
     mc_char = 299,
     mc_string = 300,
     mc_bool = 301,
     mc_aff = 302,
     vrg = 303,
     mc_input = 304,
     mc_output = 305,
     dollar = 306,
     mod = 307,
     hash = 308,
     arob = 309,
     etcom = 310,
     chaine_gauche = 311,
     chaine_droite = 312,
     chaine_outdr = 313,
     simple_string = 314,
     mc_if = 315,
     mc_then = 316,
     mc_else = 317,
     mc_do = 318,
     mc_while = 319,
     mc_for = 320,
     mc_until = 321
   };
#endif



#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
{

/* Line 214 of yacc.c  */
#line 14 "syntaxique.y"

  int entier;
  char* string; 
  float reel;



/* Line 214 of yacc.c  */
#line 198 "syntaxique.tab.c"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif


/* Copy the second part of user declarations.  */


/* Line 264 of yacc.c  */
#line 210 "syntaxique.tab.c"

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
#define YYLAST   441

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  67
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  35
/* YYNRULES -- Number of rules.  */
#define YYNRULES  117
/* YYNRULES -- Number of states.  */
#define YYNSTATES  310

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   321

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
      65,    66
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,    17,    24,    31,    37,    39,    43,    51,
      56,    57,    64,    68,    72,    77,    83,    85,    87,    89,
      91,    93,    95,    97,   101,   107,   109,   111,   113,   115,
     117,   124,   128,   131,   134,   140,   143,   146,   149,   153,
     161,   172,   174,   176,   178,   180,   182,   184,   186,   188,
     190,   195,   199,   203,   207,   211,   215,   219,   223,   227,
     229,   234,   239,   244,   248,   252,   254,   256,   258,   260,
     265,   272,   274,   276,   278,   280,   282,   284,   292,   299,
     303,   309,   312,   314,   316,   318,   320,   322,   325,   328,
     334,   335,   352,   368,   370,   372,   377,   380,   383,   389,
     392,   396,   406,   409,   412,   418,   421,   424,   427,   431,
     441,   451,   454,   457,   463,   466,   469,   472
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      68,     0,    -1,     8,     3,     4,    12,     9,    69,     8,
       7,     9,    80,    11,     4,     9,    -1,     8,     5,     6,
       9,    70,    71,    -1,    71,     8,     5,     6,     9,    70,
      -1,     8,     5,     6,     9,    70,    -1,    71,    -1,     8,
      77,    70,    -1,     8,    16,    13,    78,     9,    79,    70,
      -1,    11,     5,     6,     9,    -1,    -1,     8,     5,    18,
       9,    72,    73,    -1,     8,    77,    73,    -1,     8,    74,
      73,    -1,    11,     5,    18,     9,    -1,    12,    19,    76,
      10,    14,    -1,    25,    -1,    24,    -1,    75,    -1,    26,
      -1,    27,    -1,    28,    -1,    59,    -1,    12,    15,    77,
      -1,    12,    13,    78,    10,    14,    -1,    42,    -1,    43,
      -1,    44,    -1,    45,    -1,    46,    -1,     8,    12,    17,
      24,    10,    79,    -1,    11,    16,     9,    -1,    81,    80,
      -1,    90,    80,    -1,     8,    50,    17,    91,    80,    -1,
      94,    80,    -1,    98,    80,    -1,   100,    80,    -1,    11,
       7,     9,    -1,     8,    47,    17,    12,    48,    82,    10,
      -1,     8,    47,    17,    12,    22,    24,    23,    48,    82,
      10,    -1,    84,    -1,    88,    -1,    85,    -1,    59,    -1,
      28,    -1,    27,    -1,    25,    -1,    26,    -1,    12,    -1,
      12,    22,    24,    23,    -1,    84,    29,    84,    -1,    84,
      30,    84,    -1,    84,    32,    84,    -1,    84,    31,    84,
      -1,    29,    84,    21,    -1,    30,    84,    21,    -1,    32,
      84,    21,    -1,    31,    84,    21,    -1,    83,    -1,    33,
      20,    86,    21,    -1,    34,    20,    86,    21,    -1,    35,
      20,    87,    21,    -1,    87,    48,    86,    -1,    87,    48,
      87,    -1,    85,    -1,    88,    -1,    12,    -1,    27,    -1,
      12,    22,    24,    23,    -1,    89,    20,    84,    48,    84,
      21,    -1,    36,    -1,    38,    -1,    39,    -1,    37,    -1,
      40,    -1,    41,    -1,     8,    49,    17,    12,    56,    92,
      57,    -1,    56,    92,    58,    12,    29,    91,    -1,    59,
      29,    91,    -1,    56,    92,    58,    12,    10,    -1,    59,
      10,    -1,    51,    -1,    52,    -1,    53,    -1,    54,    -1,
      55,    -1,    81,    93,    -1,    90,    93,    -1,     8,    50,
      17,    91,    93,    -1,    -1,     8,    60,    17,    95,     9,
       8,    61,     9,    93,    11,    61,     9,    96,    11,    60,
       9,    -1,     8,    60,    17,    95,     9,     8,    61,     9,
      93,    11,    61,     9,    11,    60,     9,    -1,    85,    -1,
      88,    -1,     8,    62,     9,    97,    -1,    81,    97,    -1,
      90,    97,    -1,     8,    50,    17,    91,    97,    -1,    94,
      97,    -1,    11,    62,     9,    -1,     8,    63,     9,    99,
      95,    10,    11,    63,     9,    -1,    81,    99,    -1,    90,
      99,    -1,     8,    50,    17,    91,    99,    -1,    94,    99,
      -1,    98,    99,    -1,   100,    99,    -1,     8,    64,    17,
      -1,     8,    65,    12,    19,    75,    66,    75,     9,   101,
      -1,     8,    65,    12,    19,    75,    66,    12,     9,   101,
      -1,    81,   101,    -1,    90,   101,    -1,     8,    50,    17,
      91,   101,    -1,    94,   101,    -1,    98,   101,    -1,   100,
     101,    -1,    11,    65,     9,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    36,    36,    43,    44,    45,    46,    51,    52,    53,
      56,    56,    59,    60,    61,    63,    72,    73,    76,    77,
      78,    79,    80,    83,    87,    95,    96,    97,    98,    99,
     102,   103,   106,   107,   108,   109,   110,   111,   112,   119,
     120,   123,   124,   125,   126,   127,   128,   132,   133,   134,
     135,   138,   139,   140,   141,   142,   143,   144,   145,   146,
     173,   174,   175,   178,   179,   181,   182,   183,   184,   185,
     188,   190,   191,   192,   193,   194,   195,   200,   204,   205,
     206,   207,   211,   212,   213,   214,   215,   218,   219,   220,
     221,   224,   225,   228,   229,   233,   235,   236,   237,   238,
     239,   244,   246,   247,   248,   249,   250,   251,   252,   257,
     258,   261,   262,   263,   264,   265,   266,   267
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
  "cst_unsigned_int", "cst_signed_int", "cst_float", "cst_bool",
  "cst_char", "plus", "moins", "mult", "divis", "and", "or", "not", "sup",
  "inf", "supeg", "infeg", "ega", "dif", "mc_int", "mc_float", "mc_char",
  "mc_string", "mc_bool", "mc_aff", "vrg", "mc_input", "mc_output",
  "dollar", "mod", "hash", "arob", "etcom", "chaine_gauche",
  "chaine_droite", "chaine_outdr", "simple_string", "mc_if", "mc_then",
  "mc_else", "mc_do", "mc_while", "mc_for", "mc_until", "$accept", "S",
  "DEC_TOTAL", "DECLARATION", "DECLARATION_CONST", "$@1",
  "LISTE_DEC_CONST", "DEC_CONST_EGAL", "SWITCH_INT", "SWITCH_CST_TYPES",
  "DECLARATION_SIMPLE", "TYPE", "DECLARATION_TAB", "BODY", "AFFECTATION",
  "X", "term", "EXPRESSION_ARITH", "EXPRESSION_LOGIQUE", "EXPRESSIONS",
  "TYPE_EXP", "EXPRESSION_COMPARAISON", "MC_COMPARAISON", "INPUT",
  "OUTPUT", "SIGNE_FORMATAGE", "INSTRUCTION", "INST_IF", "CONDITION",
  "INST_ELSE", "INSTRUCTION_ELSE", "BOUCLE_DO", "INSTRUCTION_BOUCLE_DO",
  "BOUCLE_FOR", "INSTRUCTION_BOUCLE_FOR", 0
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
     315,   316,   317,   318,   319,   320,   321
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    67,    68,    69,    69,    69,    69,    70,    70,    70,
      72,    71,    73,    73,    73,    74,    75,    75,    76,    76,
      76,    76,    76,    77,    77,    78,    78,    78,    78,    78,
      79,    79,    80,    80,    80,    80,    80,    80,    80,    81,
      81,    82,    82,    82,    82,    82,    82,    83,    83,    83,
      83,    84,    84,    84,    84,    84,    84,    84,    84,    84,
      85,    85,    85,    86,    86,    87,    87,    87,    87,    87,
      88,    89,    89,    89,    89,    89,    89,    90,    91,    91,
      91,    91,    92,    92,    92,    92,    92,    93,    93,    93,
      93,    94,    94,    95,    95,    96,    97,    97,    97,    97,
      97,    98,    99,    99,    99,    99,    99,    99,    99,   100,
     100,   101,   101,   101,   101,   101,   101,   101
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,    13,     6,     6,     5,     1,     3,     7,     4,
       0,     6,     3,     3,     4,     5,     1,     1,     1,     1,
       1,     1,     1,     3,     5,     1,     1,     1,     1,     1,
       6,     3,     2,     2,     5,     2,     2,     2,     3,     7,
      10,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       4,     3,     3,     3,     3,     3,     3,     3,     3,     1,
       4,     4,     4,     3,     3,     1,     1,     1,     1,     4,
       6,     1,     1,     1,     1,     1,     1,     7,     6,     3,
       5,     2,     1,     1,     1,     1,     1,     2,     2,     5,
       0,    16,    15,     1,     1,     4,     2,     2,     5,     2,
       3,     9,     2,     2,     5,     2,     2,     2,     3,     9,
       9,     2,     2,     5,     2,     2,     2,     3
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
       0,     0,    32,    33,    35,    36,    37,     4,     0,     0,
       0,     7,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    38,     0,    25,    26,    27,    28,
      29,     0,    23,     0,     9,     0,    13,    12,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    71,    74,    72,
      73,    75,    76,    93,    94,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     2,     0,     0,    17,    16,
      19,    20,    21,    22,    18,     0,    14,     0,     0,     0,
      82,    83,    84,    85,    86,     0,    81,     0,    34,     0,
       0,     0,     0,     0,     0,     0,   102,   103,   105,   106,
       0,   107,     0,    24,     0,     0,     0,     0,     0,    49,
      47,    48,    46,    45,     0,     0,     0,     0,    44,     0,
      59,    41,    43,    42,     0,     0,    79,    67,    68,    65,
       0,     0,    66,     0,     0,     0,     0,     0,   108,     0,
       0,     0,     0,     8,    15,     0,     0,     0,     0,     0,
       0,    39,     0,     0,     0,     0,    77,     0,     0,    60,
       0,    61,    62,     0,     0,     0,     0,     0,     0,     0,
      31,     0,     0,    55,    56,    58,    57,    51,    52,    54,
      53,    80,     0,     0,    63,    64,     0,    90,   104,     0,
       0,     0,     0,     0,    50,    78,    69,    70,     0,    90,
      90,     0,   101,     0,     0,     0,     0,     0,     0,     0,
     110,   109,     0,    40,     0,    87,    88,     0,     0,     0,
     111,   112,   114,   115,   116,    30,     0,     0,     0,   117,
      90,     0,     0,    89,     0,     0,     0,   113,     0,     0,
       0,     0,    92,     0,     0,     0,     0,     0,     0,    95,
      91,     0,     0,    96,    97,    99,     0,   100,     0,    98
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     2,     9,    24,    10,    25,    43,    65,   124,   125,
      37,    81,   156,    28,   255,   169,   170,   171,   179,   180,
     181,   182,   105,   256,    93,   135,   251,   257,   106,   286,
     299,   258,   112,   259,   260
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -228
static const yytype_int16 yypact[] =
{
      18,    45,    54,    83,  -228,   100,   120,   122,   149,   178,
     179,    66,   160,   187,   193,   211,   218,   213,    97,  -228,
     151,   222,    64,   231,   215,   153,   209,   234,   236,   151,
     151,   151,   151,   151,    97,    98,   229,    97,   242,   248,
    -228,   243,   249,  -228,   240,   244,   246,   247,   261,   263,
     264,   276,  -228,  -228,  -228,  -228,  -228,  -228,   298,   270,
     298,  -228,   274,   269,   112,   153,   153,   275,   282,   283,
     110,   322,   292,   293,  -228,   288,  -228,  -228,  -228,  -228,
    -228,   291,  -228,   302,  -228,   125,  -228,  -228,   304,    -7,
     258,   313,    20,   151,   296,   297,   330,  -228,  -228,  -228,
    -228,  -228,  -228,  -228,  -228,   331,   309,   202,   292,   292,
     292,   292,   322,   292,    37,  -228,   355,   174,  -228,  -228,
    -228,  -228,  -228,  -228,  -228,   360,  -228,   347,   294,   313,
    -228,  -228,  -228,  -228,  -228,   314,  -228,   110,  -228,   171,
     171,   171,   214,   365,   285,   357,  -228,  -228,  -228,  -228,
     366,  -228,   311,  -228,   363,   362,    97,   367,   356,   358,
    -228,  -228,  -228,  -228,   214,   214,   214,   214,  -228,   372,
    -228,   184,  -228,  -228,   326,   373,  -228,   364,  -228,  -228,
     368,   336,  -228,   369,   370,    27,   327,   110,  -228,   376,
      70,   375,   384,  -228,  -228,   346,   371,   159,   203,   260,
     278,  -228,   214,   214,   214,   214,  -228,    21,   374,  -228,
     171,  -228,  -228,   214,   387,   292,   334,   390,   391,   377,
    -228,   294,   379,  -228,  -228,  -228,  -228,    46,    46,  -228,
    -228,  -228,   110,   380,  -228,   336,   316,   396,  -228,   397,
     186,   186,   395,   398,  -228,  -228,  -228,  -228,   -15,   396,
     396,   399,  -228,   289,   342,   186,   186,   186,   186,   186,
    -228,  -228,   174,  -228,   392,  -228,  -228,   350,   400,   403,
    -228,  -228,  -228,  -228,  -228,  -228,   110,   404,   110,  -228,
     396,   188,   186,  -228,   352,   359,   405,  -228,   406,   409,
     361,   210,  -228,   411,   108,   378,   210,   210,   210,  -228,
    -228,   407,   413,  -228,  -228,  -228,   110,  -228,   210,  -228
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -228,  -228,  -228,    -9,   401,  -228,    76,  -228,   -98,  -228,
      10,   381,   161,   107,   -20,   205,  -228,   -32,   -65,  -139,
    -127,   -42,  -228,   -12,  -113,   299,  -227,     7,   315,  -228,
    -194,    13,  -106,    35,   -81
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -1
static const yytype_uint16 yytable[] =
{
      29,   183,   146,   147,   148,   149,   103,   151,    30,    29,
      29,    29,    29,    29,   184,   127,   152,    30,    30,    30,
      30,    30,   265,   266,   176,    57,     1,    31,    61,   104,
     136,   231,    44,    32,    45,   264,    31,    31,    31,    31,
      31,   128,    32,    32,    32,    32,    32,   103,     3,   137,
     232,    66,   108,   283,     4,    33,   202,   203,   204,   205,
     109,   118,   119,   172,    33,    33,    33,    33,    33,    82,
     104,   234,    14,    29,   215,   213,    35,   204,   205,   110,
      36,    30,   217,   235,    15,   111,   173,     5,   108,   108,
     108,   108,   218,   108,   118,   119,   109,   109,   109,   109,
      31,   109,   303,   304,   305,    22,    32,   113,    23,   238,
     185,    58,     6,    59,   309,   110,   110,   110,   110,   245,
     110,   111,   111,   111,   111,    58,   111,    59,    33,     7,
       8,    85,   197,   198,   199,   200,    52,    53,    54,    55,
      56,    86,    87,   113,   113,   113,   113,   193,   113,   118,
     119,   120,   121,   122,    11,    44,   172,    45,   301,    26,
     261,    41,    27,   280,    42,   282,    91,    16,    47,    92,
     227,   228,   229,   230,   270,   271,   272,   273,   274,   173,
     223,   236,   154,   177,   123,   155,    12,    13,   202,   203,
     204,   205,    17,   308,   253,   108,   284,   254,   178,   285,
     138,   287,    18,   109,    94,    95,    96,    97,    98,    99,
     100,   101,   102,   202,   203,   204,   205,   249,   294,    21,
      19,   295,   110,    39,   224,   250,   159,    20,   111,   249,
     249,    34,   202,   203,   204,   205,    38,   250,   250,   160,
     161,    50,    60,   164,   165,   166,   167,    51,    62,    44,
     113,    45,   144,    63,    67,    64,    44,    68,    45,    46,
     249,    69,    47,    70,    71,    48,   145,    49,   250,    47,
      72,   296,    48,    74,    49,    73,   296,   296,   296,   297,
      75,   225,    35,    84,   297,   297,   297,    15,   296,   202,
     203,   204,   205,    88,    89,    90,   297,   115,   298,   226,
     107,   116,   187,   298,   298,   298,   159,   202,   203,   204,
     205,   117,   114,   126,   129,   298,   139,   140,   143,   160,
     161,   162,   163,   164,   165,   166,   167,    94,    95,    96,
      97,    98,    99,   100,   101,   102,    44,   247,    45,   268,
      76,    77,    78,    79,    80,   202,   203,   204,   205,    47,
     141,   142,    48,   168,    49,    94,    95,    96,    97,    98,
      99,   100,   101,   102,   130,   131,   132,   133,   134,   153,
     157,   158,   175,   186,   188,   191,   189,   190,   192,   195,
     196,   194,   201,   206,   210,   207,   208,   216,   214,   209,
     211,   212,   219,   220,   221,   222,   237,   239,   233,   240,
     241,   242,   244,   246,   248,   262,   252,   269,   263,   276,
     267,   277,   279,   281,   288,   291,   290,   278,   292,   289,
     300,   293,   307,   275,   306,    40,   243,   150,   174,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     302,    83
};

static const yytype_int16 yycheck[] =
{
      20,   140,   108,   109,   110,   111,    71,   113,    20,    29,
      30,    31,    32,    33,   141,    22,   114,    29,    30,    31,
      32,    33,   249,   250,   137,    34,     8,    20,    37,    71,
      10,    10,    47,    20,    49,    50,    29,    30,    31,    32,
      33,    48,    29,    30,    31,    32,    33,   112,     3,    29,
      29,    41,    72,   280,     0,    20,    29,    30,    31,    32,
      72,    24,    25,   128,    29,    30,    31,    32,    33,    59,
     112,   210,     6,    93,   187,    48,    12,    31,    32,    72,
      16,    93,    12,   210,    18,    72,   128,     4,   108,   109,
     110,   111,   190,   113,    24,    25,   108,   109,   110,   111,
      93,   113,   296,   297,   298,     8,    93,    72,    11,   215,
     142,    13,    12,    15,   308,   108,   109,   110,   111,   232,
     113,   108,   109,   110,   111,    13,   113,    15,    93,     9,
       8,    19,   164,   165,   166,   167,    29,    30,    31,    32,
      33,    65,    66,   108,   109,   110,   111,   156,   113,    24,
      25,    26,    27,    28,     5,    47,   221,    49,    50,     8,
     241,     8,    11,   276,    11,   278,    56,     7,    60,    59,
     202,   203,   204,   205,   255,   256,   257,   258,   259,   221,
      21,   213,     8,    12,    59,    11,     8,     8,    29,    30,
      31,    32,     5,   306,     8,   215,     8,    11,    27,    11,
      93,   282,     9,   215,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    29,    30,    31,    32,   237,     8,     6,
       9,    11,   215,     8,    21,   237,    12,     9,   215,   249,
     250,     9,    29,    30,    31,    32,     5,   249,   250,    25,
      26,     7,    13,    29,    30,    31,    32,    11,     6,    47,
     215,    49,    50,     5,     5,    12,    47,    17,    49,    50,
     280,    17,    60,    17,    17,    63,    64,    65,   280,    60,
       9,   291,    63,     9,    65,    12,   296,   297,   298,   291,
       4,    21,    12,     9,   296,   297,   298,    18,   308,    29,
      30,    31,    32,    18,    12,    12,   308,     9,   291,    21,
       8,    10,    17,   296,   297,   298,    12,    29,    30,    31,
      32,     9,    19,     9,    56,   308,    20,    20,     9,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    47,    21,    49,    50,
      42,    43,    44,    45,    46,    29,    30,    31,    32,    60,
      20,    20,    63,    59,    65,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    51,    52,    53,    54,    55,    14,
      10,    24,    58,     8,    17,    12,    10,    66,    16,    23,
      22,    14,    10,    57,    48,    12,    22,    11,    61,    21,
      21,    21,    17,     9,    48,    24,     9,    63,    24,     9,
       9,    24,    23,    23,     8,    10,     9,    65,    10,    17,
      11,    61,     9,     9,    62,     9,    11,    17,     9,    60,
       9,    60,     9,   262,    17,    24,   221,   112,   129,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      62,    60
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     8,    68,     3,     0,     4,    12,     9,     8,    69,
      71,     5,     8,     8,     6,    18,     7,     5,     9,     9,
       9,     6,     8,    11,    70,    72,     8,    11,    80,    81,
      90,    94,    98,   100,     9,    12,    16,    77,     5,     8,
      71,     8,    11,    73,    47,    49,    50,    60,    63,    65,
       7,    11,    80,    80,    80,    80,    80,    70,    13,    15,
      13,    70,     6,     5,    12,    74,    77,     5,    17,    17,
      17,    17,     9,    12,     9,     4,    42,    43,    44,    45,
      46,    78,    77,    78,     9,    19,    73,    73,    18,    12,
      12,    56,    59,    91,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    85,    88,    89,    95,     8,    81,    90,
      94,    98,    99,   100,    19,     9,    10,     9,    24,    25,
      26,    27,    28,    59,    75,    76,     9,    22,    48,    56,
      51,    52,    53,    54,    55,    92,    10,    29,    80,    20,
      20,    20,    20,     9,    50,    64,    99,    99,    99,    99,
      95,    99,    75,    14,     8,    11,    79,    10,    24,    12,
      25,    26,    27,    28,    29,    30,    31,    32,    59,    82,
      83,    84,    85,    88,    92,    58,    91,    12,    27,    85,
      86,    87,    88,    86,    87,    84,     8,    17,    17,    10,
      66,    12,    16,    70,    14,    23,    22,    84,    84,    84,
      84,    10,    29,    30,    31,    32,    57,    12,    22,    21,
      48,    21,    21,    48,    61,    91,    11,    12,    75,    17,
       9,    48,    24,    21,    21,    21,    21,    84,    84,    84,
      84,    10,    29,    24,    86,    87,    84,     9,    99,    63,
       9,     9,    24,    82,    23,    91,    23,    21,     8,    81,
      90,    93,     9,     8,    11,    81,    90,    94,    98,   100,
     101,   101,    10,    10,    50,    93,    93,    11,    50,    65,
     101,   101,   101,   101,   101,    79,    17,    61,    17,     9,
      91,     9,    91,    93,     8,    11,    96,   101,    62,    60,
      11,     9,     9,    60,     8,    11,    81,    90,    94,    97,
       9,    50,    62,    97,    97,    97,    17,     9,    91,    97
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
#line 37 "syntaxique.y"
    {printf("programme syntaxiquement correct");
                                YYACCEPT;;}
    break;

  case 9:

/* Line 1455 of yacc.c  */
#line 53 "syntaxique.y"
    { sauvCateg = 0 ;;}
    break;

  case 10:

/* Line 1455 of yacc.c  */
#line 56 "syntaxique.y"
    { sauvCateg = 0 ; ;}
    break;

  case 14:

/* Line 1455 of yacc.c  */
#line 61 "syntaxique.y"
    { sauvCateg = 1;;}
    break;

  case 15:

/* Line 1455 of yacc.c  */
#line 63 "syntaxique.y"
    {

                    printf("START SAUV CATEG %d \n",sauvCateg);
                     if(sauvCateg== 1) inserer((yyvsp[(1) - (5)].string),sauvType,NULL,"",0,0,0,0);
                                        else if(sauvCateg== 0) inserer((yyvsp[(1) - (5)].string),sauvType,NULL,"",0,0,0,1);
                    printf("END SAUV CATEG %d \n",sauvCateg);

                     ;}
    break;

  case 16:

/* Line 1455 of yacc.c  */
#line 72 "syntaxique.y"
    {sauvVal=(yyvsp[(1) - (1)].entier); strcpy(sauvType,"INT");;}
    break;

  case 17:

/* Line 1455 of yacc.c  */
#line 73 "syntaxique.y"
    {sauvVal=(yyvsp[(1) - (1)].entier); strcpy(sauvType,"INT");;}
    break;

  case 19:

/* Line 1455 of yacc.c  */
#line 77 "syntaxique.y"
    {sauvVal=(yyvsp[(1) - (1)].reel); strcpy(sauvType,"FLT");;}
    break;

  case 20:

/* Line 1455 of yacc.c  */
#line 78 "syntaxique.y"
    {sauvVal=(yyvsp[(1) - (1)].entier); strcpy(sauvType,"BOL");;}
    break;

  case 21:

/* Line 1455 of yacc.c  */
#line 79 "syntaxique.y"
    {strcpy(sauvValStr,(yyvsp[(1) - (1)].string)); strcpy(sauvType,"CHR");;}
    break;

  case 22:

/* Line 1455 of yacc.c  */
#line 80 "syntaxique.y"
    { strcpy(sauvValStr,(yyvsp[(1) - (1)].string)); strcpy(sauvType,"STR");;}
    break;

  case 23:

/* Line 1455 of yacc.c  */
#line 83 "syntaxique.y"
    { 
                                        if(sauvCateg== 1) inserer((yyvsp[(1) - (3)].string),sauvType,NULL,"",0,0,0,0);
                                        else if(sauvCateg== 0) inserer((yyvsp[(1) - (3)].string),sauvType,NULL,"",0,0,0,1);
                                    ;}
    break;

  case 24:

/* Line 1455 of yacc.c  */
#line 87 "syntaxique.y"
    { 
                                        if(sauvCateg== 1) inserer((yyvsp[(1) - (5)].string),sauvType,NULL,"",0,0,0,0); /// 2 fois 
                                        else if(sauvCateg== 0) inserer((yyvsp[(1) - (5)].string),sauvType,NULL,"",0,0,0,1);
                       ;}
    break;

  case 25:

/* Line 1455 of yacc.c  */
#line 95 "syntaxique.y"
    {strcpy(sauvType,(yyvsp[(1) - (1)].string));;}
    break;

  case 26:

/* Line 1455 of yacc.c  */
#line 96 "syntaxique.y"
    {strcpy(sauvType,(yyvsp[(1) - (1)].string));;}
    break;

  case 27:

/* Line 1455 of yacc.c  */
#line 97 "syntaxique.y"
    {strcpy(sauvType,(yyvsp[(1) - (1)].string));;}
    break;

  case 28:

/* Line 1455 of yacc.c  */
#line 98 "syntaxique.y"
    {strcpy(sauvType,(yyvsp[(1) - (1)].string));;}
    break;

  case 29:

/* Line 1455 of yacc.c  */
#line 99 "syntaxique.y"
    {strcpy(sauvType,(yyvsp[(1) - (1)].string));;}
    break;

  case 30:

/* Line 1455 of yacc.c  */
#line 102 "syntaxique.y"
    { inserer((yyvsp[(2) - (6)].string),sauvType,NULL,"",(yyvsp[(4) - (6)].entier),0,0,0);;}
    break;



/* Line 1455 of yacc.c  */
#line 1839 "syntaxique.tab.c"
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
#line 270 "syntaxique.y"

main()
{   
    initialisation();
    yyparse(); 
    affichage();
    
}
    
yywrap ()
{

}

int  yyerror(char *msg){

   printf(" erreur syntaxique a la ligne %d a la colonne %d de l'entite lexical %s\n",nb_ligne,Col,yytext);
    return 1;
}
