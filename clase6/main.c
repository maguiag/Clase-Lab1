#include <stdio.h>
#include <string.h>
#define MAX 10
int main(void)
{
    char palabra[MAX];
    int i,cantidadLetras;
    printf("\ningrese nombre: ");
    scanf("%10s",palabra);
    cantidadLetras = strlen(palabra);
    printf("\nla cantidad de letras de %s es %d: ",palabra,cantidadLetras);
    if(esEntero(palabra) == 1)
        printf("\nEs entero");
    else
        printf("\nNo es entero");

    return 0;
}
