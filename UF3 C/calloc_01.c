// m7pa2.c Reassignació de memòria
// http://www.xtec.cat/formaciotic/ateneu_historic/materials/td97/d97m7/d97m7a2.htm

#include<stdio.h>
#include<stdlib.h>

int main(){
    int dada,n=0, ct;
    int*a;

    a=(int*)malloc(sizeof(int));

    printf("Introduïu nombres enters. La introducció de -1\n");
    printf("acabarà l'entrada de dades:\n");

    do{
        scanf("%d",&dada);
        a=(int*)realloc(a,(n+2)*sizeof(int));
        a[n]=dada;
        n++;
    }while(dada!=-1);

    printf("\nS'han introduït %d números\n",n);
    for(ct=0;ct<n;ct++){
        printf("%d\t",a[ct]);
    } 

    return 0;
}