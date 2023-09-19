// ex04previ.c
#include <stdio.h>
#define N 99

void vVocalMinusculaA_i(char* p){
    int i, n;
    char vocals[5] = "aeiou";
    for (i = 0; i < N; i++){
        for (n = 0; n < 5; n++){
            if (p[i] == vocals[n]){
                p[i] = 'i';
                break;
            }
        }
    }
}

int main(){
    char szA[N] = "Peixos pacifics (sense accent)", szB[N] = "Exfoliat";

    printf("szA original : %s\n", szA);
    vVocalMinusculaA_i(szA);
    printf("szA modificat: %s\n", szA);
    printf("szB original : %s\n", szB);
    vVocalMinusculaA_i(szB);
    printf("szB modificat: %s\n", szB);

    return 0;
}