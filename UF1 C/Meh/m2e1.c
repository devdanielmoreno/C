/*

m2e1.c
Daniel Moreno
20221007

*/

#include <stdio.h>

int main(){
    int nEdat;
    char cTipus;

    printf("Tipus T,M,J,A: ");
    scanf("%c",&cTipus);
    printf("Edat: ");
    scanf("%d", &nEdat);

    if (cTipus == 'T'){
        printf("pasa\n");
    }else if (cTipus == 'M' && nEdat >= 13){
        printf("pasa\n");
    }else if (cTipus == 'J' && nEdat >= 16){
        printf("pasa\n");
    }else if (cTipus == 'A' && nEdat >= 18){
        printf("pasa\n");
    }else{
        printf("no pasa\n"); 
    }

    return 0;
}