    /*
    Dani Moreno Lao
    20220930
    ex 7
    */
#include <stdio.h>
#include <math.h>

int main(){
    double a,b,c; 
    double disc;
    double x1,x2; 

    printf("\nintroduiu els coeficients a, b i c\n");
    scanf("%lf %lf %lf",&a,&b,&c);
    disc=b*b-4*a*c;
    x1=(-b+sqrt(disc))/(2*a);
    x2=(-b+sqrt(disc))/(2*a);
    printf("x1= %lf, x2= %lf\n",x1,x2);
    
    return 0;
    
}