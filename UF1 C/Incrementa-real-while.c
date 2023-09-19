
#include <stdio.h>

int main(){
    int nQN,n=1;
    double lfNR,fInc;

    printf("quantitat de numeros: ");
    scanf("%d",&nQN);
    printf("número real: ");
    scanf("%lf",&lfNR);
    printf("increment real: ");
    scanf("%lf",&fInc);
    while (n < nQN+1){
        printf("Interació %d: fNR = %lf\n",n,lfNR);
        lfNR = lfNR + fInc;
        n++;
    }
    return 0;
}