#include <stdio.h>
#include <stdlib.h>
#define numeroSecreto 26
int main()
{
 int numero;
 int intentos = 0;

 do
{
 printf("Ingrese un numero entre 1 y 100\n");
 fflush(stdin);

 scanf("%d",& numero);
 printf("\n Ingresaste el numero %d \n",numero);

 intentos++;

 while(numero<1 || numero> 100)
 {
     printf("\nError, ingrese numero entre 1 y 100\n");
     scanf("%d",&numero);
 }
        if(numero<numeroSecreto)
        {
        printf(" \nEl numero ingresado es menor al numero secreto.\n");
        scanf("%d",& numero);
        }

        if(numero>numeroSecreto)
        {
        printf(" \nEl numero ingresado es mayor al numero secreto.\n");
        scanf("%d",& numero);
        }



}while(numero!=numeroSecreto);

    if(intentos<5)
    {
        printf("\n Felicitaciones, lo lograste en menos de 5 intentos");
    }
    else if(intentos>5 && intentos<10)
    {
        printf("No esta mal");
    }
    else
    {
       printf("Practica mas");
    }

    return 0;
}
