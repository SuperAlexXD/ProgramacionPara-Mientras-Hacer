#include <stdio.h>

int main() {
    int radical = 3;
    int numero;
    
    printf("Ingrese el numero que desea reducir: ");
    scanf("%i", &numero);
    
    int resultado = 0;
    int cubo = 0;
    
    do {
        resultado++;
        cubo = resultado * resultado * resultado;
    }
    while (cubo <= numero);
    resultado--;
    
    printf("Raíz cúbica: %d\n", resultado);
    
    return 0;
}
