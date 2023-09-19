/*
m2e2.c
Dani Moreno
20221011
*/

#include <stdio.h>

int main(){
    double a,b,c,d,e,f,x,y;
    printf("a: ");
    scanf("%lf",&a);
    printf("b: ");
    scanf("%lf",&b);
    printf("c: ");
    scanf("%lf",&c);
    printf("d: ");
    scanf("%lf",&d);
    printf("e: ");
    scanf("%lf",&e);
    printf("f: ");
    scanf("%lf",&f);

    x=(e*d-b*f)/(a*d-b*c);
    y=(a*f-e*c)/(a*d-b*c);
    printf("x = %.4lf, y = %.4lf",x,y);

    return 0;
}