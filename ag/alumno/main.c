#include <stdio.h>
#include <stdlib.h>
#include "alumno.h"

void cargar(Alumno** array, int cantidad)
void mostar(Alumno* array, int cantidad)

int main()
{
    Alumno* arrayPunteroAlumnos[50];
    cargar (arrayPunteroAlumnos, 50);
    mostrar(arrayPunteroAlumnos, 50);
    return 0;
}
void cargar(Alumno** array, int cantidad) // **porque es un array de punteros
{
    int i;
   //** Alumno* auxiliarAlumno  //**extras que se pueden agregar

    for(i=0; i<cantidad; i++)
    {  //** auxiliarAlumno=alumno_new()
        *(array+ i)= alumno_new(); // si tengo el puntero uso el operador flecha para acceder al campo
        //mal es hacer *(array+i).edad=10+i;
       //** alumno_setEdad(auxiliarAlumno, i+10)
    }
}

void mostar(Alumno* array, int cantidad)
// puedo incrementar el puntero directamente
// se pierde de donde empieza el array
{
    for(;cantidad>0; array++, cantidad--)
    {
        alumno_getEdad(*array, &auxiliarEdad);
        printf("%d\n", auxiliarEdad) ;
    }

}

