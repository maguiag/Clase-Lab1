#include <stdio.h>
#include <stdlib.h>
#define T 5
#include <conio.h>

int buscarLibre(int[], int[]); //-1 fuera de rango, esta ocupado

int main()
{
          int idProducto [T] ={};
          char descripcion [T] [50]; //2 dimensiones max vector max caracteres
          int stock[T];
          float precioUnitario[T];
          int opcion;
          char seguir='s';
          int posicion;
          int i;

 do
 {
     printf("1- cargar \n2- mostrar \n3- ordenar\n 4-salir\n");
     printf("Ingrese una opcion");
     scanf("%d", &opcion);

        switch(opcion)
            {
            case 1:
                printf("cargo\n");
                //llamar fc
                int buscarLibre()

                do
                { //carga aleatoria
                    printf("ingrese la posicion: ");
                    scanf("%d", &posicion);

                    printf("ingrese id: ");
                    scanf("%d", &idProducto[posicion-1]); //xq arranca dd 0 y seguro ponen pos 1

                    printf("ingrese descripcion: ");
                    fflush(stdin);
                    gets(descripcion[posicion-1]);
                    //fgets cuenta el \0
                    // scanf("%[^\n]", descripcion[posicion-1]); para linux igual que el gets

                    printf("ingrese stock");
                    scanf("%d", &stock[posicion-1]);

                    printf("ingrese precio unitario: ");
                    scanf("%f", &precioUnitario[posicion-1]);

                    printf("desea continuar? (s\n): ");
                    seguir = getche(); //getche devuelve 1 caracter

                } while(seguir=='s');
                break;

            case 2:
                printf("muestra");
                for(i=0; i<T; i++)
                {
                    if (idProducto[i]!=0)
                    printf("%5d %20s %5d %5.2f\n", idProducto[i], descripcion[i], stock[i], precioUnitario[i]);
                }
                /* for mostrar vector paralelo
                */
               /* scanf();
                break;
            case 3:
                printf("ordena");
                scanf();
                break;
            case 4:
               seguir ='n';
                break;
*/
            }

 }while(opcion !=9);




    return 0;
}
