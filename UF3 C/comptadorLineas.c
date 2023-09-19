    // comptadorLinies.c
    // Comptador de línies
    // http://www.xtec.cat/formaciotic/ateneu_historic/materials/td97/d97m8/d97m8p2.htm
    #include <stdio.h>
    #include <string.h>

    int main(){
    FILE *apuntador;
    char cadena[80];
    int nComptador = 0;

    // lectura 
    if (( apuntador = fopen("maench.txt","r"))==NULL)
        puts("\nNo puc crear l'arxiu: maench.txt");
    else{
        while (fgets(cadena,80,apuntador) != NULL){ // Lectura línia a línia
            //printf("%s",cadena);
            nComptador++;
        }
        fclose(apuntador);
    }
    printf("Aquest arxiu te %d linies\n", nComptador);
    return 0;
    }
