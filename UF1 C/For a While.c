#include <stdio.h>

int main(){
    int i;//Declaracion
    int x = 3;// Instalacion(Declaracion y Asignacion a la vez)

    i = 7;//Asignacion
    while(i < 10){//Condicion
        printf("%d ", i);
        i = i + 1;//Incrementa
    }
    printf("\n");
    for(i = 7 ; i < 10 ; i = i + 1){// (Assignacion ; Condicion ; Incrementa)
        printf("%d ", i);
    }
    printf("\n");
    i = 7; 
    for( ; i < 10 ; ){// (Assignacion ; Condicion ; Incrementa)
        printf("%d ", i);
        i = i + 1;
    }
    printf("\n");
    for(i = 7 ; i < 10 ; i ++){// (Assignacion ; Condicion ; Incrementa)
        printf("%d ", i);
    }
    printf("\n");
    return 0;
}