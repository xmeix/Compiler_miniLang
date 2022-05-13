%{
    #include "stdlib.h"
    #include "stdio.h"
	  #include "string.h"
	int nb_ligne=1;
	int Col = 1;
	extern yytext;
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
%} 
%union{
  int entier;
  char* string; 
  float reel;
}

%token mc_exl mc_docprogram mc_sub mc_variable mc_body bal_ouv bal_fer bal_slch_fer
%token bal_slch_ouv <string>idf mc_as pvg ou mc_array deuxpt mc_constante egal par_ouv par_fer cr_ouv cr_fer
%token <entier>cst_unsigned_int <entier>cst_int_pos <entier>cst_int_neg <reel>cst_float <string>cst_bool <string>cst_char 
%token plus moins mult divis and or not 
%token sup inf supeg infeg ega dif
%token <string>mc_int <string>mc_float <string>mc_char <string>mc_string <string>mc_bool mc_aff vrg mc_input mc_output dollar mod hash arob etcom
%token <string>chaine_gauche <string>chaine_droite <string>chaine_outdr <string>simple_string
%token mc_if mc_then mc_else mc_do mc_while mc_for mc_until

%type <reel> TERM 
%type <reel> EXPRESSION_ARITH 
%type <string>EXPRESSION_COMPARAISON
%type <entier> MC_COMPARAISON
%type <string>EXPRESSION_LOGIQUE 
%left or
%left and 
%right not
%nonassoc sup inf supeg infeg ega dif
%left plus moins
%left mult divis
%start S 
%%
S: bal_ouv mc_exl mc_docprogram idf bal_fer  DEC_TOTAL bal_ouv mc_body bal_fer BODY bal_slch_ouv mc_docprogram bal_fer
                  {printf("programme syntaxiquement correct");
                                YYACCEPT;}
;
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


DEC_TOTAL: bal_ouv mc_sub mc_variable bal_fer DECLARATION DECLARATION_CONST 
         | DECLARATION_CONST bal_ouv mc_sub mc_variable bal_fer DECLARATION
         | bal_ouv mc_sub mc_variable bal_fer DECLARATION
         | DECLARATION_CONST
         ;



DECLARATION:  bal_ouv DECLARATION_SIMPLE DECLARATION
            | bal_ouv mc_array mc_as TYPE bal_fer DECLARATION_TAB DECLARATION 
            | bal_slch_ouv mc_sub mc_variable bal_fer { sauvCateg = 0;}
            ; 

DECLARATION_CONST: bal_ouv mc_sub mc_constante bal_fer { sauvCateg = 0; } LISTE_DEC_CONST ;
                 
  
LISTE_DEC_CONST: bal_ouv DECLARATION_SIMPLE LISTE_DEC_CONST
               | bal_ouv DEC_CONST_EGAL LISTE_DEC_CONST 
               | bal_slch_ouv mc_sub mc_constante bal_fer  { sauvCateg = 1;} 
               ; 
DEC_CONST_EGAL: idf egal SWITCH_CST_TYPES bal_slch_fer pvg { verificationInsertion($1,sauvCateg,sauvType,sauvVal,0,sauvState);}
;

SWITCH_CST_TYPES: SWITCH_INT
                | cst_float {sprintf(sauvVal,"%f",$1); sauvState=1; strcpy(sauvType,"FLT");}
                | cst_bool {strcpy(sauvVal,$1); sauvState=2; strcpy(sauvType,"BOL");}
                | cst_char {strcpy(sauvVal,$1);   sauvState=2; strcpy(sauvType,"CHR");}
                | simple_string {strcpy(sauvVal,$1); sauvState=2; strcpy(sauvType,"STR");}
                ;
SWITCH_INT: par_ouv cst_int_pos par_fer {sprintf(sauvVal,"%d",$2); sauvState=0; strcpy(sauvType,"INT");}
          | par_ouv cst_int_neg par_fer {sprintf(sauvVal,"%d",$2); sauvState=0; strcpy(sauvType,"INT");}
          | cst_unsigned_int {sprintf(sauvVal,"%d",$1); sauvState=0; strcpy(sauvType,"INT");}
