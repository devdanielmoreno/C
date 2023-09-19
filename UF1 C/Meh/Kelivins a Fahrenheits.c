//m1p05.c - Conversió de milles a Km -
#include <stdio.h> //printf i scanf
#include <stdlib.h> //system()


int main(){

float Kelvin;
float Fahrenheit;

system("cls"); //esborra la pantalla
printf("Si us plau, introduïu el nombre de Kelvin\n");
scanf("%f",&Kelvin);
Fahrenheit = (Kelvin - 273.15) * 9/5 + 32; //fa el càlcul i assigna a kms
printf("%f kelins equival a %f Fahrenheits\n",Kelvin,Fahrenheit);
return 0;
}