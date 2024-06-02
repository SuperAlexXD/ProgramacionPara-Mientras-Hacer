#include <stdio.h>

int main() {
    int numero = 0;
    int suma = 0;
    int i = 1;

    printf("Ingrese un numero: ");
    scanf("%i", &numero);

    do {
        suma = suma + i;
        i++;
    } while (i <= numero);

    printf("La suma de los numeros hasta %d es: %d\n", numero, suma);

    return 0;
}
