/*
Còpia de cadenes
*/
#include <stdio.h>
#include <string.h>

int main(){
   char szA[]="Una frase amb paraules",szB[99];
   
   printf("szA: \"%s\" té %d caràcters\n",szA,(int)strlen(szA));
   strcpy(szB,szA);// szB = szA;
   printf("szB: \"%s\" té %d caràcters\n",szB,(int)strlen(szB));

   return 0;
}