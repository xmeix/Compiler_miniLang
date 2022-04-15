%{
    #include "syntaxique.tab.h"
    extern nb_ligne;
	extern Col;
	char t[100];
    int i=1;
	int k;
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
CST_SIGNED_INT \(("+"|"-")([1-9]{chiffre}*)\)
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
         return mc_int; }
FLT  {  Col= Col+strlen(yytext);  return mc_float;} 	
CHR  {  Col= Col+strlen(yytext);  return mc_char;}
STR {  Col= Col+strlen(yytext);  return mc_string;} 
BOL  {  Col= Col+strlen(yytext);  return mc_bool;}
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
			
		}else {
				// printf("cst plus : %d\n",atoi(t));
				return cst_unsigned_int; 
			}
    return 0;
	memset(t, 0, 100);

}
{CST_SIGNED_INT} { 
	
	Col= Col+strlen(yytext); 
	k=0;
	while(i<strlen(yytext)-1)
	{
		// printf("%c \t",yytext[i]);
		t[k]=yytext[i];
		i++;
		k++;
	}
	// printf(" %s \n",t);
	
	// k=0;
	// while(k<strlen(t)){
	// 	printf(" %c \n",t[k]);
	// 	k++;
	// }
	
	if(t[0]=='+'){

		if(atoi(t)>32767){
			printf(" erreur sémantique a la ligne %d a la colonne %d de l'entite lexical %s\n",nb_ligne,Col,yytext);
		}else {
			// printf("cst_plus : %d\n",atoi(t));
			return cst_signed_int;
		}

	}else if (t[0]=='-'){
		
		if(atoi(t)<-32768){
			printf(" erreur sémantique a la ligne %d a la colonne %d de l'entite lexical %s\n",nb_ligne,Col,yytext);
		}else {
			// printf("cst_moins : %d\n",atoi(t));
			return cst_signed_int;
		}
	}
	memset(t, 0, 100);
	i=1;
 }
{CST_FLOAT} { Col= Col+strlen(yytext); return cst_float; }
{CST_BOOL} { Col= Col+strlen(yytext); return cst_bool; }
{CST_CHAR} { Col= Col+strlen(yytext); return cst_char; }
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
{IDF} { Col= Col+strlen(yytext); return idf; }
","  { Col= Col+strlen(yytext); return vrg; }
["] { Col= Col+strlen(yytext); return quote; }
"$" { Col= Col+strlen(yytext); return dollar; }
"%" { Col= Col+strlen(yytext); return mod; }
"#" { Col= Col+strlen(yytext); return hash; } 
"@" { Col= Col+strlen(yytext); return arob; } 
{SimpleString} { Col= Col+strlen(yytext); return simple_string; }
{CHAINEGAUCHE} { Col= Col+strlen(yytext); return chaine_gauche; } 
"&" { Col= Col+strlen(yytext); return etcom; }
{CHAINEDROITE} { Col= Col+strlen(yytext); return chaine_droite; }
{CHAINE_OUTDR} { Col= Col+strlen(yytext); return chaine_outdr; }
[ \t] 
\n {Col= 1; nb_ligne++;}
. { printf("erreur lexical a la ligne %d colonne %d sur l'entite %s \n",nb_ligne,Col,yytext);}
	