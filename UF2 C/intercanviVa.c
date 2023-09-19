// intercanviVa.c
#include <stdio.h>

void vVisualitza(int x,int y){
    printf("( %d , %d )\n",x,y);
}

void vIntercanvi(int *x, int *y){
    int nAux = *x;
    
    vVisualitza(*x,*y);
    *x = *y;
    *y = nAux;
    vVisualitza(*x,*y);
}

int main(){
    int a = 25, b = -33;
    
    vVisualitza(a,b);
    vIntercanvi(&a,&b);
    vVisualitza(a,b);
    
    return 0;
}