#include <stdio.h>

int main(int argc, char const *argv[])
{
    int fact;
    int multiplicar = 1;

    printf("Ingrese un numero para calcular su factorial: \n");
    scanf("%i", &fact);

    int i = 1; 
while(i <= fact)
    {
        multiplicar = multiplicar * i;
        i++;
    }
    
    printf("El factorial de %d es: %d\n", fact, multiplicar);
    return 0;
}
