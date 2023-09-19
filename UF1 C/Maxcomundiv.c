#include <stdio.h>

int maximComuDivisor(int u, int v){
    int t;

    if (u < 0){
        v = -1 * u;
    }if (v < 0){
        u = -1 * v;
    }while(v != 0){
        t = u;
        u = v;
        v = t% v;
    }
    return u;
}

int main(){
    int a, b;
    
    printf("a: ");
    scanf("%d",&a);
    printf("b: ");
    scanf("%d",&b);
    printf("MCD( %d . %d ) = %d",a,b,maximComuDivisor(a,b));
    
    return 0;
}