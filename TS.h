#include <stdio.h>
#include <stdlib.h>
#include <string.h>  


#define taille_table_hachage 5

int indice_table=0;
char idef[100];

//TABLE CONSTANTES & VAR
typedef struct element{
    
    char name[120];
    char categorie[120];
    char type[120];
    char valStr[120];
    int val;
    float valF;
    int taille;
    char **arrayTab;
    int state;
    struct element *suivant;
}element;



element **table_hachage = NULL; //table d'éléments


//Va retourner la valeur de la clé(chaine(entite))
int fonction_hachage(char *entite)
{
    int i = 0, cle = 0;

    for (i = 0 ; entite[i] != '\0' ; i++)
    {
        cle += entite[i];
    }
    cle %= 5;

    return cle;
}




void create_hash_table(){
    
  printf("creating hash table ...\n");
  table_hachage = (element **) malloc (taille_table_hachage * sizeof(element *));
  int i=0;
  for(i=0;i<taille_table_hachage;++i){
  //  table_hachage[i] = NULL;
    table_hachage[i]=NULL;

  }
}

///retourne 1 si existe 
//          0 sinon 
 int rechercher(element **table_hachage,char *entite){

  element *p;
  int cle;

  cle = fonction_hachage(entite);
  //p=premier elt de la liste de l elt cle
  for(p=table_hachage[cle];p!=NULL;p=p->suivant)
    if(strcmp(p->name,entite)==0)
      return 1;// si entite existe
  return 0;//sinon
}


///////////////////////////////////////////////INSERTION PHASE DECLARATION////////////////////////////////////////////////////
// element *InsertionEnTete(element *L,char entite[],char categorie[],char type[],char valeur[],int taille){
//   element *nouveau; //UN ELEMENT 
//   nouveau = (element *) malloc (sizeof(element));
//   strcpy(nouveau->name,entite);
//   strcpy(nouveau->categorie,categorie);
//   // if(strcmp(valeur,"")==0) strcpy(nouveau->valeur,valeur);
//   if(taille!=0) nouveau->taille=taille;
//   else nouveau->taille=0;
//   nouveau->used=0;
//   strcpy(nouveau->type,type);
//   nouveau->suivant = L;

//   return nouveau;
// }

void insertion(char entite[],char categorie[],char type[],char valeur[],int taille,int state){

  //si entite pas trouvé dans la table de hachage
  if(rechercher(table_hachage,entite)==0){
      
      int cle = fonction_hachage(entite);
      int i;
      element *P = table_hachage[cle];
      element *nouveau = (element *) malloc (sizeof(element)); 
      strcpy(nouveau->name,entite);
      strcpy(nouveau->categorie,categorie);
      nouveau->state=state;
      if(strcmp(valeur,"")!=0) {

           if(state==0) nouveau->val=atoi(valeur);
          else if(state==1) nouveau->valF=atof(valeur);
          else if(state==2) strcpy(nouveau->valStr,valeur);
          
      }else {
        strcpy(nouveau->valStr,valeur);
        }
      
      ///////////////////////////////////////////////////////////////////////
      ///////////////////Verification Taille tableau ////////////////////////
      if(taille!=0) nouveau->taille=taille;
      else if(strcmp(categorie,"tableau")==0) {
                printf("Erreur sémantique: taille tableau invalide \n");
                exit(0);
            }
      else nouveau->taille=0;
     /////////////////////////////////////////////////////////////////////////

      if(strcmp(categorie,"tableau")==0) {
       nouveau->arrayTab = (char**) malloc((taille)*sizeof(char*));
       
      }

      strcpy(nouveau->type,type);
      nouveau -> suivant = P;
      table_hachage[cle] = nouveau;
       // la liste chainee de la case [cle]
      

  }else{
    printf("Erreur sémantique: Double déclaration de l'entite lexicale %s \n",entite);
    exit(0);
  }
  
}
void InsertionTab(char idf[],int position,char *valeur){

  element *p;
  int cle;
  char **temporary;
  char val[100];
  cle = fonction_hachage(idf);
  for(p=table_hachage[cle];p!=NULL;p=p->suivant)
    if(strcmp(p->name,idf)==0 )
    {
      temporary= (char**) malloc((p->taille)*sizeof(char*));
      memcpy(temporary, p->arrayTab,p->taille);
      
      if(temporary[position-1]=='\0' && position != 0 ){

        printf("%d\n",position);
        printf("ERREUR TABLEAU CONTIENTS DES VALEURS D'UNE POSITION PRECEDANTE EGALE A NULL \n");
      
    
      }else { 
        printf("HERE\n");
          temporary[position]=valeur; 
          memcpy(p->arrayTab, temporary,p->taille);
          
          //POUR VERIFIER
          memset(temporary, 0, p->taille);
          memcpy(temporary, p->arrayTab,p->taille);
          printf("%s[%d] = %s \n",idf,position,temporary[position]);
          ///COPIE DANS TEMP POUR AFFICHER 
       }

    }

}

