#include <stdio.h>
#include <stdlib.h>
#define TAM 5

void mostrarvector(int[],int);
int maximovalor(int[],int);
void cargarvector(int [],int);
int buscarnumero (int [],int,int);

int main()
{
    int maximo;
    int vector [TAM]={};
    int i;
    int posnumero;

    for (i=0; i<TAM; i++)
    {
        vector[i]=0;
    }

    for (i=0; i<TAM; i++)
    {
        printf("Ingrese valor de vector: ");
        scanf("%d", &vector[i]);
    }

    if (buscarnumero(vector,TAM,5))
    {
        posnumero= buscarnumero(vector,TAM,5);
        printf("la posicion del numero es: %d", posnumero);
    }

    /*for (i=0; i<5; i++)
    {
        //vector[i]=7;
        printf("el vector contiene: %d\n", vector[i]);
    }*/
    mostrarvector(vector, TAM);
    maximo= maximovalor(vector, TAM);
    printf("el valor maximo es: %d", maximo);
    return 0;
}

void mostrarvector(int vec[],int tamanio)
{
    int i;
    for (i=0; i<tamanio; i++)
    {
        printf("el vector contiene: %d\n", vec[i]);
    }
}

int maximovalor(int vec[],int tamanio)
{
    int i;
    int max;
    for (i=0; i<tamanio; i++)
    {
        if (max<vec[i] || i==0)
        {
            max=vec[i];
        }
    }
    return max;
}

void cargarvector(int vec[],int tamanio)
{
    int i;
    for (i=0; i<tamanio; i++)
    {
        printf("Ingrese valor de vector: ");
        scanf("%d", &vec[i]);
    }
}

int buscarnumero (int vec[],int tamanio,int numerobusc)
{
    int resp=-1;
    int i;
    for (i=0; i<tamanio; i++)
    {
        if (numerobusc==vec[i])
        {
            resp=i;
        }
    }
    return resp;
}
