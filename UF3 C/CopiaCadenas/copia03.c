/*
Còpia a partir de certa posició
*/
#include <stdio.h>
#include <string.h>

int main(){
    char szA[]="Una frase amb paraules",szB[99];
    
    printf("szA: \"%s\" té %d caràcters\n",szA,(int)strlen(szA));
    strcpy(szB,&szA[0]);// strcpy(szB,szA);
    printf("szB: \"%s\" te %d caràcters\n",&szB[14],(int)strlen(&szB[14]));
    strcpy(szB,&szA[4]);
    printf("szB: \"%s\" te %d caràcters\n",szB,(int)strlen(szB));

    return 0;
}