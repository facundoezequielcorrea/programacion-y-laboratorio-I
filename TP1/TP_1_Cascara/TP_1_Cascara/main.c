#include <stdio.h>
#include <stdlib.h>
//#include "funciones.h"

float pedirflotante (char[]);
float sumar (float, float);
float restar (float, float);
float multiplicar (float, float);
float dividir (float, float);
float factorial (float);
float calculartodaslasoperaciones (float, float);

int main()
{
    char seguir='s';
    int opcion=0;
    float numero1;
    float numero2;
    float suma;
    float resta;
    float producto;
    float division;
    float factoria;

    while(seguir=='s')
    {
        printf("1- Ingresar 1er operando (A=%.2f)\n",numero1);
        printf("2- Ingresar 2do operando (B=%.2f)\n",numero2);
        printf("3- Calcular la suma (A+B)\n");
        printf("4- Calcular la resta (A-B)\n");
        printf("5- Calcular la division (A/B)\n");
        printf("6- Calcular la multiplicacion (A*B)\n");
        printf("7- Calcular el factorial (A!)\n");
        printf("8- Calcular todas las operacione\n");
        printf("9- Salir\n");

        scanf("%d",&opcion);
        fflush( stdin );
        //opcion= getche();

        switch(opcion)
        {
            case 1:
                numero1=pedirflotante("el primer numero: ");
                printf("el primer numero ingresado es: %.2f\n", numero1);
                fflush( stdin );
                break;
            case 2:
                numero2=pedirflotante("el segundo numero: ");
                printf("el segundo numero ingresado es: %.2f\n", numero2);
                fflush( stdin );
                break;
            case 3:
                suma=sumar(numero1, numero2);
                printf("el resultado de la suma es: %.2f\n", suma);
                break;
            case 4:
                resta=restar(numero1, numero2);
                printf("el resultado de la resta es: %.2f\n", resta);
                break;
            case 5:
                division=dividir(numero1, numero2);
                printf("el resultado de la division es: %.2f\n", division);
                break;
            case 6:
                producto=multiplicar(numero1, numero2);
                printf("el resultado de la multiplicacion es: %.2f\n", producto);
                break;
            case 7:
                factoria=factorial (numero1);
                printf("el factorial es: %f\n", factoria);
                break;
            case 8:
                suma=sumar(numero1, numero2);
                resta=restar(numero1, numero2);
                division=dividir(numero1, numero2);
                producto=multiplicar(numero1, numero2);
                printf("el resultado de la suma es: %.2f\n", suma);
                printf("el resultado de la resta es: %.2f\n", resta);
                printf("el resultado de la division es: %.2f\n", division);
                printf("el resultado de la multiplicacion es: %.2f\n", producto);
                printf("el factorial es: %d", factoria);
                break;
            case 9:
                seguir = 'n';
                break;
        }

    }
    return 0;
}


float pedirflotante (char mensaje[])
{
    float numero;

    printf("ingrese %s", mensaje);
    scanf("%f", &numero);

    return numero;
}

float sumar (float numero1, float numero2)
{
    float suma;

    suma=numero1+numero2;

    return suma;
}

float restar (float numero1, float numero2)
{
    float resta;

    resta=numero1-numero2;

    return resta;
}

float multiplicar (float numero1, float numero2)
{
    float producto;

    producto=numero1*numero2;

    return producto;
}

float dividir (float numero1, float numero2)
{
    float division;
    if (numero2==0)
    {
        printf("Error");
    }else
    {
        division=numero1/numero2;
    }
    return division;
}

float factorial (float numero1)
{
    int i;
    int resp=1;
    if (numero1<=0)
    {
        printf("Error");
    }
    else
    {
        for (i=numero1; i>=1; i--)
        {
            resp=resp*i;
        }
    }
    return resp;
}

float calculartodaslasoperaciones (float numero1, float numero2)
{
    float suma;
    float resta;
    float producto;
    float division;
    int i;
    int resp=1;

    suma=numero1+numero2;
    resta=numero1-numero2;
    producto=numero1*numero2;

    if (numero2==0)
    {
        printf("Error");
    }else
    {
        division=numero1/numero2;
    }

    if (numero1<0)
    {
        printf("Error");
    }else
    {
        for (i=numero1; i>=1; i--)
        {
            resp=resp*i;
        }
    }
    return suma, resta, producto, division, resp;
}
