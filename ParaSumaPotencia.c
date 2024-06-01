#include <stdio.h>

int base;
int exponente;
int resultado = 1;

int main(int argc, char const *argv[])
{
    printf("Ingrese el numero: ");
    scanf("%i", &base);
    printf("Ingrese el exponente: ");
    scanf("%i", &exponente); 

    if (exponente == 0) {
        printf("1\n");  
        return 0;
    }

    for (int i = 0; i < exponente; i++) {
        int temp_resultado = 0;
        for (int j = 0; j < base; j++) {
            temp_resultado += resultado;  
        }
        resultado = temp_resultado;
    }

    printf("%d\n", resultado);
    return 0;
}
