#include <stdio.h>

int main() {
    int n;
    double suma = 0.0;

    printf("Ingrese un numero (n): ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        suma += 1.0 / i;
    }

    printf("La suma de fracciones hasta %d es: %f\n", n, suma);

    return 0;
}
