#include <stdio.h>

int main(){
    int nQN, i;
    float fInc, fNR;
    
    printf("Cantidad de numeros: ");
    scanf("%d",&nQN);
    printf("Numero real: ");
    scanf("%f",&fNR);
    printf("Increment real: ");
    scanf("%f",&fInc);

    for (i = 0;i<nQN;i++){
       printf("%d: fNR = %f",i+1,fNR);
       fNR += fInc;
    }

    return 0;
}