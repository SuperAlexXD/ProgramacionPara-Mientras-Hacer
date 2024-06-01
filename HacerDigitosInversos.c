#include <stdio.h>

int main(int argc, char const *argv[])
{
    int num;
    
    printf("Ingrese el numero que desea invertir: ");
    scanf("%i", &num);

    printf("El numero invertido es: ");

    int digitos = 0;
    int valor = num;
    int i = 0;
    do {
        valor /= 10;
        digitos++;
    }
    while (valor != 0);

    do{
        int residuo = num % 10;  
        printf("%d", residuo);   
        num /= 10; 
        i++;            
    }
    while (i < digitos);
    printf("\n");  
    return 0;
}
