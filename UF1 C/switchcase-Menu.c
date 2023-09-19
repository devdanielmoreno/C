//ex01_RA-3.c

#include <stdio.h>

void vTextMenu(){
    printf("1) ex01_RA1-1\n");
    printf("2) ex01_RA1-3\n");
    printf("3) ex01_RA2-2\n");
    printf("\n x) Surt\n");
}
char cMenu(){
    char c, cEnter;
        do{
            vTextMenu();
            printf("\nSelecciona una opcion: ");
            scanf("%c",&c);
            scanf("%c",&cEnter);//Esto se come el enter de despues del caracter
                if(!((c == '1')||(c == '2')||(c == '3')||(c == 'x')||(c == 'X'))){
                    printf("\n**********Aprenem a lleguir?**************\n");
                }
        }while(!(((c == '1')||(c == '2')||(c == '3')||(c == 'x')||(c == 'X'))));

        return c;
}

int main(){
    char cM;

    while(1){
    cM = cMenu();
    switch (cM){
        case '1': printf("\n**********Opcio 1**********\n");
                    break;
        case '2': printf("\n**********Opcio 2**********\n");
                    break;
        case '3': printf("\n**********Opcio 3**********\n");
                    break;
        case 'X':
        case 'x': printf("*********Opcio Surt**********\n");
                    return 0;
                    break;
        default : printf("\n**********Aqui no hi arribo mai**********\n");
    }
}
    return 0;
}