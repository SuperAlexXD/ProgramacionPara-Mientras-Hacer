#include <stdio.h>

int main() {
    int num1;
    int num2;

    printf("Ingrese el primer numero: ");
    scanf("%d", &num1);

    printf("Ingrese el segundo numero: ");
    scanf("%d", &num2);

    do {
        if (num1 > num2) {
            num1 = num1 - num2;
        } else {
            num2 = num2 - num1;
        }
    } while (num1 != num2);

    printf("La respuesta es: %d\n", num1);

    return 0;
}
