/*
m2e7.c
funcion 3
Dani Moreno Lao
20221020
*/
#include <stdio.h>

double lfValorAbsolut(double lf){
    if(lf < 0){
        lf *= -1;
    }
    return lf;
}
int main(){
    double x1, y1, x2, y2, x3, y3, lfA;

    printf("Introduce x1,y1,x2,y2,x3,y3 con espacios: ");
    scanf("%lf %lf %lf %lf %lf %lf", &x1, &y1, &x2, &y2, &x3, &y3);
    lfA = 0.5 * ((x1-x2)*(y3-y2)-(y1-y2)*(x3-x2));
    printf("Area: %.4lf\n", lfA);

    return 0;
}