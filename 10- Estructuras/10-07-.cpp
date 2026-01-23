/*hacer 2 estructuras una llamada promedia que tendra los
los siguientes campos nota1, nota2, nota3; y otra llamada
alumno que tendra los siguientes miembros, nombre, sexo
edad hacer que la estructura promedio este anidada en
la estructura alumno, luego pedir todos los datos para 
un alumno, luego calcular su promedio y por ultimo 
imprimir todos sus datos incluidos el promedio */

#include<iostream>
#include<conio.h>
using namespace std;

struct Promedio{
    float nota1;
    float nota2;
    float nota3;
};

struct Alumno{
    char nombre[20];
    char sexo[10];
    int edad;
    struct Promedio prom;
}alumno;

int main(){
    float promedio_alumno;

    cout<<"digite su nombre; ";
    cin.getline(alumno.nombre,20,'\n');
    cout<<"digite su sexo; ";
    cin.getline(alumno.sexo,10,'\n');
    cout<<"digite su edad; ";
    cin>>alumno.edad;

    cout<<"\n.:notas del alumno:.\n";
    cout<<"nota1: "; cin>>alumno.prom.nota1;
    cout<<"nota2: "; cin>>alumno.prom.nota2;
    cout<<"nota3: "; cin>>alumno.prom.nota3;

    promedio_alumno = (alumno.prom.nota1+
                       alumno.prom.nota2+
                       alumno.prom.nota3);
    
    cout<<"\ndatos del alumno\n";
    cout<<"nombre: "  <<alumno.nombre<<endl;
    cout<<"sexo: "    <<alumno.sexo<<endl;
    cout<<"edad: "    <<alumno.edad<<endl;
    cout<<"promedio: "<<promedio_alumno<<endl;


    getch();
    return 0;
}