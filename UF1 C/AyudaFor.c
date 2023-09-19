#include <stdio.h>

int main(){
    int nCops, i;

    printf("Nombre de repeticións: ");
    scanf("%d",&nCops);
    for(i=0;i<nCops;i++){
        printf("Moreno %d\n",i+1);
    }
    
    return 0;
}