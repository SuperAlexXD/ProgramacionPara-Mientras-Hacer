#include <stdio.h>

int esPrimo(int num) {
    if (num <= 1) return 0;
    for (int i = 2; i <= num / 2; i++) {
        if (num % i == 0) return 0;
    }
    return 1;
}

int main() {
    int n;
    int contador = 0;
    int i = 2;

    printf("Ingrese un numero: ");
    scanf("%d", &n);

    while (i <= n) {
        if (esPrimo(i)) {
            contador++;
        }
        i++;
    }

    printf("Hay %d numeros primos hasta %d\n", contador, n);

    return 0;
}
