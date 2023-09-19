/*
m2e5.c
Dani Moreno
20221013
*/

#include <stdio.h>
#include <math.h>
double mitjaa(double x,double y,double z){
    return(x+y+z)/3;
}
double mitjag(double x,double y,double z){
    return pow(x*y*z,1./3);
}
double var(double x,double y,double z){
    return mitjaa(x*x,y*y,z*z)-(mitjaa(x,y,z)*mitjaa(x,y,z));
}
double dt(double x,double y,double z){
    return pow(var(x,y,z),1./2);
}
int main(){
    double a,b,c,n;

    printf("a,b,c(separt per espais): ");
    scanf("%lf %lf %lf",&a,&b,&c,&n);
    printf("la mitjana aritmetica de %.2lf, %.2lf i %.2lf es %.3lf\n",a,b,c,mitjaa(a,b,c));
    printf("la mitjana geometrica de %.2lf, %.2lf i %.2lf es %.3lf\n",a,b,c,mitjag(a,b,c));
    printf("la variansa de %.2lf, %.2lf i %.2lf es %.3lf\n",a,b,c,var(a,b,c));
    printf("la desviacio tipica de %.2lf, %.2lf i %.2lf es %.3lf\n",a,b,c,dt(a,b,c));

return 0;
}