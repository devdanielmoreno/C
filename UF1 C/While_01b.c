/*
Dani Moreno Lao
estRep04_01.c
20221028
*/
#include <stdio.h>

int main () {
    int n = 20;

    while(n <= 30){
        if(n%2 == 0){
        printf("%d es parell\n",n);
        }  
        n += 1;
    }
    printf("\n");
    return 0;
}