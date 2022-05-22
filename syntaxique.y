%{
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
%type <entier> EXPRESSION_COMPARAISON
%type <entier> MC_COMPARAISON
%type <entier> EXPRESSION_LOGIQUE
%type <entier> EXPRESSIONS
%type <entier> TYPE_EXP
%type <entier> SIGNE_FORMATAGE
%type <string> ID
%type <string> OUTPUT
%type <entier> CONDITION
%type <string> OpLog
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
    | bal_ouv mc_output deuxpt OUTPUT {AfficheInverseOutput(buffer); }BODY
    | INST_IF BODY
    | BOUCLE_DO BODY 
    | BOUCLE_FOR BODY
    | bal_slch_ouv mc_body bal_fer
    ;
    



/////////////////////////////////////////////////
AFFECTATION:  bal_ouv mc_aff deuxpt idf vrg X bal_slch_fer {
  
                  printf("Val exp affectation 1 =  %f \n",sauvValeur);
                  
                  if(isItConst($4)!=0 && verificationType($4,typeExp)==0  ){
                    InsertionIdf($4,typeExp,sauvVal);
                    quadr("AFF",sauvVal,"vide",$4); 
                  }
                  typeExp=0;
                   
            }
            |bal_ouv mc_aff deuxpt idf cr_ouv cst_unsigned_int cr_fer vrg X bal_slch_fer{
                   
                   if(categDeclaredAs($4,"tableau")==0){ 
                     printf("Val exp affectation2 =  %f \n",sauvValeur);
                     
                     if(verificationType($4,typeExp)==0){
                       
                       InsertionTab($4,$6,sauvVal);
                       char str[100];
                       strcat(str,$4);
                        strcat(str,"[");
                        sprintf(sauvVal,"%d",$6);
                        strcat(str,sauvVal);
                        strcat(str,"]");
                       quadr("AFF",sauvVal,"vide",str);
                     }
                     
                    
                   } 
            }
            ;

X: EXPRESSION_ARITH  { sauvValeur=$1; sprintf(sauvVal,"%f",$1);}
 | EXPRESSION_COMPARAISON { 
      typeExp = 3;  
      if($1 == 1) strcpy(sauvVal,"TRUE");
      else if($1 == 0) strcpy(sauvVal,"FALSE");
  }
 | EXPRESSION_LOGIQUE { typeExp = 3; 
      if($1 == 1) strcpy(sauvVal,"TRUE");
      else if($1 == 0) strcpy(sauvVal,"FALSE");  }
 | simple_string {strcpy(sauvType,"STR"); strcpy(sauvVal,$1);  typeExp = 2;}
 | cst_char {strcpy(sauvType,"CHR"); strcpy(sauvVal,$1); typeExp = 2;}
 | cst_bool {strcpy(sauvType,"BOL"); strcpy(sauvVal,$1); typeExp = 3;}
; 
/////////////////////////////////////////////////

EXPRESSION_ARITH: par_ouv EXPRESSION_ARITH par_fer { $$ =($2) ; } 
                 | EXPRESSION_ARITH plus EXPRESSION_ARITH  { $$ = $1 + $3; printf ("+\n");} 
                 | EXPRESSION_ARITH moins EXPRESSION_ARITH { $$ = $1 - $3 ; }
                 | EXPRESSION_ARITH divis EXPRESSION_ARITH { 
                        if( $3 != 0 ) $$ = $1 / $3 ; 
                        else printf("Erreur semantique : division par zero \n");                                  
                                                            }
                 | EXPRESSION_ARITH mult EXPRESSION_ARITH  { $$ = $1 * $3 ;}
                 | TERM { $$ = $1; }
                ; 
TERM:  par_ouv cst_int_neg par_fer { $$ = (float)$2; }
     | cst_unsigned_int { $$ = (float)$1; }
     | cst_float { $$ = $1;  typeExp=1; }
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

EXPRESSION_LOGIQUE:OpLog par_ouv EXPRESSIONS par_fer {
                    $$ = $3; 

                    if($3 == 0)  quadr($1,"FALSE","vide","vide");
                    else quadr($1,"TRUE","vide","vide");
                   
                  } 
                  | not par_ouv  TYPE_EXP par_fer{
                    $$ = !$3; 

                    if($3 != 0)  quadr("NOT","FALSE","vide","vide");
                    else quadr("NOT","TRUE","vide","vide");
                  }
                  ; 

OpLog : and { valLog = 0; $$ = "AND"; } 
      | or { valLog = 1;  $$ = "OR"; } 
      ;
EXPRESSIONS:  TYPE_EXP vrg EXPRESSIONS {
            if(valLog == 0){
                  $$ = $1 && $3;
            }else if(valLog == 1){
                  $$ = $1 || $3 ;
           }
            }
            | TYPE_EXP vrg TYPE_EXP {
            if(valLog == 0){
                  $$ = $1 && $3;
            }else if(valLog == 1){
                  $$ = $1 || $3 ;
           }
            };


TYPE_EXP : EXPRESSION_LOGIQUE {
          $$ = $1; 
         } 
         | EXPRESSION_COMPARAISON { 
          $$ = $1;
         }
         | cst_bool {
            if(strcmp($1,"FALSE")==0) $$ = 0; //false
            else if(strcmp($1,"TRUE")==0) $$ = 1; //true
         } 
         | idf { 
            
            if(ValueIdfBol($1)==1) $$ = 0; //false
            else if(ValueIdfBol($1)==0) $$ = 1; //true    
         }
         
         | idf cr_ouv cst_unsigned_int cr_fer{
           
          
            if(ValueTabBol($1,$3)==1) $$ = 0; //false
            else if(ValueTabBol($1,$3)==0) $$ = 1; //true 
            
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
    $$=1; //TRUE
  }else if(resComp ==1 ){
    $$=0; //FALSE
  }

  char str[100];
  if(resComp == 0 ) strcpy(str,"TRUE");
  else strcpy(str,"FALSE");

  if($1 == 0) quadr("SUP",str,"vide","vide");
  else if($1 == 1) quadr("SUPEG",str,"vide","vide");
  else if($1 == 2) quadr("INFEG",str,"vide","vide");
  else if($1 == 3) quadr("INF",str,"vide","vide");
  else if($1 == 4) quadr("EGA",str,"vide","vide");
  else if($1 == 5) quadr("DIF",str,"vide","vide");



};

