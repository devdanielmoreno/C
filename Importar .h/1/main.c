#include <stdio.h>
#include "dsd.h"
#define N 33

int main(){
    char szVentall[N];

    printf("%s\n",szVentallCaracters(szVentall,'u','z'));

    return 0;
}
//esto se tiene que compilar en el cmd asi: gcc -g main.c dsd.c -o main 