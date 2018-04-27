#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main()
{
    char word [20];
    char secondword[20];
    printf("\nIngrese una palabra:\n");
    /*scanf("%s", word);
    printf("\nUsted ingreso: %s", word);
    */

    gets(word);
    strcpy(secondword, word);

    printf("Se ingreso %s y la copia es %s ",word, secondword);

/*
    printf("\nIngrese una segunda palabra:\n");
    scanf("%s", secondword);
    printf("\nUsted ingreso: %s", secondword);

    if(strcmp(word,secondword)==0)
    {
        printf("\nLa palabras son iguales");
    }
    else
    {
        printf("\nLas palabras son diferentes");
    }
*/
}