;
//////////////////////////////////////////////////////////////
DECLARATION_SIMPLE: idf ou DECLARATION_SIMPLE{
                    verificationInsertion($1,sauvCateg,sauvType,"",0,3);
                  }
                  | idf mc_as TYPE bal_slch_fer pvg {
                    verificationInsertion($1,sauvCateg,sauvType,"",0,3);
                  }; 



TYPE: mc_int   {strcpy(sauvType,"INT");}  
    | mc_float {strcpy(sauvType,"FLT");}  
    | mc_char  {strcpy(sauvType,"CHR");}  
    | mc_string{strcpy(sauvType,"STR");}  
    | mc_bool  {strcpy(sauvType,"BOL");}  
    ;

DECLARATION_TAB:  bal_ouv idf deuxpt cst_unsigned_int bal_slch_fer{ insertion($2,"tableau",sauvType,"",$4,3); } DECLARATION_TAB
                | bal_slch_ouv mc_array bal_fer
                ;
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
BODY: AFFECTATION BODY
    | INPUT BODY
    | bal_ouv mc_output deuxpt OUTPUT BODY
    | INST_IF BODY
    | BOUCLE_DO BODY 
    | BOUCLE_FOR BODY
    | bal_slch_ouv mc_body bal_fer
    ;
    



/////////////////////////////////////////////////
AFFECTATION:  bal_ouv mc_aff deuxpt idf vrg X bal_slch_fer {
                  printf("Val exp affectation 1=  %d \n",sauvValeur);
                  
                  if(verificationType($4,typeExp)==0 && isItConst($4) !=0 ){
                    InsertionIdf($4,typeExp,sauvVal);
                  }
                  typeExp=0;
            }
            | bal_ouv mc_aff deuxpt idf cr_ouv cst_unsigned_int cr_fer vrg X bal_slch_fer{
                   
                   if(categDeclaredAs($4,"tableau")==0){ 
                     printf("Val exp affectation2 =  %f \n",sauvValeur);
                     if(verificationType($4,typeExp)==0){
                       InsertionTab($4,$6,sauvVal);
                     }
                     
                    
                   }
            }
            ;

X: EXPRESSION_ARITH  { sauvValeur=$1; sprintf(sauvVal,"%f",$1); }
 | EXPRESSION_COMPARAISON { typeExp = 3;}
 | EXPRESSION_LOGIQUE { typeExp = 3;  }
 | simple_string {strcpy(sauvType,"STR"); strcpy(sauvVal,$1);  typeExp = 2;}
 | cst_char {strcpy(sauvType,"CHR"); strcpy(sauvVal,$1); typeExp = 2;}
 | cst_bool {strcpy(sauvType,"BOL"); strcpy(sauvVal,$1); typeExp = 3;}
; 
/////////////////////////////////////////////////

EXPRESSION_ARITH: par_ouv EXPRESSION_ARITH par_fer { $$ =($2) ; } 
                 | EXPRESSION_ARITH plus EXPRESSION_ARITH  { $$ = $1 + $3; printf ("+\n");} 
                 | EXPRESSION_ARITH moins EXPRESSION_ARITH { $$ = $1 - $3 ; }
                 | EXPRESSION_ARITH divis EXPRESSION_ARITH { $$ = $1 / $3 ; }
                 | EXPRESSION_ARITH mult EXPRESSION_ARITH  { $$ = $1 * $3 ;}
                 | TERM { $$ = $1; }
                ; 
TERM:  par_ouv cst_int_neg par_fer { $$ = (float)$2;}
     | cst_unsigned_int { $$ = (float)$1; }
     | cst_float { $$ = $1; typeExp=1; }
     | idf { 
       printf("idf = %s\n",$1);
       sauvState=typeEntite($1);
       if(sauvState==1) typeExp=1;
       getValueIdf($1,res); 
       sauvValeur=atof(res);
       $$=atof(res);
     }
     | idf cr_ouv cst_unsigned_int cr_fer { 
       
       sauvState=typeEntite($1);
       if(sauvState==1) typeExp=1;
       sauvValeur=getValueTab($1,$3);
       $$=sauvValeur;
     }
     ; 
     
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

