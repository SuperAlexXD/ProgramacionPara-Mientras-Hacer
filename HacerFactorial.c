#include <stdio.h>

int main(int argc, char const *argv[])
{
    int fact;
    int multiplicar = 1;

    printf("Ingrese un numero para calcular su factorial: \n");
    scanf("%i", &fact);

    int i = 1; 
    do
    {
        multiplicar = multiplicar * i;
        i++;
    }
    while(i <= fact);
    
    printf("El factorial de %d es: %d\n", fact, multiplicar);
    return 0;
}
