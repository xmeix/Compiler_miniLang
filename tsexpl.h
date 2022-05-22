#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

typedef struct
{
	char NomEntite[20];//had la partie ra7 n3amrouha f le fichier flex
	char CodeEntite[20];//hna le prof rahou dayerhoum kamel IDF ??? ma3labalich wach capable tkoun apare IDF ??
	char TypeEntite[20];//hadi (integer/reel/string/char) w capable nzidou (/) ki ykoun l idf C le nom ta3 la fonction par exemple
	char Const[20];//hadi si il est constant ou nn
} element;

element ts[1000];

int CptTS=0;
int M[5][5];


void initialiserTS(){
	remplireMComp();
}

int remplireMComp(){
	/*
	int 0
	float 1
	char 2
	string 3
	boolean 4
	*/
	
	M[0][0]=1;M[0][1]=1;M[0][2]=0;M[0][3]=0;M[0][4]=0;
	M[1][0]=1;M[1][1]=1;M[1][2]=0;M[1][3]=0;M[1][4]=0;
	M[2][0]=0;M[2][1]=0;M[2][2]=1;M[2][3]=1;M[2][4]=0;
	M[3][0]=0;M[3][1]=0;M[3][2]=1;M[3][3]=1;M[3][4]=0;
	M[4][0]=0;M[4][1]=0;M[4][2]=0;M[4][3]=0;M[4][4]=1;
}

//les fonction li darhoum l prof fl tp
int rechercher(char entite[]){
	int i=0;
	while(i<CptTS){
		if(strcmp(entite,ts[i].NomEntite)==0){
			return i;
		}
		i++;
	}
	return -1;
}

//hadi ra7 n3aye6elha fl flex(C bon rani khdemt biha)
void inserer(char entite[],char code[]){
	if(rechercher(entite)==-1){
		strcpy(ts[CptTS].NomEntite,entite);
		strcpy(ts[CptTS].CodeEntite,code);//kima IDF
		CptTS++;
	}
}

//hadi ra7 n3aye6elha fl bison bach ncomplité wach dekhelt fl flex(fl flex ra7 ndekhell brk le nom ta3 le idf mais ra7 ndekhell le type f la phase ta3 l analyse syntaxique
void insererType(char entite[],char type[]){
	int pos;
	pos=rechercher(entite);
	if(pos!=-1){
		strcpy(ts[pos].TypeEntite,type);
		strcpy(ts[pos].Const,"NON");
	}
}
//hadi y insiri fiha le type w ida rahou constant
void insererTypeConst(char entite[],char type[]){
	int pos;
	pos=rechercher(entite);
	if(pos!=-1){
		strcpy(ts[pos].TypeEntite,type);
		strcpy(ts[pos].Const,"OUI");
	}
}
//hadi t9oullek ida le type li rahou f le position pos rahou constant wella nn 
int isConst(int pos){
	
	/*
	0 machi constant 
	1 constant
	-1 kayen un problem
	*/
	
	if(pos<0){
		return -1;
	}
	
	if(strcmp(ts[pos].Const,"OUI")==0){
		return 1;
	}
	if(strcmp(ts[pos].Const,"NON")==0){
		return 0;
	}
	return -1;
	
}

//hadi nss7a9ouha fl bison
int verifierExistType(char entite[]){
	int pos=0;
	pos=rechercher(entite);
	if(pos==-1 || strcmp(ts[pos].TypeEntite,"")==0 || strcmp(ts[pos].TypeEntite,"NULL")==0) return 0;//ma3netha ma kanch type
	return -1;
}

//fin
int verifierDoubleConstAff(char entite[]){
	int pos=0;
	pos=rechercher(entite);
	if(strcmp(ts[pos].Const,"OUI")==0){
		return 0;
	}
	return -1;
}

//fin
void affichier(){
	int i=0;
	printf("\n/************************ Table des symboles ***************************/\n");
	printf("-----------------------------------------------------------------------\n");
	printf("\t|  NOM ENTITE  | CODE ENTITE | TYPE ENTITE  | IS ENTITE CONST |\n");
	printf("-----------------------------------------------------------------------\n");
	while(i<CptTS){
		printf("\t|%12s  |%12s |%13s |%16s |\n",ts[i].NomEntite,ts[i].CodeEntite,ts[i].TypeEntite,ts[i].Const);
		i++;
	}
}

//fin
int getTypeAsInt(int pos){
	//int 0
	//float 1
	//char 2
	//string 3
	//boolean 4
	//null -1
	
	if(pos<0){
		return -1;
	}
	if(strcmp(ts[pos].TypeEntite,"INTEGER")==0){
		return 0;
	}
	if(strcmp(ts[pos].TypeEntite,"REAL")==0){
		return 1;
	}
	if(strcmp(ts[pos].TypeEntite,"CHAR")==0){
		return 2;
	}
	if(strcmp(ts[pos].TypeEntite,"STRING")==0){
		return 3;
	}
	if(strcmp(ts[pos].TypeEntite,"BOOLEAN")==0){
		return 4;
	}
	return -1;
}

//fin
char* TypeToString(int type){
	//int 0
	//float 1
	//char 2
	//string 3
	//boolean 4
	//null -1
	switch(type){
		case 0:return "INTEGER";break;
		case 1:return "REAL";break;
		case 2:return "CHAR";break;
		case 3:return "STRING";break;
		case 4:return "BOOLEAN";break;
		case -1:return "NULL";break;
		default: return"NULL";break; 
	}
	return "NULL";
}

int isCompatible(int type1,int type2){
	if(type1>5 || type1<0){
		return 0;
	} 
	if(type2>5 || type2<0){
		return 0;
	} 
	return M[type1][type2];
}

int isAcceptedInCompareson(int type){
	if(type == 0 || type ==1 ){
		return 1;
	}
	return 0;
}

int typeToValue(char* type){
	if(strcmp(type,"INTEGER")==0){
		return 0;
	}
	if(strcmp(type,"REAL")==0){
		return 1;
	}
	if(strcmp(type,"CHAR")==0){
		return 2;
	}
	if(strcmp(type,"STRING")==0){
		return 3;
	}
	if(strcmp(type,"BOOLEAN")==0){
		return 4;
	}
	return -1;
}

