#ifndef MATERIA_H
#define MATERIA_H
#include <string>
#include "Alumno.h"
using namespace std;

class Materia{
    private:
        string nombre;
        string nombreProfesor;
        Alumno alumnos[10];
    public:
        Materia();
        Materia(string nombre, string nombreProfesor);
        void setNombre(string nombre);
        string getNombre();
        void setNombreProfesor(string nombreProfesor);
        string getNombreProfesor();
        void agregarAlumno(Alumno a, int pos);
        int calcularPromedio();
};

#endif
