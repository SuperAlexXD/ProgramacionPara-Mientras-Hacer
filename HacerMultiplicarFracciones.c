#include <stdio.h>

int main() {
    int n;
    double producto = 1.0;
    int i = 1;

    printf("Ingrese un numero (n): ");
    scanf("%d", &n);

    if (n >= 1) {
        do {
            producto *= 1.0 / i;
            i++;
        } while (i <= n);
    }

    printf("El producto hasta %d es: %f\n", n, producto);

    return 0;
}
