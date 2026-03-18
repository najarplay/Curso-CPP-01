//polimorfismo

#include<iostream>
#include<stdlib.h>
using namespace std;

class Persona{
    private:
        string nombre;
        int edad;
    public:
        Persona(string,int);
        virtual void mostrar();
};

class Alumno : public Persona{
    private:
        float notaFinal;
    public:
        Alumno(string,int,float);
        void mostrar();
};

class Profesor : public Persona{
    private:
        string materia;
    public:
        Profesor(string,int,string);
        void mostrar();
};

Persona::Persona(string _nombre, int _edad){
    nombre = _nombre;
    edad = _edad;
}

void Persona::mostrar(){
    cout<<"nombre: "<<nombre<<endl;
    cout<<"edad: "<<edad<<endl;
}

Alumno::Alumno(string _nombre, int _edad, float _notaFinal) : Persona(_nombre, _edad){
    notaFinal = _notaFinal;
}

void Alumno::mostrar(){
    Persona::mostrar();
    cout<<"nota final: "<<notaFinal<<endl;
}

Profesor::Profesor(string _nombre, int _edad, string _materia) : Persona(_nombre, _edad){
    materia = _materia;
}

void Profesor::mostrar(){
    Persona::mostrar();
    cout<<"materia: "<<materia<<endl;
}

int main(){
    Persona *vector[3];

    vector[0] = new Alumno("alejandro",20,12.9);
    vector[1] = new Alumno("maria",19,12);
    vector[2] = new Profesor("jose", 40, "alegoritmos");

    vector[0]->mostrar();
    cout<<"\n";
    vector[1]->mostrar();
    cout<<"\n";
    vector[2]->mostrar();

    system("pause");
    return 0;
}