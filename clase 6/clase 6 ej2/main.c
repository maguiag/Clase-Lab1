#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX 200
int main()
{
    char nombre[MAX];
    int i;
    int x;

    printf("Ingrese su nombre"):
    scanf("%s", nombre);
    x=strlen(nombre);
    printf("\La cantidad de letras es %d:",x);

    return 0;
}
