#include <stdio.h>
#include <stdlib.h>
#define CANTIDAD 10
//lea 10 caracteres, cuantas vocales diferenciadas

int main()
{
    char letra;
    int vocalA=0;
    int vocalE=0;
    int vocalI=0;
    int vocalO=0;
    int vocalU=0;
    int i;

    for(i=1; i<CANTIDAD+1; i++)
    {
        printf("Ingrese una letra \n");
        scanf("%c", &letra);
        letra = tolower(letra);
        fflush(stdin);

    switch(letra)
    {
    case 'a':
        vocalA++;
        break;
    case 'e':
        vocalE++;
        break;
    case 'i':
        vocalI++;
        break;
    case 'o':
        vocalO++;
        break;
    case 'u':
        vocalU++;
        break;
    default:
        break;
    }

}
printf("Se ingresaron %d letra A, %d letra E, %d letra I, %d letra O, %d letra U", vocalA, vocalE, vocalI, vocalO, vocalU);

return 0;
}