int categDeclaredAs(char entite[],char categ[]){

    element *p;
    int cle; 
    cle = fonction_hachage(entite);
    for(p=table_hachage[cle];p!=NULL;p=p->suivant){
      if(strcmp(p->name,entite)==0)
      {
      //   printf("p->name=%s\n",p->name);
      //   printf("p->categorie=%s\n",p->categorie);

        if(strcmp(p->categorie,categ)==0){
           return 0;//true // declared as table 
        }
      }
    }

  printf("Erreur semantique : Entite pas declaré comme un %s \n",categ);
  exit(0);

}


float getValueTab(char idf[],int position,char * res){
    element *p;
    int cle;
    char **temporary;
    float val=0;
    cle = fonction_hachage(idf);
    for(p=table_hachage[cle];p!=NULL;p=p->suivant)
      if(strcmp(p->name,idf)==0 && ((strcmp(p->type,"INT")==0 || strcmp(p->type,"FLT")==0)))
      {
        temporary= (char**) malloc((p->taille)*sizeof(char*));
        memcpy(temporary, p->arrayTab,p->taille);
        val = atof(temporary[position]);
        
          memset(temporary, 0, p->taille);
          memcpy(temporary, p->arrayTab,p->taille); 
          sprintf(res,"%f",val);
        return val;

      }else if(strcmp(p->name,idf)==0)
            {
              printf("Erreur semantique: une expression arithmetique contient un idf Tableau %s de type STRING\n",idf);
              exit(0);
            }

 return val;
  
}


int getValueIdf(char idf[], char* res){
  
    element *p;
    int cle;
    char **temporary;
    char val[50];
    cle = fonction_hachage(idf);
    for(p=table_hachage[cle];p!=NULL;p=p->suivant){
      if(strcmp(p->name,idf)==0)
      {
        if(strcmp(p->type,"INT")==0){
            //printf("HERE\n");
            sprintf(res,"%f",(float)(p->val));
            //printf("res ========================= %s\n",res);
            return 0;
        }else if(strcmp(p->type,"FLT")==0){
            //printf("HERE\n");
            sprintf(res,"%f",p->valF);
            //printf("res ========================= %s\n",res);
            return 0;

        }else if(strcmp(p->type,"STR")==0 || strcmp(p->type,"CHR")==0 || strcmp(p->type,"BOL")==0){
             printf("Erreur semantique: une expression arithmetique contient un idf %s de type %s \n",idf,p->type);
            exit(0);
        }
  
      }
    } 
    
}

int getValIdfInt(char entite[]){
  
    element *p;
    int cle;
    char **temporary;
    char val[50];
    cle = fonction_hachage(entite);
    for(p=table_hachage[cle];p!=NULL;p=p->suivant){
      if(strcmp(p->name,entite)==0 )
      {
        return p->val;
      }
    }


} 
int verificationConditionFor(char entite[]){


  if(Declared(entite)==1 && typeEntite(entite)==0 && HasValue(entite,-1)==1 )
  {
    return 1;
  }else {
    if(typeEntite(entite)!=0) {
        printf("Erreur semantique : le type de l'entite %s est incompatible au type de la condition For \n",entite);
        exit(0);
    }
  }
  
  return 0; 
}

