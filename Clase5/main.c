#include <stdio.h>
#include <stdlib.h>
#define QTY 10
#include "utn.h"
#include "libClase5.h"

// en c pongo desarrollo de la fc
// en h pongo solo la fc
//fc que calcule promedio
int main()
{
    int i;
    int arrayNumero [QTY];
    int auxiliarNumero;


    for(i=0; i<QTY; i++)
    {
        getInt("\nNumero: "&auxiliarNumero);
        printf("%d", auxiliarNumero);
        arrayNumero[i]=auxiliarNumero;

    }
    return 0;
}
