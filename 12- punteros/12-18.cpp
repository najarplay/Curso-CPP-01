/* hacer una estructura llamada alumno, en la cual se 
tendran los siguientes campos: Nombre, edad, promedio, 
pedir datos al usuario para 3 alumnos, comprobar cual 
de los 3 tiene el mejor promedio y posteriormente 
imprimir los datos del alumno */

#include<iostream>
#include<conio.h>
using namespace std;

struct Alumno{
    char nombre[30];
    int edad;
    float promedio;
}alumno[3], *puntero_alumno = alumno;

void pedirDatos();
void calcular(Alumno *);

int main(){
    pedirDatos();
    calcular(puntero_alumno);

    getch();
    return 0;
}

void pedirDatos(){
    for(int i=0;i<3;i++){
        fflush(stdin);              // vaciar vafer
        cout<<"digite su nombre; ";
        cin.getline((puntero_alumno+i)->nombre, 30,'\n');
        cout<<"digite su edad: ";
        cin>>(puntero_alumno+i)->edad;
        cout<<"digite el promedio: ";
        cin>>(puntero_alumno+i)->promedio;
    }
}

void calcular(Alumno *puntero_alumno){
    float mayor=0.0;
    int pos=0;

    for(int i=0; i<3; i++){
        if((puntero_alumno+i)->promedio > mayor){
            mayor = (puntero_alumno+i)->promedio;
            pos = i;
        }
    }

    cout<<"\nEl alumno con mejor promedio es: \n";
    cout<<"nombre: "<<(puntero_alumno+pos)->nombre<<endl;
    cout<<"edad: "<<(puntero_alumno+pos)->edad<<endl;
    cout<<"promedio: "<<(puntero_alumno+pos)->promedio<<endl;
}