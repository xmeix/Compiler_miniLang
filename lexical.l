%{
	#include <stdio.h>
	#include <stdlib.h>
	#include <string.h>
	#include "TS.h"
    #include "syntaxique.tab.h"
    extern nb_ligne;
	extern Col;
	char t[100];
    int i=1; 
	int k;
	extern YYSTYPE yylval;
	/*
	A REVOIR : 
	-PRBLM INPUT coté droit quand on enleve l'espace une erreur se prod " @"
	-MEME PRBLM les deux cotés output "@"
	*/
%}
Signe [!\'-\.\:-\?\[\{-\}]
MESSAGE ({lettre}|{chiffre}|{Signe}|" "|"-")*
CHAINEGAUCHE ["]{MESSAGE}
CHAINEDROITE {MESSAGE}["](" ")*(\/\>)
CHAINE_OUTDR {MESSAGE}["](" ")*(\+)
SimpleString ["]{MESSAGE}["]
lettre [a-zA-Z]
chiffre [0-9]
CST_UNSIGNED_INT [1-9]{chiffre}*|0
CST_INT_POS [+][1-9]{chiffre}*
CST_INT_NEG [-][1-9]{chiffre}*
CST_FLOAT \([-+][1-9][0-9]{0,6}\.[0-9]{1,3}\)|\([-+]0\.[0-9]{1,3}\)|([1-9][0-9]{0,6}\.[0-9]{1,3}|0\.[0-9]{1,3})
CST_BOOL ("TRUE"|"FALSE")
CST_CHAR ['].?[']
IDF {lettre}({lettre}|{chiffre}|_)* 
%%
! { Col= Col+strlen(yytext); return mc_exl; }
docprogram { Col= Col+strlen(yytext); return mc_docprogram; }
"SUB" { Col= Col+strlen(yytext); return mc_sub; }
"VARIABLE" { Col= Col+strlen(yytext); return mc_variable; }
INT { Col= Col+strlen(yytext); 
      yylval.string=strdup("INT");
         return mc_int; }
FLT  {  Col= Col+strlen(yytext); yylval.string=strdup("FLT"); return mc_float;} 	
CHR  {  Col= Col+strlen(yytext); yylval.string=strdup("CHR");  return mc_char;}
STR {  Col= Col+strlen(yytext); yylval.string=strdup("STR"); return mc_string;} 
BOL  {  Col= Col+strlen(yytext); yylval.string=strdup("BOL");  return mc_bool;}
"CONSTANTE" { Col= Col+strlen(yytext); return mc_constante; }
{CST_UNSIGNED_INT} { Col= Col+strlen(yytext); 
   	k=0;
	i=0;
	while(i<strlen(yytext))
	{
		t[k]=yytext[i];
		i++;
		k++;
	}
		if(atoi(t)>32767){
			printf(" erreur sémantique a la ligne %d a la colonne %d de l'entite lexical %s\n",nb_ligne,Col,yytext);
			memset(t, 0, 100);
			return 0;
		}else {
			yylval.entier=atoi(yytext);
			// printf("--------------------------cst plus : %d\n",yylval);
			memset(t, 0, 100);
			return cst_unsigned_int; 
			}
	memset(t, 0, 100);
    return cst_unsigned_int;
	

}
{CST_INT_POS}  {  
	Col= Col+strlen(yytext);
    if(atoi(yytext)>+32767) printf(" erreur semantique a la ligne %d a la colonne %d de l'entite lexical %s\n",nb_ligne,Col,yytext);
	yylval.entier=atoi(yytext);
	return cst_int_pos;
	} 
{CST_INT_NEG} {  Col= Col+strlen(yytext);
          if( atoi(yytext)<-32768) printf(" erreur semantique a la ligne %d a la colonne %d de l'entite lexical %s\n",nb_ligne,Col,yytext);
 			yylval.entier=atoi(yytext); return cst_int_neg;
} 
{CST_FLOAT} { 
	Col= Col+strlen(yytext); 
		
		
	   if(yytext[0]=='(') {
		   
			k=0;
			i=1;
			while(i<strlen(yytext)-1)
			{
				
				t[k]=yytext[i];
				// printf("%c \t",yytext[i]);
				i++;
				k++;
			}

		//    printf("++++++++++++++++++CST FLT PAR TRUE:%s\n",t);
		yylval.reel=atof(t);
		memset(t, 0, 100);
		i=1;
		k=0;
		   
		}
	   else {
		   
			yylval.reel=atof(yytext);
		//    printf("++++++++++++++++++CST FLT NOT:%s\n",yytext);
		   
		   }
	return cst_float; 
	
}
{CST_BOOL} { 
	Col= Col+strlen(yytext); 
	//  if(strcmp(yytext,"TRUE")==0){
	// 	yylval.entier = 1;
	// }else if(strcmp(yytext,"FALSE")==0){
	// 	yylval.entier = 0;
	// }
		yylval.string=strdup(yytext);
	return cst_bool; }
{CST_CHAR} { 
	Col= Col+strlen(yytext); 
	yylval.string= strdup(yytext);
	return cst_char; 
	}
body { Col= Col+strlen(yytext); return mc_body; }
"ARRAY" { Col= Col+strlen(yytext); return mc_array; }
AFF { Col= Col+strlen(yytext); return mc_aff; }
INPUT { Col= Col+strlen(yytext); return mc_input; }
OUTPUT { Col= Col+strlen(yytext); return mc_output; }
IF { Col= Col+strlen(yytext); return mc_if; }
THEN { Col= Col+strlen(yytext); return mc_then; }
ELSE { Col= Col+strlen(yytext); return mc_else; }
AS { Col= Col+strlen(yytext); return mc_as;}
DO { Col= Col+strlen(yytext); return mc_do;}
WHILE { Col= Col+strlen(yytext); return mc_while;}
FOR { Col= Col+strlen(yytext); return mc_for;}
UNTIL { Col= Col+strlen(yytext); return mc_until;}
AND { Col= Col+strlen(yytext); return and;}
OR { Col= Col+strlen(yytext); return or;}
NOT { Col= Col+strlen(yytext); return not;}
SUP { Col= Col+strlen(yytext); return sup;}
INF { Col= Col+strlen(yytext); return inf;}
SUPE { Col= Col+strlen(yytext); return supeg;}
INFE { Col= Col+strlen(yytext); return infeg;}
EGA { Col= Col+strlen(yytext); return ega;}
DIF { Col= Col+strlen(yytext); return dif;}
"+" { Col= Col+strlen(yytext); return plus;}
"-" { Col= Col+strlen(yytext); return moins;}
"*" { Col= Col+strlen(yytext); return mult;}
"/" { Col= Col+strlen(yytext); return divis;}
":"  { Col= Col+strlen(yytext); return deuxpt; }
"=" { Col= Col+strlen(yytext); return egal;} 
"<" { Col= Col+strlen(yytext); return bal_ouv; }
">" { Col= Col+strlen(yytext); return bal_fer; }
"</" { Col= Col+strlen(yytext); return bal_slch_ouv; }
"/>"  { Col= Col+strlen(yytext); return bal_slch_fer; }
"|"  { Col= Col+strlen(yytext); return ou; }
"(" { Col= Col+strlen(yytext); return par_ouv; }
")" { Col= Col+strlen(yytext); return par_fer; }
"[" { Col= Col+strlen(yytext); return cr_ouv; }
"]" { Col= Col+strlen(yytext); return cr_fer; }
;     { Col= Col+strlen(yytext); return pvg; }
{IDF} { 
	
	Col= Col+strlen(yytext); 
	yylval.string = strdup(yytext);
	return idf; 
	
	}
","  { Col= Col+strlen(yytext); return vrg; }
"$" { Col= Col+strlen(yytext); return dollar; }
"%" { Col= Col+strlen(yytext); return mod; }
"#" { Col= Col+strlen(yytext); return hash; } 
"@" { Col= Col+strlen(yytext); return arob; } 
{SimpleString} { 
	Col= Col+strlen(yytext); 
		yylval.string = strdup(yytext);
	return simple_string; 
	}
{CHAINEGAUCHE} { 
	Col= Col+strlen(yytext); 
	yylval.string = strdup(yytext);
	return chaine_gauche; 
	}
"&" { Col= Col+strlen(yytext); return etcom; }
{CHAINEDROITE} { 
	Col= Col+strlen(yytext); 
	yylval.string = strdup(yytext);
	return chaine_droite; 
	}
{CHAINE_OUTDR} { 
	Col= Col+strlen(yytext); 
	yylval.string = strdup(yytext);
	return chaine_outdr; 
	}
[ \t] 
\n {Col= 1; nb_ligne++;}
. { printf("erreur lexical a la ligne %d colonne %d sur l'entite %s \n",nb_ligne,Col,yytext);}
