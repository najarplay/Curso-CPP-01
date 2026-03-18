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

class Universitario : public Estudiante{
    private:
        string carrera;
    public:
        Universitario(string, int, float, string);
        void mostrarUniversitario();
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

Universitario::Universitario(string _nombre, int _edad, float _notaFinal, string _carrera) : Estudiante(_nombre, _edad, _notaFinal){
    carrera = _carrera;
} 

void Universitario::mostrarUniversitario(){
    mostrarEstudiantes();
    cout<<"Carrera: "<<carrera<<endl;
}


int main(){
    Empleado empleado1("alan",23, 1200);
    cout<<"-empleado-"<<endl;
    empleado1.mostrarEmpleado();
    cout<<"\n";

    Estudiante estudiante1("alejandro",20,14.12);
    cout<<"-estudiante-"<<endl;
    estudiante1.mostrarEstudiantes();
    cout<<"\n";

    Universitario universitario1("Maria",19,12.3,"informatica");
    cout<<"-universitario-"<<endl;
    universitario1.mostrarEstudiantes();

    system("pause");
    return 0;
}