#include <stdio.h>

int main() {
    int n;
    int triangular = 0;

    printf("Ingrese un numero (n): ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        triangular =  triangular + i;
    }

    printf("El numero triangular %d-esimo es: %d\n", n, triangular);

    return 0;
}
