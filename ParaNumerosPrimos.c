#include <stdio.h>

int main() {
    int numero;
    int esPrimo = 1;

    printf("Ingrese un numero: ");
    scanf("%i", &numero);

    if (numero <= 1) {
        esPrimo = 0;
    } else {
        for (int i = 2; i <= numero / 2 && esPrimo; i++) {
            if (numero % i == 0) {
                esPrimo = 0;
            }
        }
    }

    if (esPrimo) {
        printf("%d es un numero primo.\n", numero);
    } else {
        printf("%d no es un numero primo.\n", numero);
    }

    return 0;
}
