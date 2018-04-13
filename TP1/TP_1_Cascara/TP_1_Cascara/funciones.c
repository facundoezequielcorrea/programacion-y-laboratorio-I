#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"


/** \brief funcion que pide numeros
 *
 * \return el numero ingresado
 *
 */
float pedirflotante (char mensaje[])
{
    float numero;

    printf("ingrese %s", mensaje);
    scanf("%f", &numero);

    return numero;
}

/** \brief funcion que suma 2 numeros
 *
 * \param numero 1
 * \param numero 2
 * \return el resultado de la suma
 *
 */
float sumar (float numero1, float numero2)
{
    float suma;

    suma=numero1+numero2;

    return suma;
}
/** \brief funcion que resta 2 numeros
 *
 * \param numero 1
 * \param numero 2
 * \return el resultado de la resta
 *
 */
float restar (float numero1, float numero2)
{
    float resta;

    resta=numero1-numero2;

    return resta;
}
/** \brief funcion que multiplica 2 numeros
 *
 * \param numero 1
 * \param numero 2
 * \return el resultado de la producto
 *
 */
float multiplicar (float numero1, float numero2)
{
    float producto;

    producto=numero1*numero2;

    return producto;
}
/** \brief funcion que divide 2 numeros y valida que el divisor no sea 0
 *
 * \param numero 1
 * \param numero 2
 * \return el resultado de la division
 *
 */
float dividir (float numero1, float numero2)
{
    float division;
    if (numero2==0)
    {
        printf("Error no se puede dividir por 0\n");
    }else
    {
        division=numero1/numero2;
    }
    return division;
}
/** \brief saca el factorial de un numero
 *
 * \param numero 1
 * \return el resultado del factorial
 *
 */
int factorial (float numero1)
{
    int i;
    int resp=1;

    for (i=numero1; i>=1; i--)
    {
        resp=resp*i;
    }

    return resp;
}
/** \brief funcion que valida que no se pueda sacar factorial de numero negativo o decimal
 *
 * \param numero 1
 *
 */
void validarfactorial(float numero1)
{
    int A;
    float B;

    A=numero1;
    B=numero1;
    B=B-A;

    while (numero1<0 || B>0)
    {
        printf("Error no se puede sacar factorial de numeros decimales o negativos\n");
        break;
    }
    return 0;
}
