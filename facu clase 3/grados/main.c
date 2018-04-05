#include <stdio.h>
#include <stdlib.h>

/*Declaracion o prototipo o firma de la funcion
tener en cuenta:
tipo de dato que devuelve la funcion (entero, flotante, char, void, double, long)
identificador o nombre da la funcion (nombre representativo: vervo+objeto)
parametros de entrada (declaro variable por cada parametro que recibe la funcion)*/

int mostrareincrementar (int);

int main()
{
    /*float gradosf;
    float gradosc;

    printf("ingresar grados fahrenheit");
    scanf("%f", &gradosf);

    gradosc= (gradosf-32)/1.8;

    printf("\nlos grados celcius son: %.2f", gradosc);*/
    int numero;
    int incremento;
    printf("ingrese numero: ");
    scanf("%d", &numero);
    //llamada a la funcion
    incremento=mostrareincrementar(numero);//parametro actual;

    printf("\nel numero incrementado es: %d", incremento);

    return 0;
}
//implementacion o desarrollo de la funcion
int mostrareincrementar (int numero)//parametro formal
{
    int retorno;

    printf("el numero ingresado es: %d", numero);
    retorno=numero+10;

    return retorno;
}
