/*
Comptar caràcters en C
*/
#include <stdio.h>
#include <string.h>

int main(){
   char szA[]="Una frase amb paraules",szB[99];
   
   printf("szA: \"%s\" té %d caràcters\n",szA,(int)strlen(szA));

   return 0;
}