#include <stdio.h>

int main(){
    int i = 5;

    while(i){
        printf("%d ", i);//primero presenta la i y despues decrementa
        i--; // i = i - 1; o i - = 1; o --i;
    }
    printf("\n");
    i = 5;
    while(i){
        printf("%d ", i--);
        //i--; // i = i - 1; o i - = 1; o --i;
    }
    printf("\n");
    i = 5;
    while(i){
        printf("%d ", --i);//primero decrementa la i y despues presenta
        //i--; // i = i - 1; o i - = 1; o --i;
    }
    return 0;
}