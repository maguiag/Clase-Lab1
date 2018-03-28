#include <stdio.h>
#include <stdlib.h>
#define CANTIDAD 5

// ingresar 5 numeros, sacar promedio

int main()
{
    int numero;
    int acumulador=0;
    float promedio;
    int i;
    int numeroMayor;
    int numeroMenor;

    for(i=1; i<CANTIDAD +1; i++)
       {
        printf("Ingrese numero \n");
        scanf("%d", &numero);

        while(numero<=0)
            {
                printf("Error, ingrese numero mayor a 0 \n");
                scanf("%d", &numero);
            }
        acumulador = acumulador + numero;

        if(numero<numeroMenor || i==1)
        {
            numeroMenor = numero;
        }
        if(numero>numeroMayor || i==1)
        {
            numeroMayor = numero;
        }

        }

    promedio = acumulador/ CANTIDAD;
    printf("\nEl promedio es de %.2f \n", promedio);
    printf("El numero mayor es %d y el menor es %d", numeroMayor, numeroMenor);
    return 0;
}
