// punteros y estructuras

#include<iostream>
#include<conio.h>
using namespace std;

struct Persona{
    char nombre[30];
    int edad;
}persona, *puntero_persona = &persona;

void pedirDatos(); 
void mostrarDatos(Persona *);

int main(){
    pedirDatos();
    mostrarDatos(puntero_persona);

    getch();
    return 0;
}

void pedirDatos(){
    cout<<'digitame tu nombre; ';
    cin.getline(puntero_persona->nombre, 30, '\n');
    cout<<'digita tu edad; ';
    cin>>puntero_persona->edad;
}

void mostrarDatos(Persona *puntero_persona){
    cout<<'\nsu nombre; '<<puntero_persona->nombre<<endl;
    cout<<"su edad es; "<<puntero_persona->edad<<endl;
}