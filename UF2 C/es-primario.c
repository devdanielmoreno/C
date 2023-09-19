#include <stdio.h>

#ifndef TRUE
    #define TRUE 1
#endif
#ifndef FALSE
    #define FALSE 0
#endif

int bEsNumeroPrimer(int n){
    int bEsPrimer = TRUE, i;

    for(i = 2;i<n ;i++){
        if(n%i == 0){
            bEsPrimer = FALSE;
            break;
        }
    }
    return bEsPrimer;
}

int main(){
    int nA;
    printf("n: ");
    scanf("%d",&nA);
    if(bEsNumeroPrimer(nA)){
        printf("%d és primer\n",nA);
    }else{
        printf("%d no és primer\n",nA);
    }
    return 0;
}