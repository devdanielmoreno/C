/******************************************************************************
apuntadors03.c
20221125
*******************************************************************************/
#include <stdio.h>

void vVisualitza(double lf){
    printf("Número: %.2f\n",lf);
}

int main(){
    double lfN,*pLfN; // la variable double ocupa 8 bytes i l'apuntador ocupa 4
    
    printf("lfN= ");
    scanf("%lf",&lfN);
    vVisualitza(lfN);
    pLfN = &lfN;
    *pLfN *= 1000;
    vVisualitza(lfN);

    return 0;
}