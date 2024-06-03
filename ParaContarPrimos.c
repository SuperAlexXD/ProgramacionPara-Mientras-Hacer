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

    printf("Ingrese un numero: ");
    scanf("%d", &n);

    for (int i = 2; i <= n; i++) {
        if (esPrimo(i)) {
            contador++;
        }
    }

    printf("Hay %d numeros primos hasta %d\n", contador, n);

    return 0;
}
