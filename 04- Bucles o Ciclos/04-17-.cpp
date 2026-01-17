/*en una clase de 5 alumnos se han realizado tres 
  examenes y se requiere determinar el numero de :
  
  a) Alumnos que aprobaron todos los examenes.
  b) Alumnos que aprobaron al menos un examen.
  c) Alumnos que aprobaron unicamente el ultimo examen.
  
  realice un programa que permita la lectura de los 
  datos y el calculo de las estadisticas*/

#include <iostream>
using namespace std;

int main() {
    int todos = 0, uno = 0, ultimo = 0;

    float ex1, ex2, ex3;

    for (int i=1; i<=5; i++) {
        cout<<"\nAlumno "<<i<<endl;
        cout<<"Examen 1: "; cin>>ex1;
        cout<<"Examen 2: "; cin>>ex2;
        cout<<"Examen 3: "; cin>>ex3;

        bool apr1 = ex1 >= 6;
        bool apr2 = ex2 >= 6;
        bool apr3 = ex3 >= 6;

        if (apr1 && apr2 && apr3)   {todos++;}
        if (apr1 || apr2 || apr3)   {uno++;}
        if (!apr1 && !apr2 && apr3) {ultimo++;}
    }

    cout<<"\nRESULTADOS"<<endl;
    cout<<"Alumnos que aprobaron todos los examenes: "<<todos<<endl;
    cout<<"Alumnos que aprobaron al menos un examen: "<<uno<<endl;
    cout<<"Alumnos que aprobaron solo el ultimo examen: "<<ultimo<<endl;

    return 0;
}
