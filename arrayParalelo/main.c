#include <stdio.h>
#include <stdlib.h>
#define TAMANIO 5


int main()
{
    // datos hardcodeados...
    char apellido[TAMANIO][20]={"Lopez", "Alvarez", "Zapata", "Perez", "Albornoz"};
    int nota1[TAMANIO][20]={10,4,2,9,8};
    int nota2[TAMANIO]={1,8,2,8,10};
    float promedio[TAMANIO];
    int i =0;

    for(i=0; i<TAMANIO; i++)
    {
        promedio[i]=sacarPromedio(nota1[i],nota2[i]);
        printf("\Nota 1: %d\n", nota1[i]);
        printf("\Nota 2: %d\n", nota2[i]);
        printf("\tPromedio: %.2f\n", promedio[i]);
        printf("\tApellido: %s\n", apellido[i]);
    }



    return 0;
}
