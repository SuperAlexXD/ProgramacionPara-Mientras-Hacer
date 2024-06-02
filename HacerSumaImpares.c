#include <stdio.h>

int main() {
    int m;
    int suma = 0;
    int i = 1;

    printf("Ingrese un numero (m): ");
    scanf("%d", &m);

    if (m >= 1) {
        do {
            suma = suma + i;
            i = i + 2;
        } while (i <= m);
    }

    printf("La suma hasta %d es: %d\n", m, suma);

    return 0;
}
