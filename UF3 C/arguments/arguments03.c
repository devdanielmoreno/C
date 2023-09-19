// arguments03.c

#include <stdio.h>
#include <stdlib.h>  // Per l'atof()

int main(int argc, char* argv[]){
    float fA, fB, fR;
    char cOperacio;

    printf("Arguments: %d\n", argc);

    if (argc == 4) { 
        if (argv[3][0] == 'a') { // Desprès farem servir strcmp()
            printf("Suma: %.2f\n", atof(argv[1]) + atof(argv[2]));  // Converteix la cadena a float i realitzo una suma.  // Converteix la cadena a float i realitzo una suma.
        } else {
            printf("Multiplico: %.2f\n", atof(argv[1]) * atof(argv[2]));
        }
    } else {
        // printf("Exemple d'ús: ./arguments02 2 3.2 a");

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
