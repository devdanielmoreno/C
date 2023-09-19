// suma9i10.c
//Dani Moreno
//20221115
#include <stdio.h>
#include <time.h>
#include <stdlib.h> 

void vLlavorAleatorietat(){
    srand(time(NULL));
}

int nValorAleatori(int nMin,int nMax){
    return nMin+(rand()%(nMax-nMin+1));
}

int Dau(){
    return nValorAleatori(1,6);
}



int main(){
    int llista[1000],i,nSuma9 = 0,nSuma10 = 0 ;

    vLlavorAleatorietat();
    for(i = 0; i < 1000; i++){
        llista[i] = Dau() + Dau();
    }
    for(i = 0; i < 1000; i++){
        if (llista[i] == 9){
            nSuma9 += 1;
        }
        if (llista[i] == 10){
            nSuma10 += 1;
        }
    }
        printf("%d cops a donat nou la suma dels dos daus. I suma deu %d cops",nSuma9,nSuma10);
    printf("\n");

    return 0;
}