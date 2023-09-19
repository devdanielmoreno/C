#include <stdio.h>

int main() {
    int ct;

    for(ct=0;ct<100;ct++){
        if(ct%3)continue;
        printf("el numero %d es multiple de 3\n",ct);
    }
    return 0;
}