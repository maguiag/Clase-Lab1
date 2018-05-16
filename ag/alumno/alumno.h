typedef struct
{
    int edad;
}Alumno;

Alumno* alumno_new() //constructor // donde dice alumno lo reemplazo por ediciones, pantalllas, etc
void alumno_delete(Alumno*this) // destructor //this es el contexto
int alumno_setEdad(Alumno *this, int edad)
int alumno_getEdad(Alumno* this, int*edad)
