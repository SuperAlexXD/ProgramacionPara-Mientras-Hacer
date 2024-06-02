#include <stdio.h>

int main() {
    int numero = 0;
    int suma = 0;
    int i = 1;

    printf("Ingrese un numero: ");
    scanf("%i", &numero);

    while (i <= numero) {
        suma = suma + i;
        i++;
    }

    printf("La suma de los numeros hasta %d es: %d\n", numero, suma);

    return 0;
}
