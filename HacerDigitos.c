#include <stdio.h>

int main() {
    int numero, suma = 0;

    printf("Ingrese un numero: ");
    scanf("%i", &numero);

    if (numero == 0) {
        suma = 0;
    } else {
        do {
            suma += numero % 10;
            numero /= 10;
        } while (numero > 0);
    }

    printf("La suma de los dígitos es: %d\n", suma);

    return 0;
}
