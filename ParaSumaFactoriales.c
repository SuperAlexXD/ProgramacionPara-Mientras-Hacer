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

    printf("Ingrese un numero (n): ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        suma += factorial(i);
    }

    printf("La suma es: %d\n", suma);

    return 0;
}
