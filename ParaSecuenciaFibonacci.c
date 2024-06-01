#include <stdio.h>

int secuencia;
int proyectar = 1; 
int sumatoria = 0; 

int main(int argc, char const *argv[])
{
    printf("Ingrese la cantidad de números que quieres que aparezcan en la secuencia: ");
    scanf("%i", &secuencia);

    if (secuencia == 1) {
        printf("0\n");
        return 0;
    }
    else if (secuencia == 2) {
        printf("0, 1\n");
        return 0;
    }

    printf("0, 1");  

    for (int i = 2; i < secuencia; i++)
    {
        int siguiente = proyectar + sumatoria;
        printf(", %d", siguiente);

        sumatoria = proyectar;
        proyectar = siguiente;
    }

    printf("\n");
    return 0;
}
