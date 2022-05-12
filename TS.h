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
  cle = fonction_hachage(idf);
  for(p=table_hachage[cle];p!=NULL;p=p->suivant)
    if(strcmp(p->name,idf)==0)
    {
      temporary= (char**) malloc((p->taille)*sizeof(char*));
      memcpy(temporary, p->arrayTab,p->taille);
      temporary[position]= valeur;


      memcpy(p->arrayTab, temporary, p->taille);
      memset(temporary, 0, p->taille);
      memcpy(temporary, p->arrayTab,p->taille);
      ///COPIE DANS TEMP POUR AFFICHER  
      
      printf("Temporary[%d] = %s \n",position,temporary[position]);
    }

}

float getValueTab(char idf[],int position){
    element *p;
    int cle;
    char **temporary;
    float val;
    cle = fonction_hachage(idf);
    for(p=table_hachage[cle];p!=NULL;p=p->suivant)
      if(strcmp(p->name,idf)==0 && (strcmp(p->type,"INT")==0 || strcmp(p->type,"FLOAT")==0))
      {
        temporary= (char**) malloc((p->taille)*sizeof(char*));
        memcpy(temporary, p->arrayTab,p->taille);
        val = atof(temporary[position]);
        return val;

      }else if((strcmp(p->type,"INT")!=0 && strcmp(p->type,"FLOAT")!=0))
            {
              printf("Erreur semantique: une expression arithmetique contient un idf Tableau %s de type STRING\n",idf);
              exit(0);
            }


  
}
void verificationType(char entite1[],char Type1[], char entite2[], char Type2[]){

  if(strcmp(Type1,Type2)!=0){
    printf("Erreur sémantique: non-compatibilité de type des entités %s et %s\n",entite1,entite2);
    exit(0);
  }

}
float verificationValIdf(char idf[],int state){

  //On doit parcourir table de hachage et verifier si l entite avec le nom idf a une valeur 
  //si la valeur existe alors return val; 
  //sinon Erreur Affectation idf sans Valeur dans ExpAr
  element *p;
  int cle;
  float val;
  cle = fonction_hachage(idf);
  for(p=table_hachage[cle];p!=NULL;p=p->suivant)
    if(strcmp(p->name,idf)==0)
    {
      if(state == 0)  return (float)p->val;
      if(state == 1)  {
      
        val = p->valF;
        printf("Val = %f\n",val);
        return val;

      }
      if(state == 2) {
         
         printf("Erreur semantique: une expression arithmetique contient un idf %s de type STRING\n",idf);
         exit(0);
      }

      
    }
  
    printf("Erreur semantique: Affectation d'une expression arithmetique avec un idf %s sans valeur \n",idf);
    exit(0);
}

int typeEntite(char entite[])
{ 
   element *p;
   int cle;

  cle = fonction_hachage(entite);
  for(p=table_hachage[cle];p!=NULL;p=p->suivant)
    if(strcmp(p->name,entite)==0)
    {
      return p->state;
    }
}

void verificationInsertion(char entite[],int sauvCateg,char type[],char valeur[],int taille,int sauvState){

  //constante
  if(sauvCateg == 0){
    insertion(entite,"constante",type,valeur,taille,sauvState);
  }else{
    insertion(entite,"variable",type,valeur,taille,sauvState);
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
