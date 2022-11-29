#ifndef ALUMNO_H
#define ALUMNO_H
#include <string>
using namespace std;

class Alumno{
    private:
        string nombre;
        string matricula;
        int calificacion;
    public:
        Alumno();
        Alumno(string nombre, string matricula, int calificacion);
        void setNombre(string nombre);
        string getNombre();
        void setMatricula(string matricula);
        string getMatricula();
        void setCalificacion(int calificacion);
        int getCalificacion();
};

#endif
