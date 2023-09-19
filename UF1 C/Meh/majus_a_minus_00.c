/*
majus_a_minus_00.c
Dani Moreno
20221011
*/

#include <stdio.h>

int main(){
    char cLletra;

    printf("Una mayuscula: ");
    scanf("%c",&cLletra);
    if (cLletra >= 'A' && cLletra <= 'Z'){
        cLletra = cLletra - 'A' + 'a';
        printf("En minuscula: %c\n",cLletra);
    }else{
        cLletra = cLletra - 'a' + 'A';
        printf("En mayuscula: %c\n",cLletra);
    }
    
    

    return 0;
}