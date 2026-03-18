#include<iostream>
#include<stdlib.h>
using namespace std;

class Persona{
    private:
        string nombre;
        int edad;
    public:
        Persona(string,int);
        void mostrarPersona();
};

class Empleado : public Persona{
    private: 
        float sueldo;
    public:
        Empleado(string,int,float);
        void mostrarEmpleado();
};

class Estudiante : public Persona{
    private:
        float notaFinal;
    public:
        Estudiante(string, int, float);
        void mostrarEstudiantes();

};


Persona::Persona(string _nombre, int _edad){
    nombre = _nombre;
    edad = _edad;
}

void Persona::mostrarPersona(){
    cout<<"nombre: "<<nombre<<endl;
    cout<<"edad: "<<edad<<endl;
}


Empleado::Empleado(string _nombre, int _edad, float _sueldo) : Persona( _nombre, _edad){
    sueldo = _sueldo;
}

void Empleado::mostrarEmpleado(){
    mostrarPersona();
    cout<<"sueldo: "<<sueldo<<endl;
}


Estudiante::Estudiante(string _nombre, int _edad, float _notaFinal) : Persona(_nombre, _edad){
    notaFinal = _notaFinal;
}

void Estudiante::mostrarEstudiantes(){
    mostrarPersona();
    cout<<"nota final: "<<notaFinal<<endl;
}

int main(){

    system("pause");
    return 0;
}