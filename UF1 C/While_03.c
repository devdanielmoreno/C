/*
Dani Moreno Lao
estRep08_00.c
20221103
*/

#include <stdio.h>

int main(){
    int n = 1;
    int nSuma = 0;

    while(n<=1000){
        nSuma += n;
        n += 1;
    }
    printf("La suma dels nombres d'1 a 1000 és %d\n", nSuma);
    
    return 0;
}