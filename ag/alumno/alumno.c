#include "alumno.h"

Alumno* alumno_new() //constructor // donde dice alumno lo reemplazo por ediciones, pantalllas, etc
{
    return malloc(sizeof(Alumno));
}

void alumno_delete(Alumno*this) // destructor //this es el contexto
{
    free(this);
}

int alumno_setEdad(Alumno *this, int edad)
{
    int retorno =-1;
    if(this != NULL && edad >=0)
    {
        retorno =0;
        this ->edad=edad;
    }
    return retorno;
}

int alumno_getEdad(Alumno* this, int*edad)
{
    int retorno =-1;
    if(this1=NULL && edad!=NULL)
    {
        retorno =0;
        *edad =this->edad;
    }
    return retorno;
}

