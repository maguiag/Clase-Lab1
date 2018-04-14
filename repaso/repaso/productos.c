#include "productos.h"
#include <stdio.h>
#include <string.h>
int buscarLibre(int id[], int tam)
{

    int index =-1;
    int i;
    for(i=0; i<tam; i++)
    {
        if(id[i]==0)
        {
            index =i; // si encuentro lugar disponible, cargo index con la var de control; salgo
        }
    }
    return index;
}
void mostrarProductos(int idProducto[], char descripcion[][50],int stock[], float precioUnitario[], int cantidad) //fc muestra// 50 es cant d bits
{
    int i;
    for(i=0; i<cantidad; i++)
    {
        if (idProducto[i]!=0)
            printf("%5d %20s %5d %5.2f\n", idProducto[i], descripcion[i], stock[i], precioUnitario[i]);
        break;
    }
}

}

void ordenarProductos(int idProducto[], char descripcion[][50],int stock[], float precioUnitario[], int cantidad) //fc muestra// 50 es cant d bits
{
int auxInt;
float auxFloat;
char auxString[50];
int i;
int j;

for(i=0; i<cant-1; 1++)
{
    for(j=1+1;j<cant; j++)
    {
        if(strcmp(descripcion[i],descripcion[j])>0)
        {
            strcpy((auxString, descripcion [i])); //copio la cadena en desc en aux
            strcpy(descripcion[i], descripcion[j]);
            strcpy(descripcion[j], auxString);

            auxInt= idProducto[i];
            idProducto[i]=idProducto[j];
            idProducto[j]=auxInt;

            auxInt=stock[i];
            stock[i]=stock[j];
            stock[j]=auxInt;


        }
    }
}
}
