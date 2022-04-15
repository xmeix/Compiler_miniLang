
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


/* Line 189 of yacc.c  */
#line 83 "syntaxique.tab.c"

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
     quote = 275,
     par_ouv = 276,
     par_fer = 277,
     cr_ouv = 278,
     cr_fer = 279,
     cst_unsigned_int = 280,
     cst_signed_int = 281,
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
typedef int YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif


/* Copy the second part of user declarations.  */


/* Line 264 of yacc.c  */
#line 192 "syntaxique.tab.c"

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
#define YYLAST   461

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  68
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  31
/* YYNRULES -- Number of rules.  */
#define YYNRULES  110
/* YYNRULES -- Number of states.  */
#define YYNSTATES  315

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
       0,     0,     3,    25,    48,    71,    75,    83,    84,    90,
      94,   102,   107,   109,   111,   113,   115,   117,   119,   121,
     125,   131,   133,   135,   137,   139,   141,   148,   152,   155,
     158,   164,   167,   170,   173,   177,   185,   196,   198,   200,
     202,   204,   206,   208,   212,   216,   220,   224,   226,   228,
     230,   232,   237,   241,   246,   251,   256,   260,   264,   266,
     268,   270,   272,   277,   284,   286,   288,   290,   292,   294,
     296,   304,   311,   315,   321,   324,   326,   328,   330,   332,
     334,   337,   340,   346,   347,   364,   380,   382,   384,   389,
     392,   395,   401,   404,   408,   418,   421,   424,   430,   433,
     436,   439,   443,   453,   463,   466,   469,   475,   478,   481,
     484
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      69,     0,    -1,     8,     3,     4,    12,     9,     8,     5,
       6,     9,    70,    11,     5,     6,     9,     8,     7,     9,
      78,    11,     4,     9,    -1,     8,     3,     4,    12,     9,
       8,     5,     6,     9,    70,    11,     5,     6,     9,    71,
       8,     7,     9,    78,    11,     4,     9,    -1,     8,     3,
       4,    12,     9,    71,     8,     5,     6,     9,    70,    11,
       5,     6,     9,     8,     7,     9,    78,    11,     4,     9,
      -1,     8,    75,    70,    -1,     8,    16,    13,    76,     9,
      77,    70,    -1,    -1,     8,     5,    18,     9,    72,    -1,
       8,    75,    72,    -1,     8,    12,    19,    74,    10,    14,
      72,    -1,    11,     5,    18,     9,    -1,    26,    -1,    25,
      -1,    73,    -1,    27,    -1,    28,    -1,    29,    -1,    60,
      -1,    12,    15,    75,    -1,    12,    13,    76,    10,    14,
      -1,    43,    -1,    44,    -1,    45,    -1,    46,    -1,    47,
      -1,     8,    12,    17,    25,    10,    77,    -1,    11,    16,
       9,    -1,    79,    78,    -1,    87,    78,    -1,     8,    51,
      17,    88,    78,    -1,    91,    78,    -1,    95,    78,    -1,
      97,    78,    -1,    11,     7,     9,    -1,     8,    48,    17,
      12,    49,    80,    10,    -1,     8,    48,    17,    12,    23,
      25,    24,    49,    80,    10,    -1,    81,    -1,    85,    -1,
      82,    -1,    60,    -1,    29,    -1,    28,    -1,    81,    30,
      81,    -1,    81,    31,    81,    -1,    81,    32,    81,    -1,
      81,    33,    81,    -1,    26,    -1,    25,    -1,    27,    -1,
      12,    -1,    12,    23,    25,    24,    -1,    21,    81,    22,
      -1,    34,    21,    83,    22,    -1,    35,    21,    83,    22,
      -1,    36,    21,    84,    22,    -1,    84,    49,    83,    -1,
      84,    49,    84,    -1,    82,    -1,    85,    -1,    12,    -1,
      28,    -1,    12,    23,    25,    24,    -1,    86,    21,    81,
      49,    81,    22,    -1,    37,    -1,    39,    -1,    40,    -1,
      38,    -1,    41,    -1,    42,    -1,     8,    50,    17,    12,
      57,    89,    58,    -1,    57,    89,    59,    12,    30,    88,
      -1,    60,    30,    88,    -1,    57,    89,    59,    12,    10,
      -1,    60,    10,    -1,    52,    -1,    53,    -1,    54,    -1,
      55,    -1,    56,    -1,    79,    90,    -1,    87,    90,    -1,
       8,    51,    17,    88,    90,    -1,    -1,     8,    61,    17,
      92,     9,     8,    62,     9,    90,    11,    62,     9,    93,
      11,    61,     9,    -1,     8,    61,    17,    92,     9,     8,
      62,     9,    90,    11,    62,     9,    11,    61,     9,    -1,
      82,    -1,    85,    -1,     8,    63,     9,    94,    -1,    79,
      94,    -1,    87,    94,    -1,     8,    51,    17,    88,    94,
      -1,    91,    94,    -1,    11,    63,     9,    -1,     8,    64,
       9,    96,    92,    10,    11,    64,     9,    -1,    79,    96,
      -1,    87,    96,    -1,     8,    51,    17,    88,    96,    -1,
      91,    96,    -1,    95,    96,    -1,    97,    96,    -1,     8,
      65,    17,    -1,     8,    66,    12,    19,    73,    67,    73,
       9,    98,    -1,     8,    66,    12,    19,    73,    67,    12,
       9,    98,    -1,    79,    98,    -1,    87,    98,    -1,     8,
      51,    17,    88,    98,    -1,    91,    98,    -1,    95,    98,
      -1,    97,    98,    -1,    11,    66,     9,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint8 yyrline[] =
{
       0,    26,    26,    30,    34,    41,    42,    43,    46,    50,
      51,    52,    55,    56,    58,    59,    60,    61,    62,    65,
      66,    71,    72,    73,    74,    75,    78,    79,    82,    83,
      84,    85,    86,    87,    88,    95,    96,    99,   100,   101,
     102,   103,   104,   107,   108,   109,   110,   111,   112,   113,
     114,   115,   116,   120,   121,   122,   125,   126,   128,   129,
     130,   131,   132,   135,   137,   138,   139,   140,   141,   142,
     147,   151,   152,   153,   154,   158,   159,   160,   161,   162,
     165,   166,   167,   168,   171,   172,   175,   176,   180,   182,
     183,   184,   185,   186,   191,   193,   194,   195,   196,   197,
     198,   199,   204,   205,   208,   209,   210,   211,   212,   213,
     214
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
  "mc_constante", "egal", "quote", "par_ouv", "par_fer", "cr_ouv",
  "cr_fer", "cst_unsigned_int", "cst_signed_int", "cst_float", "cst_bool",
  "cst_char", "plus", "moins", "mult", "divis", "and", "or", "not", "sup",
  "inf", "supeg", "infeg", "ega", "dif", "mc_int", "mc_float", "mc_char",
  "mc_string", "mc_bool", "mc_aff", "vrg", "mc_input", "mc_output",
  "dollar", "mod", "hash", "arob", "etcom", "chaine_gauche",
  "chaine_droite", "chaine_outdr", "simple_string", "mc_if", "mc_then",
  "mc_else", "mc_do", "mc_while", "mc_for", "mc_until", "$accept", "S",
  "DECLARATION", "DECLARATION_CONST", "LISTE_DEC_CONST", "SWITCH_INT",
  "SWITCH_CST_TYPES", "DECLARATION_SIMPLE", "TYPE", "DECLARATION_TAB",
  "BODY", "AFFECTATION", "X", "EXPRESSION_ARITH", "EXPRESSION_LOGIQUE",
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
       0,    68,    69,    69,    69,    70,    70,    70,    71,    72,
      72,    72,    73,    73,    74,    74,    74,    74,    74,    75,
      75,    76,    76,    76,    76,    76,    77,    77,    78,    78,
      78,    78,    78,    78,    78,    79,    79,    80,    80,    80,
      80,    80,    80,    81,    81,    81,    81,    81,    81,    81,
      81,    81,    81,    82,    82,    82,    83,    83,    84,    84,
      84,    84,    84,    85,    86,    86,    86,    86,    86,    86,
      87,    88,    88,    88,    88,    89,    89,    89,    89,    89,
      90,    90,    90,    90,    91,    91,    92,    92,    93,    94,
      94,    94,    94,    94,    95,    96,    96,    96,    96,    96,
      96,    96,    97,    97,    98,    98,    98,    98,    98,    98,
      98
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,    21,    22,    22,     3,     7,     0,     5,     3,
       7,     4,     1,     1,     1,     1,     1,     1,     1,     3,
       5,     1,     1,     1,     1,     1,     6,     3,     2,     2,
       5,     2,     2,     2,     3,     7,    10,     1,     1,     1,
       1,     1,     1,     3,     3,     3,     3,     1,     1,     1,
       1,     4,     3,     4,     4,     4,     3,     3,     1,     1,
       1,     1,     4,     6,     1,     1,     1,     1,     1,     1,
       7,     6,     3,     5,     2,     1,     1,     1,     1,     1,
       2,     2,     5,     0,    16,    15,     1,     1,     4,     2,
       2,     5,     2,     3,     9,     2,     2,     5,     2,     2,
       2,     3,     9,     9,     2,     2,     5,     2,     2,     2,
       3
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,     0,     0,     1,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     7,     0,     0,     0,     0,
       0,     0,     8,     7,     0,     0,     7,     0,     0,     0,
       0,     0,     0,     0,     0,     5,     0,     0,     9,     0,
       0,    21,    22,    23,    24,    25,     0,    19,     0,     0,
      13,    12,    15,    16,    17,    18,    14,     0,    11,     0,
       0,     0,     0,     0,     0,    20,     0,     0,     7,     0,
       0,     0,     0,     0,     0,     6,     0,     0,     0,    10,
       0,     0,    27,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    28,    29,    31,    32,
      33,     0,     0,    26,     0,     0,     0,     0,     0,     0,
      34,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    64,    67,    65,    66,    68,    69,    86,    87,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       2,     0,     0,     0,     0,     0,    75,    76,    77,    78,
      79,     0,    74,     0,    30,     0,     0,     0,     0,     0,
       0,     0,    95,    96,    98,    99,     0,   100,     0,     3,
       4,     0,    50,     0,    48,    47,    49,    42,    41,    40,
       0,    37,    39,    38,     0,     0,    72,    60,    61,    58,
       0,     0,    59,     0,     0,     0,     0,     0,   101,     0,
       0,     0,     0,     0,    35,     0,     0,     0,     0,    70,
       0,     0,    53,     0,    54,    55,     0,     0,     0,     0,
       0,     0,     0,     0,    52,    43,    44,    45,    46,    73,
       0,     0,    56,    57,     0,    83,    97,     0,     0,     0,
       0,    51,    71,    62,    63,     0,    83,    83,     0,    94,
       0,     0,     0,     0,     0,     0,     0,   103,   102,    36,
       0,    80,    81,     0,     0,     0,   104,   105,   107,   108,
     109,     0,     0,     0,   110,    83,     0,     0,    82,     0,
       0,     0,   106,     0,     0,     0,     0,    85,     0,     0,
       0,     0,     0,     0,    88,    84,     0,     0,    89,    90,
      92,     0,    93,     0,    91
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     2,    19,     9,    22,    56,    57,    26,    46,    68,
      89,    90,   190,   191,   199,   200,   201,   202,   140,    91,
     128,   161,   258,    92,   141,   291,   304,    93,   147,    94,
     267
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -237
static const yytype_int16 yypact[] =
{
       4,    20,    52,   114,  -237,    46,    70,   121,   128,   129,
      28,   147,   166,   177,   186,   185,    36,   204,     3,   209,
     213,   230,  -237,   185,    62,   223,   185,   232,   192,    36,
     222,   236,   293,   237,   293,  -237,   250,   134,  -237,   248,
     253,  -237,  -237,  -237,  -237,  -237,   231,  -237,   254,   279,
    -237,  -237,  -237,  -237,  -237,  -237,  -237,   280,  -237,   283,
     278,   117,   287,   284,   288,  -237,   294,   289,   185,    80,
     300,    36,   302,   295,   305,  -237,   282,   306,   304,  -237,
     318,   310,  -237,   160,   338,   339,   340,   235,   342,   341,
     160,   160,   160,   160,   160,   160,   160,   117,   334,   336,
     337,   343,   346,   344,   348,   354,  -237,  -237,  -237,  -237,
    -237,   350,   351,  -237,   347,   352,   120,   292,   355,   349,
    -237,   356,   362,   363,     1,   312,   290,    21,   160,   353,
     357,   358,  -237,  -237,  -237,  -237,  -237,  -237,  -237,  -237,
     359,   361,   158,   355,   355,   355,   355,   292,   355,   125,
    -237,   364,   366,   360,    55,   290,  -237,  -237,  -237,  -237,
    -237,   313,  -237,   120,  -237,   238,   238,   238,   227,   368,
     365,   367,  -237,  -237,  -237,  -237,   371,  -237,   316,  -237,
    -237,   369,   372,   227,  -237,  -237,  -237,  -237,  -237,  -237,
     376,    31,  -237,  -237,   319,   375,  -237,   373,  -237,  -237,
     370,   322,  -237,   377,   378,    75,   326,   120,  -237,   379,
      97,   345,   380,   229,  -237,   227,   227,   227,   227,  -237,
      23,   381,  -237,   238,  -237,  -237,   227,   382,   355,   325,
     388,   389,    55,   383,  -237,   110,   110,  -237,  -237,  -237,
     120,   384,  -237,   322,   291,   393,  -237,   394,   207,   207,
     392,  -237,  -237,  -237,  -237,    84,   393,   393,   398,  -237,
     243,   374,   207,   207,   207,   207,   207,  -237,  -237,  -237,
     387,  -237,  -237,   385,   395,   401,  -237,  -237,  -237,  -237,
    -237,   120,   402,   120,  -237,   393,   257,   207,  -237,   386,
     390,   403,  -237,   404,   406,   391,   276,  -237,   407,   153,
     396,   276,   276,   276,  -237,  -237,   400,   409,  -237,  -237,
    -237,   120,  -237,   276,  -237
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -237,  -237,    -9,   399,   -11,  -136,  -237,     9,   397,   323,
       8,  -118,   187,  -161,  -115,  -157,  -151,  -106,  -237,   -75,
    -162,   266,  -236,   -32,   275,  -237,  -137,  -108,  -140,    54,
     -20
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -1
static const yytype_uint16 yytable[] =
{
     143,   196,   138,   172,   173,   174,   175,   205,   177,   203,
     146,   139,     1,   178,    31,    24,   204,    35,    38,    25,
     271,   272,   213,     3,   153,   143,   143,   143,   143,    29,
     143,   162,   138,   239,    12,   146,   146,   146,   146,   192,
     146,   139,    47,   144,    20,   228,    13,    21,   193,   288,
     154,   163,     4,   240,   235,   236,   237,   238,     6,    75,
      79,   215,   216,   217,   218,   244,   242,   182,   144,   144,
     144,   144,   243,   144,   231,    32,   183,    33,   252,     7,
     184,   185,   186,   187,   188,    76,   145,    77,   246,   129,
     130,   131,   132,   133,   134,   135,   136,   137,   106,   107,
     108,   109,   110,   111,   112,   215,   216,   217,   218,   230,
     143,   145,   145,   145,   145,   189,   145,   192,     5,   285,
     146,   287,    50,    51,   226,    66,   193,   256,    67,     8,
     262,   262,    98,    10,    99,   270,   164,    11,   256,   256,
     265,   265,   217,   218,   262,   262,   262,   262,   262,   313,
      50,    51,    14,   144,   265,   265,   265,   265,   265,    50,
      51,    52,    53,    54,   308,   309,   310,   256,    87,   262,
     257,    88,   148,   263,   263,    15,   314,   126,   301,   265,
     127,   257,   257,   301,   301,   301,    16,   263,   263,   263,
     263,   263,    17,    18,    55,   301,   145,   148,   148,   148,
     148,    98,   148,    99,   306,    32,    98,    33,    99,   170,
     257,    37,   263,    23,   101,   260,   264,   264,   261,   101,
      27,   302,   102,   171,   103,    28,   302,   302,   302,   268,
     264,   264,   264,   264,   264,    30,    34,    36,   302,   182,
      39,    60,   276,   277,   278,   279,   280,    40,   183,    24,
     197,   234,   184,   185,   186,   264,    49,    58,    59,   215,
     216,   217,   218,    61,   303,   289,   198,   292,   290,   303,
     303,   303,   129,   130,   131,   132,   133,   134,   135,   136,
     137,   303,   148,    98,   299,    99,   100,   300,    62,    64,
      63,    98,    65,    99,   274,    69,   101,    72,    71,   102,
      13,   103,   266,   266,   101,    74,    73,   102,    78,   103,
      80,    84,    81,   254,    82,    83,   266,   266,   266,   266,
     266,   215,   216,   217,   218,    85,   129,   130,   131,   132,
     133,   134,   135,   136,   137,    86,    41,    42,    43,    44,
      45,   266,   156,   157,   158,   159,   160,    95,    96,   104,
      97,   114,   105,   115,   116,   118,   119,   120,   121,   124,
     117,   122,   123,   142,   125,   150,   151,   152,   149,   155,
     169,   223,   195,   179,   165,   180,   206,   219,   166,   167,
     168,   209,   207,   210,   208,   181,   214,   220,   227,   247,
     229,   245,   222,   211,   232,   212,   221,   248,   249,   224,
     225,   255,   269,   259,   281,   233,   241,   251,   253,   273,
     284,   286,   283,   296,   295,   297,   305,   311,   312,   250,
     113,   194,   176,     0,     0,     0,     0,     0,     0,     0,
       0,    48,     0,     0,     0,     0,     0,     0,     0,     0,
     275,     0,     0,     0,     0,     0,     0,   282,     0,   293,
       0,   294,   298,     0,     0,     0,     0,     0,     0,   307,
       0,    70
};

static const yytype_int16 yycheck[] =
{
     118,   163,   117,   143,   144,   145,   146,   168,   148,   166,
     118,   117,     8,   149,    23,    12,   167,    26,    29,    16,
     256,   257,   183,     3,    23,   143,   144,   145,   146,    20,
     148,    10,   147,    10,     6,   143,   144,   145,   146,   154,
     148,   147,    33,   118,     8,   207,    18,    11,   154,   285,
      49,    30,     0,    30,   215,   216,   217,   218,    12,    68,
      71,    30,    31,    32,    33,   226,   223,    12,   143,   144,
     145,   146,   223,   148,   210,    13,    21,    15,   240,     9,
      25,    26,    27,    28,    29,     5,   118,     7,   228,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    90,    91,
      92,    93,    94,    95,    96,    30,    31,    32,    33,    12,
     228,   143,   144,   145,   146,    60,   148,   232,     4,   281,
     228,   283,    25,    26,    49,     8,   232,   245,    11,     8,
     248,   249,    48,     5,    50,    51,   128,     8,   256,   257,
     248,   249,    32,    33,   262,   263,   264,   265,   266,   311,
      25,    26,     5,   228,   262,   263,   264,   265,   266,    25,
      26,    27,    28,    29,   301,   302,   303,   285,     8,   287,
     245,    11,   118,   248,   249,     9,   313,    57,   296,   287,
      60,   256,   257,   301,   302,   303,     9,   262,   263,   264,
     265,   266,     6,     8,    60,   313,   228,   143,   144,   145,
     146,    48,   148,    50,    51,    13,    48,    15,    50,    51,
     285,    19,   287,     9,    61,     8,   248,   249,    11,    61,
      11,   296,    64,    65,    66,    12,   301,   302,   303,   249,
     262,   263,   264,   265,   266,     5,    13,     5,   313,    12,
      18,    10,   262,   263,   264,   265,   266,    11,    21,    12,
      12,    22,    25,    26,    27,   287,     6,     9,     5,    30,
      31,    32,    33,     9,   296,     8,    28,   287,    11,   301,
     302,   303,    34,    35,    36,    37,    38,    39,    40,    41,
      42,   313,   228,    48,     8,    50,    51,    11,     9,     6,
      10,    48,    14,    50,    51,     8,    61,     9,    14,    64,
      18,    66,   248,   249,    61,    16,    12,    64,     8,    66,
       8,     7,    17,    22,     9,     9,   262,   263,   264,   265,
     266,    30,    31,    32,    33,     7,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    25,    43,    44,    45,    46,
      47,   287,    52,    53,    54,    55,    56,     9,     9,     7,
      10,    17,    11,    17,    17,     9,    12,     9,     4,    12,
      17,    11,    11,     8,    12,     9,     4,     4,    19,    57,
       9,    49,    59,     9,    21,     9,     8,    58,    21,    21,
      21,    10,    17,    67,    17,    25,    10,    12,    62,    64,
      11,     9,    22,    24,    49,    23,    23,     9,     9,    22,
      22,     8,    10,     9,    17,    25,    25,    24,    24,    11,
       9,     9,    17,     9,    11,     9,     9,    17,     9,   232,
      97,   155,   147,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    34,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      66,    -1,    -1,    -1,    -1,    -1,    -1,    62,    -1,    63,
      -1,    61,    61,    -1,    -1,    -1,    -1,    -1,    -1,    63,
      -1,    62
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     8,    69,     3,     0,     4,    12,     9,     8,    71,
       5,     8,     6,    18,     5,     9,     9,     6,     8,    70,
       8,    11,    72,     9,    12,    16,    75,    11,    12,    75,
       5,    70,    13,    15,    13,    70,     5,    19,    72,    18,
      11,    43,    44,    45,    46,    47,    76,    75,    76,     6,
      25,    26,    27,    28,    29,    60,    73,    74,     9,     5,
      10,     9,     9,    10,     6,    14,     8,    11,    77,     8,
      71,    14,     9,    12,    16,    70,     5,     7,     8,    72,
       8,    17,     9,     9,     7,     7,    25,     8,    11,    78,
      79,    87,    91,    95,    97,     9,     9,    10,    48,    50,
      51,    61,    64,    66,     7,    11,    78,    78,    78,    78,
      78,    78,    78,    77,    17,    17,    17,    17,     9,    12,
       9,     4,    11,    11,    12,    12,    57,    60,    88,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    82,    85,
      86,    92,     8,    79,    87,    91,    95,    96,    97,    19,
       9,     4,     4,    23,    49,    57,    52,    53,    54,    55,
      56,    89,    10,    30,    78,    21,    21,    21,    21,     9,
      51,    65,    96,    96,    96,    96,    92,    96,    73,     9,
       9,    25,    12,    21,    25,    26,    27,    28,    29,    60,
      80,    81,    82,    85,    89,    59,    88,    12,    28,    82,
      83,    84,    85,    83,    84,    81,     8,    17,    17,    10,
      67,    24,    23,    81,    10,    30,    31,    32,    33,    58,
      12,    23,    22,    49,    22,    22,    49,    62,    88,    11,
      12,    73,    49,    25,    22,    81,    81,    81,    81,    10,
      30,    25,    83,    84,    81,     9,    96,    64,     9,     9,
      80,    24,    88,    24,    22,     8,    79,    87,    90,     9,
       8,    11,    79,    87,    91,    95,    97,    98,    98,    10,
      51,    90,    90,    11,    51,    66,    98,    98,    98,    98,
      98,    17,    62,    17,     9,    88,     9,    88,    90,     8,
      11,    93,    98,    63,    61,    11,     9,     9,    61,     8,
      11,    79,    87,    91,    94,     9,    51,    63,    94,    94,
      94,    17,     9,    88,    94
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
#line 27 "syntaxique.y"
    {printf("programme syntaxiquement correct");
                                YYACCEPT;;}
    break;

  case 3:

/* Line 1455 of yacc.c  */
#line 31 "syntaxique.y"
    {printf("programme syntaxiquement correct");
                                YYACCEPT;;}
    break;

  case 4:

/* Line 1455 of yacc.c  */
#line 35 "syntaxique.y"
    {printf("programme syntaxiquement correct");
                                YYACCEPT;;}
    break;



/* Line 1455 of yacc.c  */
#line 1705 "syntaxique.tab.c"
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
#line 217 "syntaxique.y"

main()
{ yyparse(); }
yywrap ()
{}
int  yyerror(char *msg){

   printf(" erreur syntaxique a la ligne %d a la colonne %d de l'entite lexical %s\n",nb_ligne,Col,yytext);
    return 1;
}
