#include <stdio.h>

int main() {
    int n;
    double producto = 1.0;

    printf("Ingrese un numero (n): ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        producto *= 1.0 / i;
    }

    printf("El producto hasta %d es: %f\n", n, producto);

    return 0;
}
