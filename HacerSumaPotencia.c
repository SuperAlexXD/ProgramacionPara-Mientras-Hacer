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

    int i = 0;

    do {
        int temp_resultado = 0;
        int j = 0;
            do {
            temp_resultado += resultado; 
            j++;
        }
        while (j < base);
        resultado = temp_resultado;
        i++;
    }
    while (i < exponente);  
    printf("%d\n", resultado);
    return 0;
}