EXPRESSION_LOGIQUE: and par_ouv { valLog = 0; valAnd=0; valOr=0;} EXPRESSIONS par_fer {
                    if(valAnd == 0) {strcpy(sauvVal,"TRUE"); strcpy($$,"TRUE");}
                    else if(valAnd == 1) {strcpy(sauvVal,"FALSE"); strcpy($$,"FALSE");
                    }

                    printf("Resultat: valAnd = %d \n",valAnd);
                  }
                  | or par_ouv { valLog = 1; valAnd=0; valOr=0;} EXPRESSIONS par_fer  {
                    if(valOr == 0) {strcpy(sauvVal,"FALSE"); strcpy($$,"FALSE");}
                    else if(valOr == 1) {strcpy(sauvVal,"TRUE"); strcpy($$,"TRUE");}
                  }
                  | not par_ouv  { valLog = 2; valAnd=0; valOr=0;} TYPE_EXP par_fer{
                    if(strcmp(sauvVal,"TRUE")==0) strcpy($$,"TRUE");
                    else if (strcmp(sauvVal,"FALSE")==0) strcpy($$,"FALSE");
                  }
                  ; 

EXPRESSIONS:  TYPE_EXP vrg EXPRESSIONS
            | TYPE_EXP vrg TYPE_EXP ;


TYPE_EXP : EXPRESSION_LOGIQUE { 
          
          if(valLog == 0){
            if(strcmp($1,"FALSE")==0) valAnd = 1; //false
          }else if(valLog == 1){
            if(strcmp($1,"TRUE")==0) valOr = 1; //true
          }else if(valLog == 2){
            if(strcmp($1,"TRUE")==0) strcpy(sauvVal,"FALSE");
            else if (strcmp($1,"FALSE")==0) strcpy(sauvVal,"TRUE");
          }
            
         } 
         | EXPRESSION_COMPARAISON { 
           
           if(valLog == 0){
            if(strcmp($1,"FALSE")==0) valAnd = 1; //false
          }else if(valLog == 1){
            if(strcmp($1,"TRUE")==0) valOr = 1; //true
          }else if(valLog == 2){
            if(strcmp($1,"TRUE")==0) strcpy(sauvVal,"FALSE");
            else if (strcmp($1,"FALSE")==0) strcpy(sauvVal,"TRUE");
          }
         } 
         | idf { 
            if(valLog == 0){
            if(ValueIdfBol($1)==1) valAnd = 1; //false
             }else if(valLog == 1){
            if(ValueIdfBol($1)==0) valOr = 1; //true
          } else if(valLog == 2){
            if(ValueIdfBol($1)==0) strcpy(sauvVal,"FALSE");
            else if (ValueIdfBol($1)==1) strcpy(sauvVal,"TRUE");
          }      
         }
         | cst_bool {
           
           if(valLog == 0){
            if(strcmp($1,"FALSE")==0) valAnd = 1; //false
          }else if(valLog == 1){
            if(strcmp($1,"TRUE")==0) valOr = 1; //true
          }else if(valLog == 2){
            if(strcmp($1,"FALSE")==0) strcpy(sauvVal,"TRUE");
            else if (strcmp($1,"TRUE")==0) strcpy(sauvVal,"FALSE");
          }
          
         }
         | idf cr_ouv cst_unsigned_int cr_fer{
           
          if(valLog == 0){
            if(ValueTabBol($1,$3)==1) valAnd = 1; //false
          }else if(valLog == 1){
            if(ValueTabBol($1,$3)==0) valOr = 1; //true
          }else if(valLog == 2){
            if(ValueTabBol($1,$3)==0) strcpy(sauvVal,"FALSE");
            else if (ValueTabBol($1,$3)==1) strcpy(sauvVal,"TRUE");
          }   
            
         }  
         ;
/////////////////////////////////////////////////
EXPRESSION_COMPARAISON: MC_COMPARAISON par_ouv EXPRESSION_ARITH vrg EXPRESSION_ARITH par_fer{
   
  sprintf(val1,"%f",(float)$3);
  sprintf(val2,"%f",(float)$5);
  sprintf(valSigne,"%d",$1);
  resComp=resultatComparaison(val1,val2,valSigne);
  //printf("Resultat: %d \n",resComp);
  if(resComp == 0){
    strcpy(sauvVal,"TRUE");
    strcpy($$,"TRUE");
  }else if(resComp ==1 ){
    strcpy(sauvVal,"FALSE");
    strcpy($$,"FALSE");


  }
};

