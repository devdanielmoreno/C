#include <stdio.h>
#include <time.h>
#include <stdlib.h> // Pel rand() i srand()
#define N_QUANTS 6
#define LLE 15
void NetejaBuffer(){ while(getchar() != '\n'); }
void vLlavorAleatorietat(){
    srand(time(NULL)); // Llavor d'aleatorietat (seed random)
}
int nValorAleatori(int nMin,int nMax){
    return nMin+(rand()%(nMax-nMin+1));
}
int main(){
    int n,nColumnes,y;
    char lista[] = "1X2";
    vLlavorAleatorietat();
    printf("Cuantas columnas tiene: ");
    scanf("%d",&nColumnes);
    NetejaBuffer();
    for(n = 0;n < LLE ;n++){
        for(y = 0;y < nColumnes ;y++){
        printf("! %c !",lista[nValorAleatori(0,2)]);
        }
    printf("\n");
    }
    return 0;
}