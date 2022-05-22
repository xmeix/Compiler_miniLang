%{
	#include <stdio.h>
	#include <stdlib.h>
	#include <string.h>
	#include <math.h>
	#include "ts.h"
	#include "quad.h"
	extern FILE* yyin ;
	extern int nb_ligne;
	extern int colonne;
	char SVType[20];
	int numT=0;//hadi ndirouha bach ndjibou assma2 wa7doukhrrin ll les registres des queadruple T1/T2/T3....
	int numQuad=1;

%}

%union
{
	char *str;
	int entier;
	float reel;
	struct eng{char *val;int type;}eng;//hadi val ra7 ykoun fiha le registre win ra7 tkoun la valuer (za3ma 3andna exp exp.valeur="T9" la valeur ta7 nssibouha f le registre "T9"
	struct eng2{int vrai;int faux;}eng2;//hna fiha l address ta3 le type f le cas win ra7 tkoun la condition vrai w win ra7 tkoun false
	struct eltRacFus *liste_next;
}

%start S
%token MC_CODE MC_START MC_END MC_CONST MC_PROD MC_WHILE MC_EXECUTE MC_WHEN MC_DO MC_OTHERWISE GT GE EQ NE LE LT AFF '(' ')' '{' '}' ',' '=' ';' '*' '/' '+' '-'
%token <str>IDF <entier>CONST_INT <reel>CONST_FLOAT
%token <str>MC_INTEGER <str>MC_REAL <str>MC_CHAR <str>MC_STRING 
%type <eng>exp1
%type <eng>exp2
%type <eng>CONST
%type <eng>var
%type <eng>LIST_EXP
%type <eng2>CONDITION
%type <eng>AFFECTATION
%type <str>TYPE
%type <str>OP_COMP
%type <entier>NUM_QUAD
%type <entier>BR_DIRECT
%%
S:MC_CODE IDF LIST_DEC MC_START LIST_INST MC_END{printf("programme correct syntaxiquement \n"); YYACCEPT;}
;
LIST_DEC:DEC LIST_DEC
		|
;
DEC:TYPE LIST_IDF ';' 					{}
	|MC_CONST TYPE IDF '=' CONST ';'	{
											if(verifierExistType($3)==0){
												if(isCompatible(typeToValue($2),$5.type)==1){
													insererTypeConst($3,SVType);
													teteQuad=insererQuad(teteQuad,numQuad,":=",$5.val,"",$3);
													numQuad++;
												}else{
													printf("ERREUR SEMANTIQUE : type incompatible in declaration d un constant\n");
												}
												
											}
											else{
												printf("ERREUR SEMANTIQUE : double decration IDF : %s \n",$3);
											}
										}
;
LIST_IDF:IDF ',' LIST_IDF 	{if(verifierExistType($1)==-1){printf("ERREUR SEMANTIQUE : double decration IDF : %s \n",$1);}else{insererType($1,SVType);} }
		|IDF 				{if(verifierExistType($1)==-1){printf("ERREUR SEMANTIQUE : double decration IDF : %s \n",$1);}else{insererType($1,SVType);} }
;

TYPE:MC_INTEGER			{strcpy(SVType,$1);}
	|MC_CHAR			{strcpy(SVType,$1);}
	|MC_STRING			{strcpy(SVType,$1);}
	|MC_REAL			{strcpy(SVType,$1);}
;
LIST_INST:INST LIST_INST
         |
;
INST:AFFECTATION 	{}
	|BOUCLE			{}
	|CONTROLE		{}
;
AFFECTATION:IDF AFF exp1 ';'								{
																int pos=rechercher($1);
																int pos_type=getTypeAsInt(pos); 
																if(isCompatible(pos_type,$3.type)==0){
																	printf("ERREUR SEMANTIQUE : incompatibilite des types , Ligne : %d , Colonne : %d , Type 1 : %s , Type 2 : %s \n",nb_ligne,colonne,TypeToString(pos_type),TypeToString($3.type));
																	printf("type 1 = %d and type2=%d\n",pos_type,$3.type);
																}
																else if(isConst(pos)==1){
																	printf("ERREUR SEMANTIQUE : DOUBLE AFFECTATION A UN CONSTANT , Ligne : %d , Colonne : %d \n",nb_ligne,colonne);
																}
																else{
																	/*generation de un queadruple*/
																	$$.val = $1;
																	$$.type = $3.type;
																	teteQuad=insererQuad(teteQuad,numQuad,":=",$3.val," ",$1);
																	numQuad++;/*ki n9oullou $3.val ma3netha imma le nom ta3 la variable wella le nom ta3 le tmp(T1/T2/T3....)*/
																}
															}
		   |IDF AFF MC_PROD '(' exp1 ',' LIST_EXP ')' ';'	{
																char t[10];
																int pos=rechercher($1);
																int pos_type=getTypeAsInt(pos);
																if(isCompatible($5.type,$7.type)==1){
																	if(isCompatible($5.type,pos_type)==1){
																		/*generation de un queadruple*/
																		$$.val = $1;
																		$$.type = $5.type;
																		//l 7adja lewla ra7 ndirou un branchement vers l instruction ta3 l affectation id kan $1.val sghir 3la l 1
																		//sinon ra7 y7kem la val ta3 l exp1 w ykhbe6ha f la list....
																		
																		sprintf(t,"%d",numQuad+2);
																		teteQuad=insererQuad(teteQuad,numQuad,branchement("<"),$5.val,"1",t);
																		numQuad++;
																		teteQuad=insererQuad(teteQuad,numQuad,"*",$5.val,$7.val,$7.val);
																		numQuad++;
																		teteQuad=insererQuad(teteQuad,numQuad,":=",$7.val,"",$1);
																		numQuad++;
																	}
																	else{
																		printf("ERREUR SEMANTIQUE : incompatibilite des types , Ligne : %d , Colonne : %d , Type 1 : %s , Type 2 : %s \n",nb_ligne,colonne,TypeToString(pos_type),TypeToString($5.type));
																	}
																}else{
																	printf("ERREUR SEMANTIQUE : incompatibilite des types , Ligne : %d , Colonne : %d , Type 1 : %s , Type 2 : %s \n",nb_ligne,colonne,TypeToString($5.type),TypeToString($7.type));
																}
															}
