#include <stdio.h>

int main() {
    int m;
    int suma = 0;

    printf("Ingrese un numero (m): ");
    scanf("%d", &m);

    for (int i = 1; i <= m; i = i + 2) {
        suma = suma i;
    }

    printf("La suma hasta %d es: %d\n", m, suma);

    return 0;
}
