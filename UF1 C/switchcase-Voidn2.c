#include <stdio.h>

void vMenu(){
    printf("1) Hola\n");
    printf("2) Adeu\n");
    printf("3) Surt\n");
}

int nQuinaOpcio(){
    int n;

    printf("\n\nEscolliu una opcio: ");
    scanf("%d", &n);

    return n;
}

void vPensa(int nO){
    switch(nO){
        case 1: printf("Hola\n");
                break;
        case 2: printf("Adeu\n");
                break;
        case 3: printf("Surto\n");
                break;
        default: printf("Manca de comprensió lectora?\n");
    }
}

int main(){
    int nOpcio;

    do{
    vMenu();
    nOpcio = nQuinaOpcio();
    vPensa(nOpcio);
    }while (nOpcio != 3 );

    return 0;
}