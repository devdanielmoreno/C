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
    int nMin = 1, nMax = 100, nPensatOrdinador,nCmpt = 0,n;
    
    vLlavorAleatorietat();
    nPensatOrdinador = nValorAleatori(nMin,nMax);

    while(1){
        nCmpt++;
        printf("pon un numero entre %d y %d: ",nMin,nMax);
        scanf("%d",&n);
        if (n == nPensatOrdinador){
            printf("Enorabuena lo has hacertado en %d intents\n",nCmpt);
            break;
        }else{
            if(n > nPensatOrdinador){
                nMax = n;
            }else{
                nMin = n;
            }
        }
    }
    return 0;
}