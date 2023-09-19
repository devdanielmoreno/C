//m3p06.c - menú d'entrada -

#include<stdio.h>
#include<stdlib.h>

void opcio1();
void opcio2();
void opcio3();
void opcio4();
void opcio5();

int main(){
   char sel;

 

   system("clear");
   printf("Exemple de menú\n\n\n");
   printf("1. Descripció selecció 1\n\n");
   printf("2. Descripció selecció 2\n\n");
   printf("3. Descripció selecció 3\n\n");
   printf("4. Descripció selecció 4\n\n");
   printf("4. Descripció selecció 5\n\n");
   printf("esc. sortir\n\n");

   printf("\n\n Seleccioneu una opció...");

   do{
       sel=getc(stdin); //literalmente scanf
   }while((sel<'1' || sel>'5')&&sel!=27); //esc=ASCII 27

   switch(sel){
       case '1':
            opcio1();
            break;

       case '2':
            opcio2();
            break;

       case '3':
            opcio3();
            break;

       case '4':
            opcio4();
            break;
            
       case '5':
            opcio5();
            break;

       case 27:
            //sortida
            break;

       default:;
       //en aquest cas no hi ha possibilitat d'un altre cas
       //ja que la senténcia do...while comprova que l'entrada
       //es trobi entre 1 i 4.

    }
return 0;
}

void opcio1(){
    printf("Ha seleccionat la primera opció\n");
}

void opcio2(){
    printf("Ha seleccionat la segona opció\n");
}

void opcio3(){
    printf("Ha seleccionat la tercera opció\n");
}

void opcio4(){
    printf("Ha seleccionat la quarta opció\n");
}
void opcio5(){
    printf("Ha seleccionat la cinquena opció\n");
}