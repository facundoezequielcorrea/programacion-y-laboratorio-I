/*ingresar numeros distintos de 0, no se sabe cuantos
mostrar:
1) cantidad de pares
2) cantidad de impares
3) porcentaje de numeros positivos y negativos
4) maximo y minimo
5) maximo numero par
6) cantidad de numeros entre 125 y 236*/


#include <stdio.h>
#include <stdlib.h>

int main()
{
    char masdatos= ' ';
    int numero;
    int cantpar=0;
    int cantimpar=0;
    int cantpos=0;
    int cantneg=0;
    int porcenpos;
    int porcenneg;
    int contnumero=0;
    int numeromax=-9999;
    int numeromin=9999;
    int numeromaxpar;
    int cantnumentre=0;

    while (masdatos!='n')
    {
        printf("ingrese un numero: ");
        scanf("%d", &numero);
        while (numero==0)
        {
            printf("ingrese un numero nuevamente: ");
            scanf("%d", &numero);
        }
        contnumero=contnumero+1;
        if (numero%2==0)
        {
            cantpar=cantpar+1;
        }
        if (numero%2!=0)
        {
            cantimpar=cantimpar+1;
        }
        if (numero>0)
        {
            cantpos=cantpos+1;
        }
        if (numero<0)
        {
            cantneg=cantneg+1;
        }
        if (numero>numeromax)
        {
            numeromax=numero;
        }
        if (numero<numeromin)
        {
            numeromin=numero;
        }
        if (numero>0 && numero%2==0 && cantpar!=0)
        {
            numeromaxpar=numero;
        }
        if (numero>125 && numero<236)
        {
            cantnumentre=cantnumentre+1;
        }
        printf("desea ingresar mas numeros?");
        fflush(stdin);
        scanf("%c", &masdatos);
    }
    if (cantneg!=0 || cantpos!=0)
    {
        porcenpos=(cantpos*100)/contnumero;
        porcenneg=(cantneg*100)/contnumero;
    }
    printf("la cantidad de numeros pares son: %d", cantpar);
    printf("\nla cantidad de numeros impares son: %d", cantimpar);
    if (cantneg!=0 || cantpos!=0)
    {
        printf("\nel porcentaje de positivos es: %d", porcenpos);
        printf("\nel porcentaje de negativos es: %d", porcenneg);
    }
    printf("\nel numero maximo es: %d", numeromax);
    printf("\nel numero minimo es: %d", numeromin);
    printf("\nel numero maximo par es: %d", numeromaxpar);
    if (cantpar!=0)
    {
        printf("\nla cantidad de numeros entre 125 y 236 es: %d", cantnumentre);
    }
    //printf("Hello world!\n");
    return 0;
}
