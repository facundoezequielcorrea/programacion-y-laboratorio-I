#include <stdio.h>
#include <stdlib.h>

/*int main()
{
    int numero;
    int i;
    int resp=1;
    printf("ingrese numero: ");
    scanf("%d", &numero);
    for (i=numero; i>=1; i--)
    {
        resp=resp*i;
    }
    printf("el factorial es: %d", resp);
    return 0;
}*/

/*#include <stdio.h>*/
int factorial(int);
int main()
{
    int valor;
    int result;
    printf("Ingrese numero: ");
    scanf("%d",&valor);
    result=factorial(valor);
    printf("\nEl factorial de %d es %d",valor,result);
}

int factorial(int n)
{
    int resp;
    if(n==0)
    {
        resp= 1;
    }
    else
    {
        resp= n* factorial(n-1);
    }
    return (resp);
}