int HasValue(char entite[], int isItTab){
  
    element *p;
    int cle;  
    char **temporary;
    cle = fonction_hachage(entite);
    for(p=table_hachage[cle];p!=NULL;p=p->suivant){
      if(strcmp(p->name,entite)==0 )
      {
        if(isItTab == -1 && (p->state!=3)) return 1;
        else if(isItTab != -1){
           printf("IT S A TABLE\n");
           temporary= (char**) malloc((p->taille)*sizeof(char*));
           memcpy(temporary, p->arrayTab,p->taille);
           if(temporary[isItTab]!=NULL){
             return 1;
           }
        }
      }
    }
    
    printf("Erreur semantique : l'entite %s est declaree et sans valeur  \n",entite);
    exit(0);
    return 0;
}

int Declared(char entite[]){
  
    element *p;
    int cle;  
    cle = fonction_hachage(entite);
    for(p=table_hachage[cle];p!=NULL;p=p->suivant){
      if(strcmp(p->name,entite)==0 )
      {

        return 1;
      }
    }
    
    printf("Erreur semantique : l'entite %s est non declaree \n",entite);
    exit(0);

    return 0;
}

int verificationType(char entite[],int type){

  if(typeEntite(entite) == type){
    return 0;
  }else { 
    printf("Erreur semantique : Incompatibilite de type de l'entite lexicale %s \n",entite);
    exit(0);
  }

}
void InsertionIdf(char entite[],int type,char valeur[]){

   element *p;
   int cle;

  cle = fonction_hachage(entite);
  for(p=table_hachage[cle];p!=NULL;p=p->suivant)
    {
      if(strcmp(p->name,entite)==0)
        { 
          
          
          if(type == 0){
            printf("HERE\n");
            p->val = atoi(valeur);
            p->state = 0;
          } else if(type == 1){
            p->valF=atof(valeur);
            p->state=1;
          } else if(type == 2){ 
            strcpy(p->valStr,valeur);
            p->state = 2;
          }else if(type == 3){
            strcpy(p->valStr,valeur);
            p->state = 2;
          }

        }
        
        
    }

}
int isItConst(char entite[]){
    element *p;
    int cle; 
    cle = fonction_hachage(entite);
    for(p=table_hachage[cle];p!=NULL;p=p->suivant){
      if(strcmp(p->name,entite)==0)
      {
        if((strcmp(p->categorie,"constante")==0 && p->state==3) || strcmp(p->categorie,"variable")==0 )
        { 
          return 1; //si constante et pas de valeur ... OU variable 
        }else {
          printf("Erreur semantique : Affectation d'une valeur a une constante %s contenant une valeur\n",entite);
          exit(0);
        }
      }
    }
}


int typeEntite(char entite[])
{ 
   element *p;
   int cle;

  cle = fonction_hachage(entite);
  for(p=table_hachage[cle];p!=NULL;p=p->suivant)
    {
      if(strcmp(p->name,entite)==0)
        {
          if(strcmp(p->type,"INT")==0){
            return 0;
          }else if(strcmp(p->type,"FLT")==0){
            return 1;
          }else if(strcmp(p->type,"STR")==0 || strcmp(p->type,"CHR")==0){
            return 2;
          }else if(strcmp(p->type,"BOL")==0){
            return 3;
          }

        }
        }
      
      
      return -1;
}

void verificationInsertion(char entite[],int sauvCateg,char type[],char valeur[],int taille,int sauvState){

  //constante
  if(sauvCateg == 0){
    insertion(entite,"constante",type,valeur,taille,sauvState);
  }else{
    insertion(entite,"variable",type,valeur,taille,sauvState);
  }

}

verificationAffectation(char entite[],int type,char valeur[]){
  if(typeEntite(entite) == type){

  }
}




// void insertion(element **table_hachage,char entite[],char categorie[],char type[],char valeur[],int taille){

//   element * nouveau;
//   //L entite n'existe pas  ==> on insere 
//   if(rechercher(table_hachage,entite)==0){
    
//     int cle =fonction_hachage(entite);
    
//     nouveau = InsertionEnTete(table_hachage[cle],entite,categorie,type,valeur,taille);
     
//     //  table_hachage *p=hach_table[cle];
//     // while(p->suivant!=NULL && strcmp(p->nom,chaine))
//     //    p=p->suivant;
//     //    if(!strcmp(p->nom,chaine))
//     //    strcpy(p->type,type);

