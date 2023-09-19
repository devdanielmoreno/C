/*
Dani Moreno Lao
estRep05    _00.c
20221028
*/
#include <stdio.h>

int main () {
    int i = 2,n = 32;

    while(n <= 30){
        if(n%2 == 0){
        printf("%d es parell\n",n);
        }  
        n += 1;
    }
    printf("\n");
    return 0;
}