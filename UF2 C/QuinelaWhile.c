#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define N_QUANTS 6
#define LLENCAMENTS 15

void vLlavorAletorietat(){
    srand(time(NULL));
}

int nAleatori(int nMin, int nMax){
    return nMin + rand()%(nMax-nMin+1);
}

int main(){
    int n, y=0, nColumnes;
    char szResultats[] = "1X2";

    vLlavorAletorietat();
    printf("Columnes: ");
    scanf("%d",&nColumnes);
    //for(y=0; y < LLENCAMENTS; y++){
    while(y < LLENCAMENTS){
        //for (n = 0; n < nColumnes; n++){
        n=0;
        while (n < nColumnes){
            printf("%c ",szResultats[nAleatori(0,2)]);
            n++;
        }
        printf("\n");
        y++;
    }

    return 0;
}