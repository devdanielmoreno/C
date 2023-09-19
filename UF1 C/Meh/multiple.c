#include <stdio.h>

int main(){
    int nN;

    printf("Valor de n: ",nN);
    scanf("%d",&nN);

    if(nN%5 == 0){
        printf("El numero %d es multiple de 5",nN);

    }else{
        printf("El numero %d no es multiple de 5",nN);
    }

    return 0;
}