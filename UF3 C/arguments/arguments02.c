// arguments02.c

#include <stdio.h>
#include <stdlib.h>  // Per l'atof()

int main(int argc, char* argv[]){

    printf("Arguments: %d\n", argc);

    if (argc == 4) { 
        if (argv[3][0] == 'a') { // Desprès farem servir strcmp()
            printf("Suma: %.2f\n", atof(argv[1]) + atof(argv[2]));  // Converteix la cadena a float i realitzo una suma.  // Converteix la cadena a float i realitzo una suma.
        } else {
            printf("Multiplico: %.2f\n", atof(argv[1]) * atof(argv[2]));
        }
    } else {
        printf("Exemple d'ús: ./arguments02 2 3.2 a");
    }

    return 0;
}
