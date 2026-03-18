//clases en c++

#include<iostream>
#include<stdlib.h>
using namespace std;

class Persona{
    private:
        int edad;
        string nombre;
    public:
        Persona(int,string);
        void leer();
        void correr();
};
// constructor para inicialisar atributos de la clases
Persona::Persona(int _edad, string _nombre){
    edad = _edad;
    nombre = _nombre;
}

void Persona::leer(){
    cout<<"soy "<<nombre<<" y estoy leyendo "<<endl;
}

void Persona::correr(){
    cout<<"soy "<<nombre<<" y estoy corriendo"<<endl;
}

int main(){
    Persona p1 = Persona(20, "alejandro");
    Persona p2(19, "alan");
    Persona p3(23,"avila");

    p1.leer();
    p2.correr();
    
    p3.leer();
    p3.correr();

    system("pause");
    return 0;
}