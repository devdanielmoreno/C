/******************************************************************************
eac02_funcRef_01.c
20221122
*******************************************************************************/
#include <stdio.h>

#define N_NEGOCIS 4

float fVisualitzaCalculaRecaptacio(float *fV, int nQuants){
    int n;
    float fS = 0.f;
    
    printf("\nRecaptació per negoci:\n");
    for(n = 0; n < nQuants; n++,fV++){
        fS += *fV;
        printf("calers negoci %d: %.2feuros\n",n+1,fV[n]);
    }
    
    return fS;
}

int main(){
    float fCalers[N_NEGOCIS],fSuma;
    int i;
    
    for(i = 0; i < N_NEGOCIS; i++){
        printf("calers negoci %d: ",i+1);
        scanf("%f",&fCalers[i]);
    }
    fSuma = fVisualitzaCalculaRecaptacio(fCalers,N_NEGOCIS);
    printf("\nRecaptació total: %.2feuros\n",fSuma);

    return 0;
}