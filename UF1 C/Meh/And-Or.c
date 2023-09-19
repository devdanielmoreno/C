/*
06_enunciat.c
Daniel Moreno
20221007
*/

#include <stdio.h>

int main(){
    int nAny;
    
    printf("Any: ");
    scanf("%d",&nAny);
    if (nAny%4 == 0 && nAny%100 != 0 || nAny%400 == 0){
        printf("%d es de traspas\n",nAny);
    }else{
        printf("%d no es de traspas\n",nAny);
    }
    return 0;
}