#include <stdio.h>

int main(){
    int i = 5;

    while(i){
        printf("%d ", i);
        i--;
        if(i == 2){
            break;
        }
    }
    printf("\n");
    return 0;
}