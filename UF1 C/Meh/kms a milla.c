/*
Dani Moreno
*/
#include <stdio.h>

int main() {
    float fkms, fmilles;
    
    printf("kms: ");
    scanf("%f",&fkms);
    fmilles = fkms / 1.61;
    printf("%.2f kms = %.2f milles\n",fkms,fmilles);
    
    return 0;
}
