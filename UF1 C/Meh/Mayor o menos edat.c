#include <stdio.h>
int main()
{
    char szNom[30];
    int nEdat;

printf("Com et dius?: ");
scanf("%s", szNom);
printf("Edat?: ");
scanf("%d", &nEdat);
    if (nEdat < 18){
printf("Et dius %s y tens %d anys eres menor de edat \n", szNom, nEdat);
}
    else{
printf("Et dius %s y tens %d anys eres mayor de edat\n", szNom, nEdat);
}



    return 0;
}
