#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"

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

float pedirflotante (char[], float, float);
float validarflotante (char[],float,float,float);

float main()
{
    float numero1;
    float numero2;

    numero1=pedirflotante ("numero1: ",1,9999999);
    numero2=pedirflotante ("numero2: ",1,9999999);

    printf("el numero ingresado es: %.2f", numero1);
    printf("\nel numero ingresado es: %.2f", numero2);
}

float pedirflotante (char mensaje[], float min, float max)
{
    float numero;

    printf("ingrese %s", mensaje);
    scanf("%.2f", &numero);

    numero=validarflotante(mensaje,numero,min,max);

    return numero;
}

float validarflotante (char mensaje[],float dato,float min,float max)
{
     while (dato<min || dato>max)
    {
        printf("error reingrese %s", mensaje);
        scanf("%.2f", &dato);
    }
}
