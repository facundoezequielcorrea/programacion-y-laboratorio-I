#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"

float pedirflotante (char mensaje[])
{
    float numero;

    printf("ingrese %s", mensaje);
    scanf("%d", &numero);

    return numero;
}

/*float validarflotante (char mensaje[],float dato,float min,float max)
{
     while (dato<min || dato>max)
    {
        printf("error reingrese %s", mensaje);
        scanf("%d", &dato);
    }
}*/

float suma (numero1, numero2)
{
    float suma;

    suma=numero1+numero2;

}
