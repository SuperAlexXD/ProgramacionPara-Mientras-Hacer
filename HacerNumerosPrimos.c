#include <stdio.h>

int main() {
    int numero;
    esPrimo = 1;
    int i = 2;

    printf("Ingrese un numero: ");
    scanf("%i", &numero);

    if (numero <= 1) {
        esPrimo = 0;
    } else {
        do {
            if (numero % i == 0) {
                esPrimo = 0;
            }
            i++;
        } while (i <= numero / 2 && esPrimo);
    }

    if (esPrimo) {
        printf("%d es un numero primo.\n", numero);
    } else {
        printf("%d no es un numero primo.\n", numero);
    }

    return 0;
}
