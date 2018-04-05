#include <stdio.h>
#include <stdlib.h>

int pedirentero (char[], int, int);
int validarentero (char[],int,int,int);

int main()
{
    int numero1;
    int numero2;

    numero1=pedirentero ("numero1: ",1,9999999);
    numero2=pedirentero ("numero2: ",1,9999999);

    printf("el numero ingresado es: %d", numero1);
    printf("\nel numero ingresado es: %d", numero2);
}

int pedirentero (char mensaje[], int min, int max)
{
    int numero;

    printf("ingrese %s", mensaje);
    scanf("%d", &numero);

    numero=validarentero(mensaje,numero,min,max);

    return numero;
}

int validarentero (char mensaje[],int dato,int min,int max)
{
     while (dato<min || dato>max)
    {
        printf("error reingrese %s", mensaje);
        scanf("%d", &dato);
    }
}
