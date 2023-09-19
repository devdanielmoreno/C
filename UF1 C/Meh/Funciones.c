//m1p06.c - taules matemàtiques -
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){

   double x;

   printf("Funcions matemàtiques\n");
   printf("Intruduïu el valor inicial d'x: ");
   scanf("%lf",&x); 
   system("cal");
   printf("Funcions matemàtiques\n\n");
   printf("x\tx^2\tx^3\tsqrt(x)\tx^(-1)\tln(x)\tlog(x)\texp(x)\n");
printf("_____________________________________________\n\n");
printf("%.2lf\t%.2lf\t%.2lf\t%.2lf\t%.2lf\t%.2lf\t%.2f\t%.2f\n"
,x,x*x,x*x*x,sqrt(x),1/x,log(x),log10(x),exp(x));

return 0;

}