#include <stdio.h>

int main(){
    int n=0;
    do{
        printf("numero entre 10 i 20 (incluidos): ");
        scanf("%d",&n);
    }while((n < 10) || (n > 20));
    printf("Has escrito %d",n);
    return 0;
}