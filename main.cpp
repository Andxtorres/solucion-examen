#include <iostream>
#include "Materia.h"
using namespace std;

int main(){
    int opcion=0;
    Materia materias[5];
    do{
        cout<<"Que quieres hacer 1) Crear materia 2) Agegar alumno 3) Calcular Promedio 4) Salir"<<endl;
        switch(opcion){
            case 1:
                cout<<"Dame el nombre de la materia: "<<endl;
                string nombre;
                cin>>nombre;
                cout<<"Dame el nombre del profesor: "<<endl;
                string nombreProfesor;
                cin>>nombreProfesor;
                cout<<"Dame la pos del arreglo de materias: "<<endl;
                int pos;
                cin>>pos;    
                materias[pos]=Materia(nombre,nombreProfesor);                        
                break;
            case 2:
                cout<<"Dame el nombre del alumno: "<<endl;
                string nombre;
                cin>>nombre;
                cout<<"Dame la matricula: "<<endl;
                string matricula;
                cin>>matricula;
                cout<<"Dame la calificacion: "<<endl;
                int calificacion;
                cin>>calificacion;
                cout<<"Dame la pos del arreglo de alumnos: "<<endl;
                int pos;
                cin>>pos;
                cout<<"Dame la pos del arreglo de materias: "<<endl;
                int posMateria;
                cin>>posMateria;
                materias[posMateria].agregarAlumno(Alumno(nombre,matricula,calificacion),pos);
                break;
            case 3:
                cout<<"Dame la pos del arreglo de materias: "<<endl;
                int posMateria;
                cin>>posMateria;
                cout<<"El promedio es: "<<materias[posMateria].calcularPromedio()<<endl;
                break;                
        }
    }while(opcion!=0);
    return 0;
}
