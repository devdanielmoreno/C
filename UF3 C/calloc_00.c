// m7pa1.c - Construcció d'una matriu dinàmicament -
// http://www.xtec.cat/formaciotic/ateneu_historic/materials/td97/d97m7/d97m7a1.htm
#include <stdio.h>
#include <stdlib.h>

int main(){
    int i,j,n;
    double *a;

    printf("Introduïu la dimensió de la matriu: ");
    scanf("%d", &n);
    a=(double*)calloc(n*n, sizeof(double));
    //alternativa1: a=(double*)malloc(n*n*sizeof(double));
    //alternativa2: a=new double[n*n];

    //lectura dels elements de la matriu
    for (i=0;i<n;i++){
        for (j=0;j<n;j++){
            printf("a(%d,%d)= ", i+1,j+1);
            scanf("%lf", a+i*n+j);
        }
    }

    //escriptura dels elements de la matriu
    for (i=0;i<n;i++){
        for (j=0;j<n;j++){
                printf("a(%d,%d)= %lf\n", i+1, j+1,*(a+i*n+j));
        }
    }
    free (a);
    //  si s'ha fet servir l'alternativa 2: delete(a);
    
    return 0;
}