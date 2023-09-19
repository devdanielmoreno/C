#include <stdio.h>
#define N 10//numero de valores que hay dentro de la lista

int nValorMaximLlista(int* nLlista, int nQuantsElementsLlista){
    int nMaxim = nLlista[0],nElement;

    for(nElement = 1;nElement < nQuantsElementsLlista; nElement++){
        if(nLlista[nElement] > nMaxim){
            nMaxim = nLlista[nElement];
        }
    }
    return nMaxim;
}

int main(){
    int nVectorA[N] = {25,34,12,-3,7,15,36,56,42,30};
    int nVectorB[N] = {250,340,120,-30,70,150,360,560,420,300};

    printf("Valor maxim de la primera llista: %d \n",nValorMaximLlista(nVectorA,N));
    printf("Valor maxim de la segona llista: %d \n",nValorMaximLlista(nVectorB,N));
    return 0;
}

