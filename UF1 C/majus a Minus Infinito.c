/*
majus_a_minus_00.c
Dani Moreno
20221011
*/

#include <stdio.h>

#define Suma 32

int main(){
    char cLletra;
    while(1){
    printf("Una mayuscula: ");
    scanf("%c",&cLletra);
    if (cLletra >= 'A' && cLletra <= 'Z'){
        cLletra = cLletra + Suma;
        printf("En minuscula: %c\n",cLletra);
    }
    
    return 0;
}