MC_COMPARAISON: sup { $$=0; }
              | supeg { $$=1 ;}
              | infeg { $$=2 ;}
              | inf { $$=3 ;}
              | ega { $$=4 ;}
              | dif { $$=5 }; 
/////////////////////////////////////////////////

/////////////////////////////////////////////////

INPUT: bal_ouv mc_input deuxpt idf chaine_gauche SIGNE_FORMATAGE chaine_droite{
  fonctionInput($4,$6);
  quadr("INPUT","vide","vide",$4);
}
;

/////////////////////////////////////////////////
//<OUTPUT: "hdsf # " + "idf=hey" + " kjsdfksd "+ " fsnf # "+"nom_constante_5=hello" + "jkfskjfn"/>
OUTPUT: chaine_gauche SIGNE_FORMATAGE chaine_outdr ID plus OUTPUT
      { 
        VerificationTypeINOUT($4,$2); 
        char str[100]; 

        strcpy(str,$3);
        str[strlen(str)-1]='\0';
        str[strlen(str)-2]='\0';
        InverserChaine(str);
        strcat(buffer,str);
        str[0]='\0';
        
        if(tab == 0 ){ 
          
           
          getValIdf($4,ch,-1);
          printf("ch0 = %s\n",ch);
        }else if (tab == 1){ 
          getValIdf($4,ch,pos);
          printf("ch0 = %s\n",ch);
          pos = 0;
        } 
        
        InverserChaine(ch);
        printf("ch = %s\n",ch);      
        strcat(buffer,ch);
        ch[0]='\0';

        strcpy(str,$1);
        strncpy(str,str + 1,strlen(str));
        InverserChaine(str);
        strcat(buffer,str);
        str[0]='\0';

        
      }
      | simple_string plus OUTPUT{
        deb = 2; 
        char str[100]; 
        strcpy(str,$1);
        str[strlen(str)-1]='\0';
        strncpy(str,str + 1,strlen(str)); 
        InverserChaine(str);
        strcat(buffer,str);
        strcpy(str,"");
      }
      | chaine_gauche SIGNE_FORMATAGE chaine_outdr ID bal_slch_fer{
        deb = 3;
         VerificationTypeINOUT($4,$2); 
        char str[100]; 

        strcpy(str,$3);
        str[strlen(str)-1]='\0';
        str[strlen(str)-2]='\0';
        InverserChaine(str);
        strcat(buffer,str);
        strcpy(str,"");
        
        if(tab == 0 ){
          getValIdf($4,ch,-1);
        }else if (tab == 1){ 
          getValIdf($4,ch,pos);
          pos = 0;
        } 
        InverserChaine(ch);
        strcat(buffer,ch);
        strcpy(ch,"");

        strcpy(str,$1);
        strncpy(str,str + 1,strlen(str));
        InverserChaine(str);
        strcat(buffer,str);
        strcpy(str,"");
      }
      | simple_string bal_slch_fer{
        deb = 4; 
        char str[100]; 
        strcpy(str,$1);
        str[strlen(str)-1]='\0';
        strncpy(str,str + 1,strlen(str)); 
        InverserChaine(str);
        strcat(buffer,str);
        
        strcpy(str,"");

      }
      ;

