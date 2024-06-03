#include <stdio.h>

int main() {
    int n;
    int triangular = 0;
    int i = 1;

    printf("Ingrese un numero (n): ");
    scanf("%d", &n);

    if (n >= 1) {
        do {
            triangular = triangular + i;
            i++;
        } while (i <= n);
    }

    printf("El numero triangular %d-esimo es: %d\n", n, triangular);

    return 0;
}
