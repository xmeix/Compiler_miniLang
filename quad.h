#include<stdio.h>
#include <stdlib.h>
#include<string.h>

typedef struct eltQuad {  
 int numQuad;  
 char *op; 
 char *op1;
 char *op2;
 char *res;
 struct eltQuad* suivant; }eltQuad;
//****************************************************************************************************

eltQuad *teteQuad=NULL;

// Insérer à la fin(ra7 ndirou une list(mazal ma testithach)
//l att tete houwa la tete ta3 la chaine(ra7 ykoun NULL m3a lewel) la fonction ra7 tredja3alna la nouvelle tete ta3 la list
//donc il faut meiux ndirou teteQuad=insert(teteQuad,...);
eltQuad *insererQuad(eltQuad *tete,int numQuad,char*op,char *op1,char *op2,char *res)
{
    eltQuad *PtrInt=(eltQuad*) malloc(sizeof(eltQuad));
	if (PtrInt==NULL)
        printf ("Pas d'espace pour l'allocation\n");
	
	/* copier les info dans le nouveau noeud */
	PtrInt->numQuad=numQuad;//1
	
	PtrInt->op =(char *) malloc (strlen(op)+1);
	strcpy(PtrInt->op,op);//2
    
	PtrInt->op1=(char *)malloc (strlen(op1)+1);
	strcpy(PtrInt->op1,op1);//3
	
	PtrInt->op2=(char *)malloc (strlen(op2)+1);
	strcpy(PtrInt->op2,op2);//4
	
	PtrInt->res=(char *)malloc (strlen(res)+1);
	strcpy(PtrInt->res,res);//5
	
	PtrInt->suivant=NULL;//6

	if(tete == NULL) return PtrInt;	//hadi f le premier cas ki tkoun la chaine fargha(ra7 nmeddou la nouvelle tete ta3 la chaine

	//hna ra7 ydir insertion a la fin (tete hadi C la tete ta3 kamel la list,7na ra7 ndirou une autre type bach nmechiw biha w ma nkhessrouch la valleur ta3 tete
	eltQuad *teteInt=(eltQuad*) malloc(sizeof(eltQuad));
	teteInt=tete;
	//hna rana nmchiw 7atta lla fin ta3 chaine
	while (teteInt->suivant!=NULL)
		teteInt=teteInt->suivant;

	teteInt -> suivant = PtrInt;//nless9ouhha a la fin


	return tete;
}
//******************************************************************************************************
//afficher quadruplé ra7 nmedoullha la tete ta3 la list afficherQuad(teteQuad);(li rana diclarinaha lfou9)
void afficherQuad(eltQuad* tete)
{
	printf("\n/************************ affichage quadruple **************************/\n");
	eltQuad *PtrInt=tete;
	if (PtrInt==NULL)
	printf ("La liste est vide\n");
	else
	while (PtrInt!=NULL)
	{
		printf ("\t%2d - ( %3s , %5s , %5s , %5s )\n",PtrInt->numQuad,PtrInt->op,PtrInt->op1,PtrInt->op2,PtrInt->res);
		PtrInt=PtrInt->suivant;
	}
}

//les branchements
char *branchement(char *chaine)
{
	if (strcmp(chaine,"!=")==0) return "BNE";
	if (strcmp(chaine,"=")==0) return "BE";
	if (strcmp(chaine,"<")==0) return "BL";
	if (strcmp(chaine,"<=")==0) return "BLE";
	if (strcmp(chaine,">")==0) return "BG";
	if (strcmp(chaine,">=")==0) return "BGE";
	return "B_NULL";
}

int updateREST(int idQuad,char* res){
	eltQuad *PtrInt=teteQuad;
	if (PtrInt==NULL)
		return 0;
	else
	while (PtrInt!=NULL)
	{
		if(PtrInt->numQuad==idQuad){
			PtrInt->res=(char *)malloc (strlen(res)+1);
			strcpy(PtrInt->res,res);
			return 1;
		}
		PtrInt=PtrInt->suivant;
	}
}















