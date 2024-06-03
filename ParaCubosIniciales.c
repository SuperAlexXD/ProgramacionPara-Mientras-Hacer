#include <stdio.h>

int main() {
    int n;
    int suma = 0;

    printf("Ingrese un numero (n): ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        suma += i * i * i;
    }

    printf("La suma hasta %d es: %d\n", n, suma);

    return 0;
}
