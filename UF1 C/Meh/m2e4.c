/*
m2e4.c
Dani Moreno
20221013
*/

#include <stdio.h>

int main(){
    double a,b,r,x,y;

    printf("a,b,r,x,y amb espais: ");
    scanf("%lf %lf %lf %lf %lf",&a,&b,&r,&x,&y);

if ((x-a)*(x-a)+(y-b)*(y-b)<=r*r){
    printf("dins");
}else{
    printf("fora");
}
    return 0;
}