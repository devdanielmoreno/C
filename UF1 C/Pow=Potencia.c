/*
Dani Moreno Lao
20220929
ex 5
*/
#include <stdio.h>
#include <math.h>

int main(){
    double lfI, lfN, lfTAE;
    
    printf("i (en tant per 1): ");
    scanf("%lf",&lfI);
    printf("Nombre de faccionamets: ");
    scanf("%lf",&lfN);
    lfTAE = pow (1 + lfI/lfN,lfN)-1;
    printf("TAE = %.4lf en tant per 1\n",lfTAE);
    printf("TAE = %.2lf %%\n",lfTAE*100);
    
    return 0;
    
}