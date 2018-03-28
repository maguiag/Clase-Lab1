#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numeroUno;
    int numeroDos;
    int numeroTres;
    int numeroMayor;

    printf("Ingrese el 1er numero\n");
    scanf("%d", &numeroUno);

    printf("Ingrese el 2do numero\n");
    scanf("%d", &numeroDos);

    printf("Ingrese el 3er numero\n");
    scanf("%d", &numeroTres);
    printf(" Los numeros son: %d %d %d", numeroUno, numeroDos, numeroTres);

    if(numeroUno>numeroDos && numeroUno>numeroTres)
    {
        numeroMayor = numeroUno;
    }

    else if( numeroDos>numeroUno && numeroDos>numeroTres)
    {
        numeroMayor = numeroDos;
    }

    else
    {
        numeroMayor = numeroTres;
    }

    printf("\n El numero mayor es: %d", numeroMayor);

    return 0;
}
