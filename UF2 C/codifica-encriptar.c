/******************************************************************************
codifica00.c

20230221
*******************************************************************************/
#include <stdio.h>
#define N_MAX 99

void vIncrementaCaracterDeCadena(char* sz){
    int i = 0;
    
    while(sz[i] != '\0'){
        if (sz[i] != ' '){
            if (sz[i] == 'Z'){
                sz[i] = 'A';
            }else if (sz[i] == 'z'){
                sz[i] = 'a';
            }else{
                sz[i] = sz[i] + 1; 
            }
        }
        i++;
    }
}

int main(){
    char szText[N_MAX],c;
    
    printf("Escriviu un text: ");
    scanf("%[^\n]",szText); // Fent servir %s no admet espais. Aixi SI (pero em queda penjant el \n)
    printf("Heu escrit: \"%s\"\n",szText);
    // printf("Escriviu un caràcter: ");
    scanf("%c",&c); // Menja \n
    // scanf("%c",&c);
    // printf("Heu escrit: \"%c\"\n",c);
    vIncrementaCaracterDeCadena(szText);
    printf("Heu escrit(+1): \"%s\"\n",szText);
    
    return 0;
}
