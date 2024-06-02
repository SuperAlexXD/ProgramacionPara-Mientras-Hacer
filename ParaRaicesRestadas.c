#include <stdio.h>

int main() {
    int radical = 3;
    int numero;
    
    printf("Ingrese el numero que desea reducir: ");
    scanf("%i", &numero);
    
    int resultado = 0;
    int cubo = 0;
    
    while (cubo <= numero) {
        resultado++;
        cubo = resultado * resultado * resultado;
    }
    
    resultado--;
    
    printf("Raíz cúbica: %d\n", resultado);
    
    return 0;
}