;
exp1:exp1 '+' exp2	{
						if(isCompatible($1.type,$3.type)==0){
							printf("ERREUR SEMANTIQUE : incompatibilite des types , Ligne : %d , Colonne : %d , Type 1 : %s , Type 2 : %s \n",nb_ligne,colonne,TypeToString($1.type),TypeToString($3.type));
						}
						else{
							/*generation de un queadruple*/
							$$.type=$1.type;
							char t[10]; 
							sprintf(t,"T%d",numT); 
							numT++;
							teteQuad=insererQuad(teteQuad,numQuad,"+",$1.val,$3.val,t);numQuad++;
							$$.val=strdup(t);
						}
					}
	|exp1 '-' exp2	{
						if(isCompatible($1.type,$3.type)==0){
							printf("ERREUR SEMANTIQUE : incompatibilite des types , Ligne : %d , Colonne : %d , Type 1 : %s , Type 2 : %s \n",nb_ligne,colonne,TypeToString($1.type),TypeToString($3.type));
						}
						else{
							/*generation de un queadruple*/
							$$.type=$1.type;
							char t[10]; 
							sprintf(t,"T%d",numT); 
							numT++;
							teteQuad=insererQuad(teteQuad,numQuad,"-",$1.val,$3.val,t);numQuad++;
							$$.val=strdup(t);
						}
					}
	|exp2			{$$.type=$1.type; $$.val=strdup($1.val);}
;

exp2:exp2 '*' var	{
						if(isCompatible($1.type,$3.type)==0){
							printf("ERREUR SEMANTIQUE : incompatibilite des types , Ligne : %d , Colonne : %d , Type 1 : %s , Type 2 : %s \n",nb_ligne,colonne,TypeToString($1.type),TypeToString($3.type));
							printf("type 1 = %d and type2=%d\n",$1.type,$3.type);
							}
							else{
								/*generation de un queadruple*/
								$$.type=$1.type;
								char t[10]; 
								sprintf(t,"T%d",numT); 
								numT++;
								teteQuad=insererQuad(teteQuad,numQuad,"*",$1.val,$3.val,t);numQuad++;
								$$.val=strdup(t);
							}
						}
	|exp2 '/' var	{
						if(strcmp($3.val,"0")==0)
						{
							printf("ERREUR SEMANTIQUE : Devision sur '0' , Ligne : %d , Colonne : %d\n",nb_ligne,colonne);
						}  
						if(isCompatible($1.type,$3.type)==0)
						{
							printf("ERREUR SEMANTIQUE : incompatibilite des types , Ligne : %d , Colonne : %d , Type 1 : %s , Type 2 : %s \n",nb_ligne,colonne,TypeToString($1.type),TypeToString($3.type));
						}
						else
						{
							/*generation de un queadruple*/
							$$.type=$1.type;
							char t[10]; 
							sprintf(t,"T%d",numT); 
							numT++;
							teteQuad=insererQuad(teteQuad,numQuad,"/",$1.val,$3.val,t);numQuad++;
							$$.val=strdup(t);//assem ta3 le registre li fih la valeur
						}
					}
	|var 			{$$.type=$1.type; $$.val=strdup($1.val);}
;
var:'(' var ')' {$$.type=$2.type; $$.val=strdup($2.val);}
	|CONST {$$.type=$1.type; $$.val=strdup($1.val);}
	|IDF { int pos=rechercher($1); int pos_type=getTypeAsInt(pos); if(pos_type==-1){printf("ERREUR SEMANTIQUE : IDF non declare , Ligne : %d , Colonne : %d , Entite : %s \n",nb_ligne,colonne,$1);}else{$$.type=pos_type; $$.val=strdup($1);}}
