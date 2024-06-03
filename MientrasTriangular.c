#include <stdio.h>

int main() {
    int n;
    int triangular = 0;
    int i = 1;

    printf("Ingrese un numero (n): ");
    scanf("%d", &n);

    while (i <= n) {
        triangular = triangular + i;
        i++;
    }

    printf("El numero triangular %d-esimo es: %d\n", n, triangular);

    return 0;
}
