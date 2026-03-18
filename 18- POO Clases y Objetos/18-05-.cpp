// destructor

#include<iostream>
#include<stdlib.h>
using namespace std;

class Perro{
    private:
        string nombre,raza;
    public:
        Perro(string,string);
        ~Perro();
        void mostrarDatos();
        void jugar();
};

Perro::Perro(string _nombre, string _raza){
    nombre =_nombre;
    raza = _raza;
}

Perro::~Perro(){
}

void Perro::mostrarDatos(){
    cout<<"nombre: "<<nombre<<endl;
    cout<<"raza: "<<raza<<endl;
}

void Perro::jugar(){
    cout<<"el perro "<<nombre<<"esta jugando"<<endl;
}

int main(){
    Perro perro1("fodo","doberman");

    perro1.mostrarDatos();
    perro1.jugar();
    perro1.~Perro();


    cout<<"\n";


    system("pause");
    return 0;
}

