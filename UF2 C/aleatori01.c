/*
aleatori01.c
Dani Moreno
20221104
*/
#include <stdio.h>
#include <time.h>
#include <stdlib.h> // Pel rand() i srand()

void vLlavorAleatorietat(){
    srand(time(NULL)); // Llavor d'aleatorietat (seed random)
}

int nValorAleatori(int nMin,int nMax){
    return nMin+(rand()%(nMax-nMin+1));
}

int main(){
    int i;

    vLlavorAleatorietat();
    for(i = 0; i < 50; i++)
        printf("%d ",nValorAleatori(23,26));
    printf("\n");

    return 0;
}