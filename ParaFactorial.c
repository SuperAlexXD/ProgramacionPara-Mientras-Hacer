#include <stdio.h>

int main(int argc, char const *argv[])
{
    int fact;
    int multiplicar = 1;

    printf("Ingrese un numero para calcular su factorial: \n");
    scanf("%i", &fact);

    for (int i = 1; i <= fact; i++)
    {
        multiplicar = multiplicar * i;
    }
    
    printf("El factorial de %d es: %d\n", fact, multiplicar);
    return 0;
}
