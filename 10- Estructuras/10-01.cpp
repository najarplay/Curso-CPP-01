/*estructura basica en c++*/


#include<iostream>
#include<conio.h>
using namespace std;

struct Persona{
    char nombre[20];
    int edad;
}
persona1 = {"Alejandro",20},
persona2;

int main(){
    cout<<"escribe nombre"; 
    cin.getline(persona1.nombre,20,'\n');
    cout<<"escribe edad"; 
    cin>>persona1.edad;

    cout<<"\n";

    cout<<"nombre; "<<persona1.nombre;
    cout<<"edad1; "<<persona1.edad;
    cout<<"\n";
    cout<<"nombre; "<<persona2.nombre;
    cout<<"edad1; "<<persona2.edad;


    getch();
    return 0;
}