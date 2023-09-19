// arguments05.c

#include <stdio.h>
#include <stdlib.h>  // Per l'atof()

int bParseFloat(char* sz){
    while (*sz) {
        if (!(((*sz >= '0') && (*sz <= '9')) || (*sz == '.') || (*sz == '-'))) {
            return 0;
        } 
        sz++;
    }
    return 1;
}

int main(int argc, char* argv[]){
    float fA, fB, fR;
    char cOperacio;

    printf("Arguments: %d\n", argc);

    if (argc == 4) {
        if (bParseFloat(argv[1]) && bParseFloat(argv[2])) {  // Si és correcte.
            if (argv[3][0] == 'a') { // Desprès farem servir strcmp()
                printf("Suma: %.2f\n", atof(argv[1]) + atof(argv[2]));  // Converteix la cadena a float i realitzo una suma.  // Converteix la cadena a float i realitzo una suma.
            } else {
                printf("Multiplico: %.2f\n", atof(argv[1]) * atof(argv[2]));
            } 
        } else {
            printf("%s o %s no són reals\n", argv[1], argv[2]);

            return 1;
        }
    } else {
        printf("Primer número: ");
        scanf("%f", &fA);
        printf("Segon número: ");
        scanf("%f", &fB);
        printf("Operació (\"a\" és per sumar): ");
        scanf("%c", &cOperacio);

        if (cOperacio == 'a') {
            printf("Suma: %.2f\n", fA + fB);  // Converteix la cadena a float i realitzo una suma.  // Converteix la cadena a float i realitzo una suma.
        } else {
            printf("Multiplicació: %.2f\n", fA * fB);  // Converteix la cadena a float i realitzo una suma.  // Converteix la cadena a float i realitzo una suma.
        }
    }

    return 0;
}