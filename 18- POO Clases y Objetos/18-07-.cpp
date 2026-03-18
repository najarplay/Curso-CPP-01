// herencia en POO

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

class Alumno : public Persona{
    private:
        string codigoAlumno;
        float notaFinal;
    public:
        Alumno(string , int, string, float);
        void mostrarAlumno();
};

Persona::Persona(string _nombre, int _edad){
    nombre = _nombre;
    edad = _edad;
}

Alumno::Alumno(string _nombre, int _edad, string _codigoAlumno, float _notaFinal) : Persona(_nombre, _edad){
    codigoAlumno = _codigoAlumno;
    notaFinal = _notaFinal;
}

void Persona::mostrarPersona(){
    cout<<"Nombre: "<<nombre<<endl;
    cout<<"edad: "<<edad<<endl;
}

void Alumno::mostrarAlumno(){
    mostrarPersona();
    cout<<"codigo Alumno: "<<codigoAlumno<<endl;
    cout<<"nota final: "<<notaFinal<<endl;
}

int main(){
    Alumno alumno1("alejandro", 20, "12340",15.12);

    system("pause");
    return 0;
}