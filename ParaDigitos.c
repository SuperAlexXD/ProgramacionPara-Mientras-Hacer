#include <stdio.h>

int main() {
    int numero, suma = 0;

    printf("Ingrese un numero: ");
    scanf("%i", &numero);

    int temp_numero = numero;
    int digitos = 0;
    while (temp_numero > 0) {
        temp_numero /= 10;
        digitos++;
    }

    for (int i = 0; i < digitos; i++) {
        suma += numero % 10;
        numero /= 10;
    }

    printf("La suma de los dígitos es: %d\n", suma);

    return 0;
}
