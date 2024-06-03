#include <stdio.h>

int main() {
    int n;
    int suma = 0;
    int i = 1;

    printf("Ingrese un numero (n): ");
    scanf("%d", &n);

    while (i <= n) {
        suma += i * i;
        i++;
    }

    printf("La suma de los cuadrados hasta %d es: %d\n", n, suma);

    return 0;
}
