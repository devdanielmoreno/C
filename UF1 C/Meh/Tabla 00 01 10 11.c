/*
m2e3.c
Dani Moreno
20221011
*/

#include <stdio.h>

int main(){
    int p,q;

    p=0; q=0;
    
    printf("p: %d\t q: %d\t!(%d||%d): %d\t!%d&&!%d: %d\n",
                p,q,p,q,!(p||q),p,q,!p&&!q);
    printf("p: %d\t q: %d\t!(%d&&%d): %d\t!%d||!%d: %d\n",
                p,q,p,q,!(p&&q),p,q,!p||!q);
    p=0; q=1;
    
    printf("p: %d\t q: %d\t!(%d||%d): %d\t!%d&&!%d: %d\n",
                p,q,p,q,!(p||q),p,q,!p&&!q);
    printf("p: %d\t q: %d\t!(%d&&%d): %d\t!%d||!%d: %d\n",
                p,q,p,q,!(p&&q),p,q,!p||!q);
    p=1; q=0;
    
    printf("p: %d\t q: %d\t!(%d||%d): %d\t!%d&&!%d: %d\n",
                p,q,p,q,!(p||q),p,q,!p&&!q);
    printf("p: %d\t q: %d\t!(%d&&%d): %d\t!%d||!%d: %d\n",
                p,q,p,q,!(p&&q),p,q,!p||!q);
    p=1; q=1;
    
    printf("p: %d\t q: %d\t!(%d||%d): %d\t!%d&&!%d: %d\n",
                p,q,p,q,!(p||q),p,q,!p&&!q);
    printf("p: %d\t q: %d\t!(%d&&%d): %d\t!%d||!%d: %d\n",
                p,q,p,q,!(p&&q),p,q,!p||!q);
    

    return 0;
}