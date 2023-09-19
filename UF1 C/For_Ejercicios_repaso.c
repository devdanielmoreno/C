/*
eac01.c
Daniel Moreno
20221028
*/
#include <stdio.h>
void NetejaBuffer(){ while(getchar() != '\n'); }

int main(){
    char nom[20], curs[4];
    double nota, notafinal;
    int notes = 0;

    printf("Hola com et dius? ");
    scanf("%s",nom);
    NetejaBuffer();
    printf("curs? ");
    scanf("%s",curs);
    NetejaBuffer();
    for(notafinal = 0;notes != 5;notes++){
        printf("Posa una nota que has obtingut a programació: ");
        scanf("%lf", &nota);
        NetejaBuffer();
        notafinal = notafinal + nota;
    }
    printf("Hola %s del curs %s la mitjana aritmetica de les teves notes és: %.2lf",nom,curs,notafinal/5);

    return 0;
}