//   }

// }

////////////////////////////////////////////////////////////////////////////////////////

int resultatComparaison(char val1[] ,char val2[], char signe []){
  
      printf("valeurs : %f , %f \n",atof(val1),atof(val2));

  int typ = atoi(signe);

  switch(typ){
   
      case 0:{if(atof(val1) > atof(val2) )  return 1;} break;
      case 1:{if(atof(val1) >= atof(val2)) return 1;}   break;
      case 2:{if(atof(val1)<=atof(val2)) return 1;} break;
      case 3:{if(atof(val1)<atof(val2)) return 1;} break;
      case 4:{if(atof(val1)==atof(val2))  return 1;} break;
      case 5:{if(atof(val1)!=atof(val2)) return 1;} break;
      default: printf("Val1 = %s , Val2 = %s , signe = %d \n",val1,val2,signe); break;
  }

  return 0;//false 
}
 
int ValueTabBol(char entite[],int position){

    element *p;
    int cle;
    char **temporary;
    int val;

    cle = fonction_hachage(entite);
    for(p=table_hachage[cle];p!=NULL;p=p->suivant)
      {
        if(strcmp(p->name,entite)==0 && strcmp(p->categorie,"tableau")==0)
          { 

            temporary= (char**) malloc((p->taille)*sizeof(char*));
            memcpy(temporary, p->arrayTab,p->taille);
            if(strcmp(temporary[position],"TRUE")==0) return 1;//true
            else if(strcmp(temporary[position],"FALSE")==0) return 0;//false

          }
      }

  return -1;
}

int ValueIdfBol(char entite[]){

    element *p;
    int cle;
    char **temporary;
    int val;

    cle = fonction_hachage(entite);
    for(p=table_hachage[cle];p!=NULL;p=p->suivant)
      {
        if(strcmp(p->name,entite)==0 && strcmp(p->categorie,"variable")==0)
          { 
            
            if(strcmp(p->valStr,"TRUE")==0) return 1;//true
            else if(strcmp(p->valStr,"FALSE")==0) return 0;//false

          }
      }

  return -1;
}



/////////////////////////////////////////////////////////////////////////////////////////////
void fonctionInput(char entite[],int signe){
    element *p;
    int cle;
      cle = fonction_hachage(entite);
      for(p=table_hachage[cle];p!=NULL;p=p->suivant)
        {
          if(strcmp(p->name,entite)==0)
            {
              //VERIFICATIONType 
              printf("signe = %d\n",signe);
              switch(signe){
    
                  case 1:{ 

                        if(strcmp(p->type,"INT")!=0){
                            printf("Erreur semantique: Instruction INPUT Incorrect , Le type de la variable %s et le type du signe du formatage $ ne sont pas compatible \n");
                            exit(0);
                        }
                        
                        int variable ; scanf("%d",&variable); 
                        printf("HERE \n"); 
                        p->val = variable;
                  }break;
                  case 2:{
                       if(strcmp(p->type,"FLT")!=0){
                            printf("Erreur semantique: Instruction INPUT Incorrect , Le type de la variable %s et le type du signe du formatage modulo ne sont pas compatible \n");
                            exit(0);
                        }
                        float variable ; scanf("%f",&variable);  
                        p->valF = variable;

                  }break;
                  case 3:{
                        if(strcmp(p->type,"STR")!=0){
                            printf("Erreur semantique: Instruction INPUT Incorrect , Le type de la variable %s et le type du signe du formatage # ne sont pas compatible \n");
                            exit(0);
                        }
                        char variable[100] ; 
                        scanf("%s",variable);  
                        strcpy(p->valStr,variable);
                  }break;
                  case 4:{
                    
                        if(strcmp(p->type,"BOL")!=0){
                            printf("Erreur semantique: Instruction INPUT Incorrect , Le type de la variable %s et le type du signe du formatage @ ne sont pas compatible \n");
                            exit(0);
                        }
                        printf("Instruction\n");
                        char variable[6] ; scanf("%s",variable); 
                        strcpy(p->valStr,variable); 
                  }break;
                  case 5:{
                        if(strcmp(p->type,"CHR")!=0){
                            printf("Erreur semantique: Instruction INPUT Incorrect , Le type de la variable %s et le type du signe du formatage & ne sont pas compatible \n");
                            exit(0);
                        }
                        char variable[2] ; scanf("%s",variable);  
                        strcpy(p->valStr,variable);
                  }break;
                  default: printf("ERROR: Unknown\n");

              }

            }
        }

  
}

