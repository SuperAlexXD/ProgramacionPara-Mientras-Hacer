#include <stdio.h>

int main() {
    int radical = 3;
    int numero;
    
    printf("Ingrese el numero que desea reducir: ");
    scanf("%i", &numero);
    
    int resultado = 0;
    int cubo = 0;

    for (resultado = 1; resultado * resultado * resultado <= numero; resultado++) {
        cubo = resultado * resultado * resultado;
    }

    resultado--;  

    printf("Raíz cúbica aproximada: %d\n", resultado);

    return 0;
}
