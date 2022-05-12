%{
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
                  printf("Val exp affectation =  %f \n",sauvValeur);
                  //verificationAffectation(idf,sauvValeur,sauvType);
                  //si est une variable alors on insere X
                  // sinon ERREUR Affectation constante  
             

            }
            | bal_ouv mc_aff deuxpt idf cr_ouv cst_unsigned_int cr_fer vrg X bal_slch_fer{
                   InsertionTab($4,$6,sauvVal);
            }
            ;

X: EXPRESSION_ARITH  { sauvValeur=$1; sprintf(sauvVal,"%f",$1); }
 | EXPRESSION_COMPARAISON
 | EXPRESSION_LOGIQUE
 | simple_string {strcpy(sauvType,"STR"); strcpy(sauvVal,$1);}
 | cst_char {strcpy(sauvType,"CHR"); strcpy(sauvVal,$1);}
 | cst_bool {strcpy(sauvType,"BOL"); strcpy(sauvVal,$1);}
; 
/////////////////////////////////////////////////

EXPRESSION_ARITH: par_ouv EXPRESSION_ARITH par_fer { $$ =($2) ; } 
                 | EXPRESSION_ARITH plus EXPRESSION_ARITH  { $$ = $1 + $3; } 
                 | EXPRESSION_ARITH moins EXPRESSION_ARITH { $$ = $1 - $3 ; }
                 | EXPRESSION_ARITH divis EXPRESSION_ARITH { $$ = $1 / $3 ; }
                 | EXPRESSION_ARITH mult EXPRESSION_ARITH  { $$ = $1 * $3 ;}
                 | TERM { $$ = $1; }
                ; 
TERM:  par_ouv cst_int_pos par_fer { $$ = (float)$2; }
     | par_ouv cst_int_neg par_fer { $$ = (float)$2; }
     | cst_unsigned_int { $$ = (float)$1; }
     | cst_float { $$ = $1; }
     | idf { 
       sauvState=typeEntite($1);
       val=verificationValIdf($1,sauvState);
       printf("SAUV VAL IDF = %f\n",val);
       $$=sauvValeur;
     }
     | idf cr_ouv cst_unsigned_int cr_fer { 
       sauvValeur=getTab($1,$3);
       $$=sauvValeur;
     }
     ; 
     
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

EXPRESSION_LOGIQUE: and par_ouv EXPRESSIONS par_fer 
                  | or par_ouv EXPRESSIONS par_fer 
                  | not par_ouv TYPE_EXP par_fer
                   ; 

EXPRESSIONS:  TYPE_EXP vrg EXPRESSIONS
            | TYPE_EXP vrg TYPE_EXP
             ;
TYPE_EXP : EXPRESSION_LOGIQUE
         | EXPRESSION_COMPARAISON  
         | idf
         | cst_bool 
         | idf cr_ouv cst_unsigned_int cr_fer  
         ;
/////////////////////////////////////////////////
EXPRESSION_COMPARAISON: MC_COMPARAISON par_ouv EXPRESSION_ARITH vrg EXPRESSION_ARITH par_fer;

MC_COMPARAISON: sup
              | supeg
              | infeg
              | inf 
              | ega
              | dif; 
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