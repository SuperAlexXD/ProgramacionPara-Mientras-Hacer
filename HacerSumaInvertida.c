#include <stdio.h>

int main() {
    int n;
    double suma = 0.0;
    int i = 1;

    printf("Ingrese un numero (n): ");
    scanf("%d", &n);

    if (n >= 1) {
        do {
            suma += 1.0 / i;
            i++;
        } while (i <= n);
    }

    printf("La suma de la serie fraccionaria hasta %d es: %f\n", n, suma);

    return 0;
}
