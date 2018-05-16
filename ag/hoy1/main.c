#include <stdio.h>
#include <stdlib.h>

typedef struct
{
    int edad;
}Alumno;

int main()
{
    Alumno arrayAlumnos[50];
    cargar (arrayAlumnos, 50);
    mostrar(arrayAlumnos, 50);
    return 0;
}
void cargar(Alumno* array, int cantidad)
{
    int i;
    for(i=0; i<cantidad; i++)
    {
        (array+ i)->edad=10+i; // si tengo el puntero uso el operador flecha para acceder al campo
        //mal es hacer *(array+i).edad=10+i;

    }
}

void mostar(Alumno* array, int cantidad)
// puedo incrementar el puntero directamente
// se pierde de donde empieza el array
{
    for(;cantidad>0; array++, cantidad--)

       printf("%d\n", array->edad) ;
}
