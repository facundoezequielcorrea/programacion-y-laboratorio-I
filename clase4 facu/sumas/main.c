#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"

void sumar1 (void);

void suma2 (int,int);

int suma3 (void);

int suma4 (int,int);

int main()
{
    sumar1();
    suma2(5,4);
    int resultado;
    resultado=suma3();
    printf("la suma es; %d", resultado);
    return 0;
}

void sumar1 (void)
{
    int numero1;
    int numero2;
    int suma;

    numero1= pedirentero("ingrese numero 1: ",1,1000);
    numero2= pedirentero("ingrese numero 1: ",1,1000);

    suma= numero1+numero2;

    printf("la suma es: %d", suma);
}

void suma2 (int n1,int n2)
{
    int suma;

    suma= n1+n2;

    printf("la suma es: %d", suma);
}

int suma3 (void)
{
    int numero1;
    int numero2;
    int suma;

    numero1= pedirentero("ingrese numero 1: ",1,1000);
    numero2= pedirentero("ingrese numero 1: ",1,1000);

    suma= numero1+numero2;
    return suma;
}

int suma4 (int n1,int n2)
{
    int suma;

    suma= n1+n2;

    return suma;
}
