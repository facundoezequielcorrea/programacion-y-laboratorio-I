#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*
    int (%d)(variable entera)
    float (%f)(variable decimal)
    char (%c)(variable caracter)
    */

    int numero;
    float numero2;
    float resultado;
    char letra;

    printf("ingrese un numero entero:");
    scanf("%d", &numero);
    printf("ingrese un numero flotante: ");
    scanf("%f", &numero2);
    printf("ingrese una letra: ");
    fflush(stdin);
    scanf("%c", &letra);
    resultado=numero+numero2;

    printf("el numero es: %d\n", numero);
    printf("el numero es: %.2f\n", numero2);
    printf("la letra es: %c\n", letra);
    printf("el resultado es: %.2f\n ", resultado);
    return 0;
}
