#include <stdio.h>

int nProdRec(int n){
    if(n >= 2){
        return n * nProdRec(n - 1);
    }
    return n;
}

int main(){
    int nNum;

    printf("Numero: ");
    scanf("%d",&nNum);
    printf("nProdRec(%d) = %d\n",nNum,nProdRec(nNum));
    
    return 0;
}
//este programa se multiplica a si mismo por ejemplo si pongo 10 va a multiplicar 10*9*8*7*6*5*4*3*2*1