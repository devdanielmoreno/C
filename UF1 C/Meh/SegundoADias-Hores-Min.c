#include <stdio.h>

int main()
{
    int nSegonsInicials,nSegonsFinals,nMinutsInicials,nDiesFinals;
    int nMinutsFinals,nHoresInicials,nHoresFinals,nDiesInicials;

    printf("Nombre de segons: ");
    scanf("%d", &nSegonsInicials);
    nSegonsFinals = nSegonsInicials%60;
    nMinutsInicials = nSegonsInicials/60;
    nMinutsFinals = nMinutsInicials%60;
    nHoresInicials = nMinutsInicials/60;
    nHoresFinals = nHoresInicials%24;
    nDiesInicials = nHoresInicials/24;
    nDiesFinals = nDiesInicials;
    printf("%d dies, %d hores, %d minuts, %d segons",
        nDiesInicials, nHoresFinals, nMinutsFinals, nSegonsFinals);

    return 0;
}