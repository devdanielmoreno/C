/*
Còpia d'uns quants caràcters
*/
#include <stdio.h>
#include <string.h>

int main(){
    char szA[]="Una frase amb paraules",szB[99];
    
    printf("szA: \"%s\" té %d caràcters\n",szA,(int)strlen(szA));
    // strcpy(szB,szA);// szB = szA;
    printf("szB: \"%s\" te %d caràcters\n",szB,(int)strlen(strncpy(szB,szA,5)));

    return 0;
}