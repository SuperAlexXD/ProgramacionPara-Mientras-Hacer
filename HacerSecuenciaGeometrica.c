#include <stdio.h>

int main() {
    int n;
    int a = 1; 
    int r = 2; 
    int suma = 0;
    int i = 0;

    printf("Ingrese el numero de terminos (n): ");
    scanf("%i", &n);

    if (n > 0) {
        do {
            suma = suma + a;
            a = a * r; 
            i++;
        } while (i < n);
    }

    printf("La suma de la secuencia geometrica es: %d\n", suma);

    return 0;
}
