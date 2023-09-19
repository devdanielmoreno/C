/*
estrep03_01.c
Daniel Moreno 
20221025
*/
#include <stdio.h>

int main () {
    int num,nR = 1,n;

    printf("n: ");
    scanf("%d",&num);
    for(n = 1; n <= num; n++){
        nR *= n;
    }
    printf("%d! = %d\n",num,nR);
    return 0;
}