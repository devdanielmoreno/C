#include <stdio.h>

#define N_NEGOCIS 5
float fVisualitzaCalculaRecaptacio(float *fV, int nQuants){
    int n;
    float fS = 0.f;
    printf("\nRecaptació per negoci:\n");
    for(n = 0; n < nQuants; n++){
        fS += fV[n];
        printf("setmana %d: %.2f€\n",n+1,fV[n]);
    }
    
    return fS;
}

int main(){
    char nom[20];
    float fCalers[N_NEGOCIS],fSuma;
    int i;
    printf("responsable del negoci: ");
    scanf("%s",nom);
    for(i = 0; i < N_NEGOCIS; i++){
        printf("setmana %d: ",i+1);
        scanf("%f",&fCalers[i]);
    }
    fSuma = fVisualitzaCalculaRecaptacio(fCalers,N_NEGOCIS);
    printf("\nHola %s la recaptació total es: %.2f€\n",nom,fSuma);
    return 0;
}