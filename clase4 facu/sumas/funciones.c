#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"

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

float pedirflotante (char mensaje[], float min, float max)
{
    float numero;

    printf("ingrese %s", mensaje);
    scanf("%d", &numero);

    numero=validarflotante(mensaje,numero,min,max);

    return numero;
}

float validarflotante (char mensaje[],float dato,float min,float max)
{
     while (dato<min || dato>max)
    {
        printf("error reingrese %s", mensaje);
        scanf("%d", &dato);
    }
}
