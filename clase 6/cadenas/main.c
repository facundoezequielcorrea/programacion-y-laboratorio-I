#include <stdio.h>
#include <stdlib.h>

int contarpares (int [],int);
int buscarchar(char[],int,char);

int main()
{
    int vector[5]={5,2,5,6,7};

    int i;
    int j;
    int aux;

    for (i=0;i<4;i++)
    {
       for(j=i+1;j<5;j++)
       {
           if(vector[i]>vector[j])
           {
               aux=vector[i];
               vector[i]=vector[j];
               vector[j]=aux;
           }
       }
   }
   for(i=0;i<5;i++)
   {
       printf("%d\n",vector[i]);
   }

    /*char letras[5]={'f','r','e','k','m'};
    int cantidad;
    int indexletra;

    cantidad=contarpares(vector,5);
    indexletra=buscarchar(letras,5,'f');
    if(indexletra==-1)
    {
        printf("no se encontro caracter");
    }
    else
    {
        printf("el caracter se encuentra en el array\n");

    }
    printf("la cantidad de pares son: %d", cantidad);*/
    return 0;
}


/*int contarpares (int array[],int cantidad)
{
    int i;
    int contpares=0;

    for (i=0;i<cantidad; i++)
    {
        if (array[i]%2==0)
        {
            contpares++;
        }
    }

    return contpares;
}

int buscarchar(char vec[],int cantidad,char caracter)
{
    int index=-1;
    int i;
    for (i=0;i<cantidad;i++)
    {
        if(vec[i]==caracter)
        {
            index=i;
            break;
        }
    }
    return index;
}

int ordenarvector()
{
    int vector[5]={5,2,6,7,8};
    int i;
    int j;
    int aux;

   for (i=0;i<4;i++)
   {
       for(j=i+1;i<5;j++)
       {
           if(vector[i]>vector[j])
           {
               aux=vector[i];
               vector[i]=vector[j];
               vector[j]=aux;
           }
       }
   }

    printf( "a=%d ,b=%d",a,b);
}*/
