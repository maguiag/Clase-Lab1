#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX 100
#inlude "clase6.h"
int main()
{
    char cadena[MAX];
    int length;
    int numero;

    printf("Ingrese un algo: ");
    scanf ("%s", cadena);
    length = strlen (cadena);
    if(length > 0)
    {
        if (esEntero(cadena))
        {
            printf ("Si es un entero.\n");
            numero=atoi(cadena);
            printf("Lo pasamos a numero:%d",numero);
        }
        else
        {
            printf("No es un entero.\n");
        }
    }

    return 0;
}
