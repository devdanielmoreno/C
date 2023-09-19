#include "dsd.h"
#define N 33

void vIntrodueixVentall_vectorial(char *sz,char cInicial,char cFinal){
    int i = 0;
    char c;

    for(c = cInicial ; c <= cFinal ; c++,i++){
        sz[i] = c;
    }
    sz[i] = '\0';
}

void vIntrodueixVentall(char *sz,char cInicial,char cFinal){
    char c;

    for(c = cInicial ; c <= cFinal ; c++,sz++){
        *sz = c;
    }
    *sz = '\0';
}

char* szVentallCaracters(char *sz,char cInicial,char cFinal){
    vIntrodueixVentall(sz,cInicial,cFinal);

    return sz;
}
