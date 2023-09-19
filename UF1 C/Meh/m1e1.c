/*
Dani Moreno Lao
m1e1.c
20220923
*/
#include <stdio.h>

int main ( ) {  
    char szCadena[55],cC,szCodiPostal[10];

    printf("Introduce un municipio sin espacios ni caracteres: ");
    scanf("%s %c",&szCadena[0],&cC);
    printf("Codi Postal: ");
    scanf("%s",szCodiPostal);
    printf("Los datos introduidos son: %s %c %s\n", szCadena, cC, szCodiPostal);

    return 0;

}