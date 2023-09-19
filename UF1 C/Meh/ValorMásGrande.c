/*

05_enunciat.c
Daniel Moreno
20221006

*/

#include <stdio.h>

int main(){
    int a,b,c;
    
    printf("a: ");
    scanf("%d",&a);
    printf("b: ");
    scanf("%d",&b);
    printf("c: ");
    scanf("%d",&c);
    if (a>=b && a>=c){
        printf("%d es el nombre mes gran\n",a);
    }else if(b>=a && b>=c){
        printf("%d es el nombre mes gran\n",b);
    }else{
        printf("%d es el nombre mes gran\n",c);
    }
    return 0;
}