void VerificationTypeINOUT(char entite[],int signe){
    element *p;
    int cle;
      cle = fonction_hachage(entite);
      for(p=table_hachage[cle];p!=NULL;p=p->suivant)
        {
          if(strcmp(p->name,entite)==0)
            {
              //VERIFICATIONType  
              switch(signe){
    
                  case 1:{ 

                        if(strcmp(p->type,"INT")!=0){
                            printf("Erreur semantique: Instruction INPUT/OUTPUT Incorrect , Le type de la variable %s et le type du signe du formatage $ ne sont pas compatible \n");
                            exit(0);
                        }
                  }break;
                  case 2:{
                       if(strcmp(p->type,"FLT")!=0){
                            printf("Erreur semantique: Instruction INPUT/OUTPUT Incorrect , Le type de la variable %s et le type du signe du formatage modulo ne sont pas compatible \n");
                            exit(0);
                        }
                         
                  }break;
                  case 3:{
                        if(strcmp(p->type,"STR")!=0){
                            printf("Erreur semantique: Instruction INPUT/OUTPUT Incorrect , Le type de la variable %s et le type du signe du formatage # ne sont pas compatible \n");
                            exit(0);
                        }
                        
                  }break;
                  case 4:{
                    
                        if(strcmp(p->type,"BOL")!=0){
                            printf("Erreur semantique: Instruction INPUT/OUTPUT Incorrect , Le type de la variable %s et le type du signe du formatage @ ne sont pas compatible \n");
                            exit(0);
                        }
                        
                  }break;
                  case 5:{
                        if(strcmp(p->type,"CHR")!=0){
                            printf("Erreur semantique: Instruction INPUT/OUTPUT Incorrect , Le type de la variable %s et le type du signe du formatage & ne sont pas compatible \n");
                            exit(0);
                        }
                        
                  }break;
                  default: printf("ERROR: Unknown\n");

              }

            }
        }

  
}
/////////////////////////////////////////////////////////////////////////
char * fonctionOutput(int signe,char entite[],char chaine1[],char chaine2[]){
 
      // //0 == "
      //   //1 == "+        
      //   extractChaine(chaine1,0);

      // //   extractChaine(chaine2,1);
       
      //   chaine2[strlen(chaine2)-1]='\0';
      //   chaine2[strlen(chaine2)-2]='\0'; 


      VerificationTypeINOUT(entite,signe);
      
      //printf("%s %s %s",strncpy(chaine1,chaine1 + 1,strlen(chaine1)),res,strncpy(chaine2,chaine2,strlen(chaine2)));

}
int InverserChaine(char *str){
  
    char rev[100]; 
    int t, i, j;
    j = 0;
    t = strlen(str);
 
    rev[t] = '\0'; //le dernier caractère doit toujours être égale à '\0'.
    for (i = t - 1; i >= 0; i--)
    {
      rev[j++] = str[i];
    }
    rev[i] = '\0';

    strcpy(str,rev);
    return 0;
}

AfficheInverseOutput(char * buffer){
  
  InverserChaine(buffer);  
  printf("%s\n",buffer);
  strncpy(buffer, "", sizeof(buffer)); 

}



int getValIdf(char idf[], char* res, int position){
  
    element *p;
    int cle;  
    char **temporary;
    char * val;
    cle = fonction_hachage(idf);
    for(p=table_hachage[cle];p!=NULL;p=p->suivant){
      if(strcmp(p->name,idf)==0)
      {

        if(strcmp(p->categorie,"tableau")!=0){
          
          printf("C est une variable\n");
          if(strcmp(p->type,"INT")==0){
              
              sprintf(res,"%d",p->val);
              return 0;
          }else if(strcmp(p->type,"FLT")==0){
              sprintf(res,"%f",p->valF);
              return 0;

          }else if(strcmp(p->type,"STR")==0 || strcmp(p->type,"CHR")==0 || strcmp(p->type,"BOL")==0){
              strcpy(res,p->valStr);
              return 0;
          }
        }else if(strcmp(p->categorie,"tableau")==0) {
          
          printf("C est un tableau %s\n",idf);
          temporary= (char**) malloc((p->taille)*sizeof(char*));
            
          memcpy(temporary, p->arrayTab,p->taille);
          ///COPIE DANS TEMP POUR AFFICHER  
          int j;
          for ( j = 0; j <p->taille; j++)
          {
            printf("%s[%d] = %s \n",idf,j,temporary[j]);
          }
            
          printf("%s[%d] = %s \n",idf,position,temporary[position]);

          return 0;
        }
  
      }
    }  
}



