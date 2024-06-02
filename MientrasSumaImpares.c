#include <stdio.h>

int main() {
    int m;
    int suma = 0;
    int i = 1;

    printf("Ingrese un numero (m): ");
    scanf("%d", &m);

    while (i <= m) {
        suma = suma + i;
        i += 2;
    }

    printf("La suma hasta %d es: %d\n", m, suma);

    return 0;
}
