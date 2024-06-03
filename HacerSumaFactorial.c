#include <stdio.h>

int factorial(int num) {
    int fact = 1;
    for (int i = 1; i <= num; i++) {
        fact *= i;
    }
    return fact;
}

int main() {
    int n, suma = 0;
    int i = 1;

    printf("Ingrese un numero (n): ");
    scanf("%d", &n);

    if (n >= 1) {
        do {
            suma += factorial(i);
            i++;
        } while (i <= n);
    }

    printf("La suma es: %d\n", suma);

    return 0;
}
