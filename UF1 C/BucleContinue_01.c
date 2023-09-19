#include <stdio.h>

int main(){
    int ct;

    for(ct=0;ct<19;ct++){
        if(ct%3){
            continue;
        } 
        printf("el número %d és múltiple de 3\n",ct);
    }

    return 0;
}