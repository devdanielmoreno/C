#include <stdio.h>

int suma(int n) {
    if (n == 1) {
        return 1;
    } else {
        return n + suma(n-1);
    }
}

int main() {
    int n;
    printf("pon un numero: ");
    scanf("%d", &n);
    printf("La suma de %d es %d\n", n, suma(n));
    return 0;
}
//este programa se suma a si mismo por ejemplo si pongo 10 va a sumar 10+9+8+7+6+5+4+3+2+1
