// arguments00.c

#include <stdio.h>
#include <stdlib.h>  // Per l'atoi()

int main(int argc, char* argv[]){
    printf("Arguments: %d\n", argc);

    if (argv[3][0] == 'a') { // Desprès farem servir strcmp()
        printf("Suma\n"); 
    } else {
        printf("Multiplico\n");
    }
    printf("Argument 1: %d\n", atoi(argv[1]));
    printf("Argument 2: %f\n", atof(argv[2]));

    return 0;
}
