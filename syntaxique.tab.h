
/* A Bison parser, made by GNU Bison 2.4.1.  */

/* Skeleton interface for Bison's Yacc-like parsers in C
   
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

/* Line 1676 of yacc.c  */
#line 14 "syntaxique.y"

  int entier;
  char* string; 
  float reel;



/* Line 1676 of yacc.c  */
#line 126 "syntaxique.tab.h"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif

extern YYSTYPE yylval;


