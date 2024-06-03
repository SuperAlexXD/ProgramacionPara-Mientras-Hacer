#include <stdio.h>

int main() {
    int n;
    double suma = 0.0;
    int i = 1;

    printf("Ingrese un numero (n): ");
    scanf("%d", &n);

    while (i <= n) {
        suma += 1.0 / i;
        i++;
    }

    printf("La suma hasta %d es: %f\n", n, suma);

    return 0;
}
