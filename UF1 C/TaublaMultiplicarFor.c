#include <stdio.h>

int main () {
    int nTaula,n;

    printf("Taula de multiplicar: ");
    scanf("%d",&nTaula);
    n = 0;
    for(;n <= 10;){
        printf("%d x %d \t= %d\n",nTaula,n,nTaula*n);
        n += 1;
    }
    return 0;
}