/*
element *p;
    int cle;
    char **temporary;
    float val;
    cle = fonction_hachage(idf);
    for(p=table_hachage[cle];p!=NULL;p=p->suivant)
      if(strcmp(p->name,idf)==0 && (strcmp(p->type,"INT")==0 || strcmp(p->type,"FLT")==0))
      {
        temporary= (char**) malloc((p->taille)*sizeof(char*));
        memcpy(temporary, p->arrayTab,p->taille);
        val = atof(temporary[position]);
        return val;

      }else if((strcmp(p->type,"INT")!=0 && strcmp(p->type,"FLT")!=0))
            {
              printf("Erreur semantique: une expression arithmetique contient un idf Tableau %s de type STRING\n",idf);
              exit(0);
            }

*/

/////////////////////////////////////////////////////////////////////////
/*

switch(signe){
    
    case 1:{ 
          int variable ; scanf("%d",variable);  
          
    }break;
    case 2:{
          float variable ; scanf("%f",variable);  
    }break;
    case 3:{
          char variable[100] ; scanf("%s",variable);  
    }break;
    case 4:{
          int variable ; scanf("%d",variable);  
    }break;
    case 5:{
          char variable ; scanf("%c",variable);  
    }break;

  }


*/












//////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//affiche la liste de chaque case de la table de hachage 
void affichage_liste(element *table,int j){
    
    element *p;

  for(p=table;p!=NULL;p=p->suivant){
          
          if(p->state==0) {
            
                  printf("|%16d |%16s |%16s |%15s  |%15d  |%16d |\n",j,p->name,p->categorie,p->type,p->val,p->taille);
                  printf("|_________________|_________________|_________________|_________________|_________________|_________________|\n");

          }
          else if(p->state==1) {
                  printf("|%16d |%16s |%16s |%15s  |%15f  |%16d |\n",j,p->name,p->categorie,p->type,p->valF,p->taille);
                  printf("|_________________|_________________|_________________|_________________|_________________|_________________|\n");

          }
          else if(p->state==2) {
                  printf("|%16d |%16s |%16s |%15s  |%15s  |%16d |\n",j,p->name,p->categorie,p->type,p->valStr,p->taille);
                  printf("|_________________|_________________|_________________|_________________|_________________|_________________|\n");

          }if(p->state==3) {                       
                  printf("|%16d |%16s |%16s |%15s  |                 |%16d |\n",j,p->name,p->categorie,p->type,p->taille);
                  printf("|_________________|_________________|_________________|_________________|_________________|_________________|\n");

          }
    
  
 }
}


void affichage_table(){
  
  element * P;
  int cle;
  printf("\n****************************************************************************\n");
  printf("                           Table des variables/constantes                     \n");
  printf("******************************************************************************\n");
  printf("____________________________________________________________________________________________________________\n");
  printf("|      Indice     |   Nom Entite    |     Categorie   |       Type      |    Valeur       |      Taille     |\n");
  printf("|_________________|_________________|_________________|_________________|_________________|_________________|\n");

  int cpt = 0; 
  for(cle=0;cle<taille_table_hachage;cle++){ 
    



    if(table_hachage[cle] != NULL){
        affichage_liste(table_hachage[cle],cle);
        }
    // printf("-----------------------------------------------------------------\n");
    // P= table_hachage[cle];
    // while(P!=NULL){
        
    //     printf(" ----- entite = %s , categorie = %s , type = %s , taille = %d \n",P->name,P->categorie,P->type,P->taille);
    //     P=P->suivant;
    
    // }
    
  }
}
