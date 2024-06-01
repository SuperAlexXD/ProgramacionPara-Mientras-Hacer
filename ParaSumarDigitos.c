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

    while (temp_num > 0)
    {
        temp_num /= 10;
        digitos++;
    }

    for (int i = 0; i < digitos; i++)
    {
        residuo = num % 10;
        sumares += residuo;
        num = num / 10;
    }
printf("%d", sumares);
    return 0;
}