;
CONST:CONST_INT		{$$.type=0; char t[10]; if($1==0)sprintf(t,"0"); else sprintf(t,"%d",$1);  $$.val=strdup(t);}
	 |CONST_FLOAT 	{$$.type=1; char t[10];if($1==0)sprintf(t,"0"); else sprintf(t,"%9.2f",$1);  $$.val=strdup(t);}
;
LIST_EXP:exp1 ',' LIST_EXP {
								char t[10];
								if(isCompatible($1.type,$3.type)==0)
								{
									printf("ERREUR SEMANTIQUE : incompatibilite des types , Ligne : %d , Colonne : %d , Type 1 : %s , Type 2 : %s \n",nb_ligne,colonne,TypeToString($1.type),TypeToString($3.type));
								}
								else{
									sprintf(t,"%d",numQuad+2);
									teteQuad=insererQuad(teteQuad,numQuad,branchement("<"),$1.val,"1",t);
									numQuad++;
									teteQuad=insererQuad(teteQuad,numQuad,"*",$1.val,$3.val,$3.val);
									numQuad++;
									sprintf(t,"T%d",numT);numT++;
									teteQuad=insererQuad(teteQuad,numQuad,":=",$3.val,"",t);
									numQuad++;
									$$.type=$1.type;
									$$.val=strdup(t);
								}
							}
		|exp1 {	
				char t[10];
				sprintf(t,"T%d",numT);numT++;
				$$.type=$1.type;
				teteQuad=insererQuad(teteQuad,numQuad,":=",$1.val,"",t);numQuad++;
				$$.val=strdup(t);
			}
;
BOUCLE:MC_WHILE NUM_QUAD CONDITION NUM_QUAD MC_EXECUTE'{' LIST_INST '}' BR_DIRECT ';' NUM_QUAD 	{
																									char t[4];
																									
																									//hna ra7 ndir la modification ta3 la condition ki tkoun la condition vrais
																									sprintf(t,"%d",$4);
																									updateREST($3.vrai,t);
																									
																									//hna ra7 ndir la modification ta3 la condition ki tkoun la condition false
																									sprintf(t,"%d",$11+1);
																									updateREST($3.faux,t);
																									
																									//hna ra7 ndirou le branchement m la fin ll debut
																									sprintf(t,"%d",$2);
																									updateREST($9,t);
																								}
;
CONDITION:exp1 OP_COMP exp1{ 
								if(isAcceptedInCompareson($1.type)==0 || isAcceptedInCompareson($3.type)==0){
									if(isAcceptedInCompareson($1.type)==0 ){
										printf("ERREUR SEMANTIQUE : Parametres not comparables , Ligne : %d , Colonne : %d , Type 1 : %s\n",nb_ligne,colonne,TypeToString($1.type));
									}
									if(isAcceptedInCompareson($3.type)==0){
										printf("ERREUR SEMANTIQUE : Parametres not comparables , Ligne : %d , Colonne : %d , Type 2 : %s\n",nb_ligne,colonne,TypeToString($3.type));
									}
								}
								else{
									teteQuad=insererQuad(teteQuad,numQuad,branchement($2),$1.val,$3.val," ");//hna mazal ma dernach l address ta3 le barenchement
									$$.vrai=numQuad; //adress ta3 la fin wa9ila
									
									numQuad++;
									teteQuad=insererQuad(teteQuad,numQuad,"BR"," "," "," "); //brenchement direct (mazal l address)
									$$.faux=numQuad;
									numQuad++;
								}
							}
;
OP_COMP:GT {$$=strdup(">");}
	   |GE {$$=strdup(">=");}
	   |EQ {$$=strdup("=");}
	   |LE {$$=strdup("<=");}
	   |NE {$$=strdup("!=");}
	   |LT {$$=strdup("<=");}
;

CONTROLE:MC_WHEN CONDITION NUM_QUAD MC_DO INST BR_DIRECT NUM_QUAD MC_OTHERWISE INST {
																				char t[10];
																				//modification ta3 la valeur vrais ta3 la condition 
																				sprintf(t,"%d",$3);
																				updateREST($2.vrai,t);
																				//modification ta3 la valeur false ta3 la condition
																				sprintf(t,"%d",$7);
																				updateREST($2.faux,t);
																				
																				//modification ta3 la valeur ta3 le br_direct w n7a6ouha a la fin
																				sprintf(t,"%d",numQuad);
																				updateREST($6,t);
																				
																			}
;


NUM_QUAD :	{
				$$=numQuad;
			}
;
BR_DIRECT:	{
				$$=numQuad;
				teteQuad=insererQuad(teteQuad,numQuad,"BR","","","");numQuad++;
			}
;


%%
int yyerror(char* msg)
{
	printf("%s , ligne : %d, colonne %d\n ",msg,nb_ligne,colonne);
	return 1;
}
int main()
{
	initialiserTS();
	yyin=fopen("tp.txt","r");
	yyparse();
	affichier();
	//mazal ghir la phase ta3 l'affichage ta3 les queadruples
	afficherQuad(teteQuad);
	return 0;
}


