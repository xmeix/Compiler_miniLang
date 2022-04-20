#include <stdio.h>
#include <stdlib.h>
#include <string.h>

///Variables/Const
typedef struct {
int state;
char name[20];
char type[20];
float val;
char valStr[100]; 
int taille; // cas tableau
char categorie[20];
} element;

////Sep et mc
typedef struct
{
int state;
char name[20];
char type[20];
} elt;


//////POUR LA TABLE DES MOTS CLES
typedef struct ListeMC ListeMC;
struct ListeMC
{
    elt elementMc;
    struct ListeMC *suivant;
};


//////POUR LA TABLE SEPARATEURS
typedef struct ListeSep ListeSep;
struct ListeSep
{
    elt elementSep;
    struct ListeSep *suivant;
};

//////POUR LA TABLE DES CSTS || VAR
typedef struct ListeCV ListeCV;
struct ListeCV
{
    element elementCv;
    struct ListeCV *suivant;
};
 
ListeCV *S1 = NULL;
ListeMC *S2 = NULL;
ListeSep *S3 = NULL;

void initialisation(){

    printf("Initialisation...\n");

}

int recherche (char entite[],int y) {
	int res;
    //printf("recheche....\n");
	switch(y){

        case 0:{
            
            ListeCV *S = S1;  
            if(S!=NULL){ 
                while( (S != NULL) && strcmp(S->elementCv.name,entite)!=0){
                    S = S->suivant;
                }
                if(S!=NULL){
                    return 0;
                }
                return 1;
            }else { 
                return 1;
            }
        }; break;
        default: printf("Table des symboles inexistante\n"); break;
    }

}

void inserer (char entite[], char type[],float val, char valStr[],int taille,int y,int dec,int categorie){
    

        switch (y)
        {

            case 0:{
                    
                    printf(" INSIDE INSERER entite : %s , categorie = %d \n",entite, categorie);

           ///////////////////////////////////////////////////////////////////////////////////////////     
                //printf("Insertion d'une variable / Const en cours... \n");
                        ListeCV *S = NULL;    
                        S =  S1;
                        
                        if(S!=NULL)
                               {
                                   //printf("debut while\n");
                                    while(S -> suivant != NULL && strcmp(S->elementCv.name,entite)!=0){
                                            S = S->suivant;
                                    //        printf("inside\n");
                                    }
                                    //  printf("End while\n");
                                }
            
                            /// existe
                            //S pointe sur l element recherché dans les deux cas
                            //Inserer valeur
                            
                         int rech = recherche(entite,0); 
                         //rech ==0 entite existe
                         // sinon 1
                         //printf(" entite: %s\n",entite);
                         //printf(" resultat rech: %d\n",rech);
                        if(rech == 0){ 
                           // printf("inside recherche existe\n");
                             //state=0 val n'existe pas
                             //else val existe  
                             if(dec != 0){ // PAS DANS LA PHASE DECLARATION
                                
                                //si c est une constante qui a une valeur alors 
                                if((strcmp(S->elementCv.categorie,"constante")==0) && ( S->elementCv.state!=0)){
                                    printf("La constante %s n'accepte pas une nouvelle valeur!\n",S->elementCv.name);
                                     //////////////////////////////////
                                }
                                printf("valStrr: %s\n",valStr);
                                S ->elementCv.val = val;
                                S ->elementCv.state = 1;

                            }else
                            {
                                  

                                printf("Erreur semantique: Double declaration de l'entite %s \n", entite);
                                exit(0);
                                
                            }
                            
                         // nouvelle fct sans val!!!
                        }else {
                            
                            //printf("inside recherche n'existe pas\n");
                            ListeCV* nouvelElement =(ListeCV*)malloc(sizeof(ListeCV));
                            
                            //Inserer NOM / TYPE
                            strcpy(nouvelElement ->elementCv.name , entite);
                            strcpy(nouvelElement ->elementCv.type , type);
                             nouvelElement->elementCv.state=0;
                            
                            // printf(" IDF = %s , Categorie = %d \n",entite,categorie);

                            if(categorie == 0) strcpy(nouvelElement ->elementCv.categorie , "variable");
                            else if(categorie == 1) {strcpy(nouvelElement ->elementCv.categorie , "constante");
                                   

                                    }

                                  if(taille!=0){
                                      nouvelElement ->elementCv.taille = taille;
                                  }else
                                  nouvelElement ->elementCv.taille = 0;
                                  
                                
                            if (S == NULL){
                                nouvelElement ->suivant = NULL;
                                S1 = nouvelElement; 
                            }else { 
                                if(S->suivant == NULL){
                                    
                                    //chainage S avec le nouvel element et le nouvel el avec NULL
                                    
                                    //creation d'un nouvel element
                                    //creation enreg
                                    S->suivant = nouvelElement ;
                                    nouvelElement -> suivant = NULL ;
                                }else {

                                    printf("Erreur semantique: Double declaration de l'entite %s \n", entite);
                                    exit(0);

                                }
                            }
                        }

                        
            };break;

        }
}


void affichage(){
    printf("\n/****************** Table Des VARIABLE & CONSTANTES ******************/\n");
	printf("\t____________________________________________________________________________________________________________________________\n");
    printf("\t    categorieEntite   |      NomEntite   |   TypeEntite     |  TailleEntitte   |     ValeurEntite (String) |ValeurEntite\n");
	printf("\t____________________________________________________________________________________________________________________________\n");

    ListeCV * P = S1;
    while(P != NULL){
          if(P->elementCv.state!=0) printf("\t|%10s  |%12s  |%14s |%16d |%18s |%20f \n",P->elementCv.categorie,P->elementCv.name,P->elementCv.type,P->elementCv.taille,P->elementCv.valStr,P->elementCv.val);
        else printf("\t|%10s  |%12s  |%14s |%16d|%18s|\n",P->elementCv.categorie,P->elementCv.name,P->elementCv.type,P->elementCv.taille,P->elementCv.valStr);
        P=P->suivant;
    }



}
