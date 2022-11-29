#include "Materia.h"

Materia::Materia(){
    nombre="Sin nombre";
    nombreProfesor="Sin nombre";
}
Materia::Materia(string nombre, string nombreProfesor){
    this->nombre=nombre;
    this->nombreProfesor=nombreProfesor;
}
void Materia::setNombre(string nombre){
    this->nombre=nombre;
}
string Materia::getNombre(){
    return nombre;
}
void Materia::setNombreProfesor(string nombreProfesor){
    this->nombreProfesor=nombreProfesor;
}
string Materia::getNombreProfesor(){
    return nombreProfesor;
}
void Materia::agregarAlumno(Alumno a, int pos){
    alumnos[pos]=a;
}

int Materia::calcularPromedio(){
    int promedo=0;
    int suma=0;
    int contadorCalificaciones=0;
    for(int i=0;i<10;i++){
        if(alumnos[i].getNombre()!="Sin nombre"){
            suma=suma+alumnos[i].getCalificacion();
            contadorCalificaciones+=1;
        }
    }
    return suma/contadorCalificaciones;
}
