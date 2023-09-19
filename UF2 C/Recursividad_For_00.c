/*
m4e1.c
Dani Moreno Lao
20221117
*/
#include <stdio.h>

double pot(double base, double exponent){
    if (exponent == 0){
        return 1;
    }
    return base * pot(base, exponent - 1);
}

int main(){
    double b = 2;

    for(int i=0; i<=10;i++){
        printf("%.2lf ^ %d = %.2lf\n",b, i, pot(b,i));
    }

    return 0;
}
