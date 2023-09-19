/**
vectorReals01.c
Vectors de nombres reals
20221011
***/
#include <stdio.h>

#define N_TEMPERATURES 7

int main(){
    float fTemperatures[N_TEMPERATURES],fSuma = 0.f;
    int n = 0;

    do{
        printf("temperatura[%d]: ",n+1);
        scanf("%f",&fTemperatures[n]);
        n++;
    }while(n < N_TEMPERATURES);
    for(n = 0; n < N_TEMPERATURES;n++){
        // printf("temperatura[%d]: %.2f\n",n+1,fTemperatures[n]);
        fSuma += fTemperatures[n];
    }
    printf("La mitjana de les %d temperatures és %.2fºC\n",N_TEMPERATURES,fSuma/N_TEMPERATURES);

    return 0;
}