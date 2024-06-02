#include <stdio.h>

int main() {
    int numero = 0;
    int suma = 0;

    printf("Ingrese un numero: ");
    scanf("%i", &numero);

    for (int i = 1; i <= numero; i++) {
        suma = suma + i;
    }

    printf("La suma de los numeros hasta %d es: %d\n", numero, suma);

    return 0;
}
