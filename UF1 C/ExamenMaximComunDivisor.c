void NetejaBuffer(){ while(getchar() != '\n'); }
int nMaximComuDiv(int u,int v){
    int t;
    if (u < 0){
        u = -1 * u;
    }
    if (v < 0){
        v = -1 * v;
    }
    while(v != 0){
        t = u;
        u = v;
        v = t%v;
        }
    return u;
}


#include <stdio.h>

int main(){
    int a,b;
    
    printf("a: ");
    scanf("%d",&a);
    NetejaBuffer();
    printf("b: ");
    scanf("%d",&b);
    printf("MCD( %d, %d ) = %d",a,b,nMaximComuDiv(a,b));
    return 0;
}