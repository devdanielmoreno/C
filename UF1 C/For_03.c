/*
estRep13.py
Daniel Moreno Lao
20221108
*/
#include <stdio.h>

int main () {
    int nTaula,n;

    for(nTaula = 1;nTaula < 6;nTaula++){
        printf("Taula del %d:\n",nTaula);
        for(n=0;n<11;n++){
            printf("%d x %d\t= %d\n",n,nTaula,n*nTaula);
        }
        printf("-----\n");
    }
    return 0;
}