MC_COMPARAISON: sup { $$=0; }
              | supeg { $$=1 ;}
              | infeg { $$=2 ;}
              | inf { $$=3 ;}
              | ega { $$=4 ;}
              | dif { $$=5 }; 
/////////////////////////////////////////////////

/////////////////////////////////////////////////

INPUT: bal_ouv mc_input deuxpt idf chaine_gauche SIGNE_FORMATAGE chaine_droite
;

/////////////////////////////////////////////////
OUTPUT: chaine_gauche SIGNE_FORMATAGE chaine_outdr idf plus OUTPUT
      | simple_string plus OUTPUT
      | chaine_gauche SIGNE_FORMATAGE chaine_outdr idf bal_slch_fer
      | simple_string bal_slch_fer
      ;

/////////////////////////////////////////////////
SIGNE_FORMATAGE: dollar
               | mod
               | hash
               | arob
               | etcom
               ; 
////////////////////////////////////////////////////
INSTRUCTION: AFFECTATION INSTRUCTION
            | INPUT INSTRUCTION
            | bal_ouv mc_output deuxpt OUTPUT INSTRUCTION
            | 
            ;

INST_IF: bal_ouv mc_if deuxpt CONDITION bal_fer bal_ouv mc_then bal_fer INSTRUCTION bal_slch_ouv mc_then bal_fer  INST_ELSE bal_slch_ouv mc_if bal_fer
        | bal_ouv mc_if deuxpt CONDITION bal_fer bal_ouv mc_then bal_fer INSTRUCTION bal_slch_ouv mc_then bal_fer bal_slch_ouv mc_if bal_fer
        ;

CONDITION: EXPRESSION_LOGIQUE
         | EXPRESSION_COMPARAISON 
        ;

////////////////////////////////////////////////////////////////////////////////////////////
INST_ELSE: bal_ouv mc_else bal_fer INSTRUCTION_ELSE
         ;
INSTRUCTION_ELSE: AFFECTATION INSTRUCTION_ELSE
                | INPUT INSTRUCTION_ELSE
                | bal_ouv mc_output deuxpt OUTPUT INSTRUCTION_ELSE
                | INST_IF INSTRUCTION_ELSE
                | bal_slch_ouv mc_else bal_fer 
             ;


////////////////////////////////////////////////////////////////////////////////////////////
BOUCLE_DO: bal_ouv mc_do bal_fer INSTRUCTION_BOUCLE_DO CONDITION bal_slch_fer bal_slch_ouv mc_do bal_fer; 

INSTRUCTION_BOUCLE_DO: AFFECTATION INSTRUCTION_BOUCLE_DO
                | INPUT INSTRUCTION_BOUCLE_DO
                | bal_ouv mc_output deuxpt OUTPUT INSTRUCTION_BOUCLE_DO
                | INST_IF INSTRUCTION_BOUCLE_DO
                | BOUCLE_DO INSTRUCTION_BOUCLE_DO
                | BOUCLE_FOR INSTRUCTION_BOUCLE_DO
                | bal_ouv mc_while deuxpt
                ;

////////////////////////////////////////////////////////////////////////////////////////////

BOUCLE_FOR: bal_ouv mc_for idf egal SWITCH_INT mc_until SWITCH_INT bal_fer INSTRUCTION_BOUCLE_FOR
            |bal_ouv mc_for idf egal SWITCH_INT mc_until idf bal_fer INSTRUCTION_BOUCLE_FOR
          ;

INSTRUCTION_BOUCLE_FOR: AFFECTATION INSTRUCTION_BOUCLE_FOR
                | INPUT INSTRUCTION_BOUCLE_FOR
                | bal_ouv mc_output deuxpt OUTPUT INSTRUCTION_BOUCLE_FOR
                | INST_IF INSTRUCTION_BOUCLE_FOR
                | BOUCLE_DO INSTRUCTION_BOUCLE_FOR
                | BOUCLE_FOR INSTRUCTION_BOUCLE_FOR
                | bal_slch_ouv mc_for bal_fer
                ;
/////////////////////////////////////////////////
%%
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