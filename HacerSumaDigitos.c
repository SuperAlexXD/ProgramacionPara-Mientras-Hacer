#include <stdio.h>

int residuo;
int sumares = 0;
int num;

int main(int argc, char const *argv[])
{
    printf("Ingrese un numero:");
    scanf("%i", &num);

    int temp_num = num;
    int digitos = 0;

do
    {
        temp_num /= 10;
        digitos++;
    }
while (temp_num > 0);

do
    {
        residuo = num % 10;
        sumares += residuo;
        num = num / 10;
        digitos--;
    }
    while (digitos > 0);
    
    printf("%d\n", sumares);
    return 0;
}