ID: idf { $$ = $1; tab = 0; }
  | idf cr_ouv cst_unsigned_int cr_fer { $$ = $1; tab = 1; pos = $3; }
  ;
/////////////////////////////////////////////////
SIGNE_FORMATAGE: dollar { $$ = 1;}
               | mod { $$ = 2;}
               | hash { $$ = 3;}
               | arob { $$ = 4;}
               | etcom { $$ = 5;}
               ; 
////////////////////////////////////////////////////
INSTRUCTION: AFFECTATION INSTRUCTION
            | INPUT INSTRUCTION
            | bal_ouv mc_output deuxpt OUTPUT{  
              InverserChaine(buffer);  
              printf("%s\n",buffer);
              quadr("OUTPUT",buffer,"vide","vide");
              strncpy(buffer, "", sizeof(buffer));  
              } INSTRUCTION
            | 
            ;
/*bal
INST_IF: bal_ouv mc_if deuxpt CONDITION/*R1 bal_fer bal_ouv mc_then bal_fer INSTRUCTION R2 bal_slch_ouv mc_then bal_fer  INST_ELSE/*R3 bal_slch_ouv mc_if bal_fer 
        | bal_ouv mc_if deuxpt CONDITION/*R4 bal_fer bal_ouv mc_then bal_fer INSTRUCTION/*R5 bal_slch_ouv mc_then bal_fer bal_slch_ouv mc_if bal_fer
        ;
*/



IF_A: bal_ouv mc_if deuxpt CONDITION{

               deb_else = qc;
               quadr("BZ","","tmp_cond","vide");
                

    }
;

IF_B: IF_A bal_fer bal_ouv mc_then bal_fer INSTRUCTION{
      Fin_if=qc;
      quadr("BR","","vide","vide"); 
      sprintf(tmp,"%d",qc);
      ajour_quad(deb_else,1,tmp); 
}
; 

IF_C: IF_B bal_slch_ouv mc_then bal_fer  INST_ELSE {

    }//R3
    | IF_B bal_slch_ouv mc_then bal_fer;

INST_IF: IF_C bal_slch_ouv mc_if bal_fer { 

      sprintf(tmp,"%d",qc);
      ajour_quad(Fin_if,1,tmp);
      printf("pgm correct\n"); 

}
;

CONDITION: EXPRESSION_LOGIQUE { 
              $$ = $1; 
              
          }
         | EXPRESSION_COMPARAISON { 
              $$ = $1;
         }
        ;

////////////////////////////////////////////////////////////////////////////////////////////
INST_ELSE: bal_ouv mc_else bal_fer INSTRUCTION_ELSE
         ;
INSTRUCTION_ELSE: AFFECTATION INSTRUCTION_ELSE
                | INPUT INSTRUCTION_ELSE
                | bal_ouv mc_output deuxpt OUTPUT{  
                    InverserChaine(buffer);  
                    printf("%s\n",buffer);
                    quadr("OUTPUT",buffer,"vide","vide");
                    strncpy(buffer, "", sizeof(buffer));  
              }  INSTRUCTION_ELSE
                | INST_IF INSTRUCTION_ELSE
                | bal_slch_ouv mc_else bal_fer 
             ;


////////////////////////////////////////////////////////////////////////////////////////////
/* BOUCLE_DO: bal_ouv mc_do bal_fer{R1} INSTRUCTION_BOUCLE_DO CONDITION {R2} bal_slch_fer bal_slch_ouv mc_do bal_fer;  */
// Fin_Do=0 , DebInstDo=0 , DebCondDo = 0

BOUCLE_DO_A: bal_ouv mc_do bal_fer{ //R1
    
    DebCondDo=qc;
    quadr("BR","","vide","vide");

    DebInstDo=qc;

};

BOUCLE_DO_B: BOUCLE_DO_A INSTRUCTION_BOUCLE_DO {
  sprintf(tmp,"%d",qc);
  ajour_quad(DebCondDo,1,tmp);
}


BOUCLE_DO_C: BOUCLE_DO_B CONDITION { //R3
    sprintf(tmp,"%d",DebInstDo);
     quadr("BNZ",tmp,"tempInst","vide");
};


BOUCLE_DO: BOUCLE_DO_C bal_slch_fer bal_slch_ouv mc_do bal_fer {
  
      printf("pgm correct\n"); 
}; 



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