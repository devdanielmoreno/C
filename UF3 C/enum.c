/******************************************************************************
enum01.c
20230428
*******************************************************************************/
#include <stdio.h>

enum dia {dilluns, dimarts, dimecres = 7, dijous, divendres, dissabte, diumenge};

int main(){
    enum dia avui;
    
    avui = divendres;
    if (avui == divendres){
        printf("És divendres\n");
    }else{
        printf("No és divendres\n");
    }
    printf("avui:  %d\n",(int)avui);
    avui = diumenge;
    if (avui == divendres){
        printf("És divendres\n");
    }else{
        printf("No és divendres\n");
    }

    return 0;
}
