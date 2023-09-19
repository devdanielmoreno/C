// ex05.c
#include <stdio.h>
#include <string.h>

#define XML_FILE "AlbertEinstein.xml"
#define STR_MAX_LENGTH 40
#define STR_MAX_LINE_LENGTH 10*STR_MAX_LENGTH
#define N_TAGS 6

#ifndef bool
	#define bool  	unsigned char
	#define true  	1
	#define false 	0
#endif

struct stName{
	char szFirstName[STR_MAX_LENGTH];
	char szLastName[STR_MAX_LENGTH];
};

struct stPerson{
	struct stName stN;
	char szProfession[STR_MAX_LENGTH];
};

enum enTags {null,person,name,first_name,last_name,profession};
char szTags[N_TAGS][STR_MAX_LENGTH]={"","person","name","first_name","last_name","profession"};

void vPresentaTipusTag(){
	int i;
	
	printf("Tipus de tags:\n");
	for(i = 0 ; i < N_TAGS ; i++)
		printf("%s\n",szTags[i]);
}

enum enTags entTipus(char *sz){
	if(strcmp(sz,szTags[1]))
		return person;
	if(strcmp(sz,szTags[2]))
		return name;
	if(strcmp(sz,szTags[3]))
		return first_name;
	if(strcmp(sz,szTags[4]))
		return last_name;
	if(strcmp(sz,szTags[5]))
		return profession;
	return null;
}


struct stPerson* stpLectArxiu(FILE* f){
	char szLinia[STR_MAX_LINE_LENGTH];
	
	while (fgets(szLinia,STR_MAX_LINE_LENGTH,f) != NULL){
		printf("%s",szLinia);
	}
	printf("\n");
	
	return NULL;
}

bool bIsTag(char* szL, char* szT){
	char *szTagBegins,*szTagEnds;
	
	szTagBegins = strstr(szL,"<");
	szTagEnds = strstr(szL,">");
	if(szTagBegins && szTagEnds){
		strcpy(szT,szTagBegins+1);
		szT[szTagEnds-szTagBegins-1] = '\0';
		return true;
	}
	return false;
}

enum enTags entQuinL(char *szLinia){
	if(strstr(szLinia,"<person>"))
		return person;
	if(strstr(szLinia,"<name>"))
		return name;
	if(strstr(szLinia,"<first_name>"))
		return first_name;
	if(strstr(szLinia,"<last_name>"))
		return last_name;
	if(strstr(szLinia,"<profession>"))
		return profession;
	return null;
}

enum enTags entQuin(char *szT){
	if(!strcmp(szT,"person"))
		return person;
	if(!strcmp(szT,"name"))
		return name;
	if(!strcmp(szT,"first_name"))
		return first_name;
	if(!strcmp(szT,"last_name"))
		return last_name;
	if(!strcmp(szT,"profession"))
		return profession;
	return null;
}

char *szTreuEspaisInicials(char *sz){
	while(*sz == ' ' || *sz == '\t'  || *sz == 9 )
		sz++;
	return sz;
}

void vLlegeixTags(FILE* f){
	char szLinia[STR_MAX_LINE_LENGTH],szTag[STR_MAX_LINE_LENGTH];
	int nLinia = 0,i;
	enum enTags entLastTag = null;
	
	printf("{\n\t\"vip\":[\n\t{\n");
	while (fgets(szLinia,STR_MAX_LINE_LENGTH,f) != NULL){
		nLinia++;
		if(bIsTag(szLinia,szTag)){
			if(szTag[0] == '?'){
				//printf("// Línia inicial de l'XML\n");
				entLastTag = null;
			}else{
				if(szTag[0] == '/'){
					//printf("// Acaba tag\n");
					entLastTag = null;
				}else{
					entLastTag = entQuin(szTag); // o entLastTag = entQuinL(szLinia);
				}
			}
		}else
			if(entLastTag != null){
				strcpy(szLinia,szTreuEspaisInicials(szLinia));
				szLinia[strlen(szLinia)-2] = '\0';
				printf("\t\t\"%s\": \"%s\"",szTags[entLastTag],szTreuEspaisInicials(szLinia));
				if(entLastTag == profession)
					printf("\n");
				else
					printf(",\n");
			}
	}
	printf("\t}\n\t]\n}\n");
}

int main(){
	FILE *fL;
	char szNomFitxer[STR_MAX_LENGTH];

	strcpy(szNomFitxer,XML_FILE);
	if((fL=fopen(szNomFitxer,"r"))==NULL){
		printf("Error a l'intentar obrir l'arxiu %s\n",szNomFitxer);
		return 1;
	}
	//stpLectArxiu(fL);
	vLlegeixTags(fL);
	fclose(fL);
	
	return 0;
}
