#include "Alumno.h"

Alumno::Alumno(){
    nombre="Sin nombre";
    matricula="Sin Matricula";
    calificacion=0;
}
Alumno::Alumno(string nombre, string matricula, int calificacion){
    this->nombre= nombre;
    this->matricula=matricula;
    this->calificacion=calificacion;
}
void Alumno::setNombre(string nombre){
    this->nombre=nombre;
}
string Alumno::getNombre(){
    return nombre;
}
void Alumno::setMatricula(string matricula){
    this->matricula=matricula;
}
string Alumno::getMatricula(){
    return matricula;
}
void Alumno::setCalificacion(int calificacion){
    this->calificacion=calificacion;
}
int Alumno::getCalificacion(){
    return calificacion;
}
