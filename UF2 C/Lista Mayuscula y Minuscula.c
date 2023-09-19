#include <stdio.h>

#define Suma 32

int main(){
    char szNom[] = "Nom Cognom1 Cognom2",szMinuscules[99],szMajuscules[99];
    int i;
    printf("dasd: ");
    scanf("%s",szNom);
    for(i = 0; szNom[i];i++){
        if((szNom[i] >= 'A') && (szNom[i] <= 'Z')){
            szMinuscules[i] = szNom[i] + Suma;
        }else{
            szMinuscules[i] = szNom[i];
        }
    }
   szMinuscules[i] = szNom[i]; // El darrer caràcter. Allà a on hi ha el '\0'
    printf("En minúscules: \"%s\"\n",szMinuscules);
    
    for(i = 0; szNom[i];i++){
        if((szNom[i] >= 'a') && (szNom[i] <= 'z')){
            szMajuscules[i] = szNom[i] - Suma;
        }else{
            szMajuscules[i] = szNom[i];
        }
    }
   szMajuscules[i] = szNom[i]; // El darrer caràcter. Allà a on hi ha el '\0'
    printf("En majúscules: \"%s\"\n",szMajuscules);
    
    return 0;
}
