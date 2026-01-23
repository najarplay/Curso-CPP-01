/*hacer una estructura llamada alumno, en la cual se
tendran los siguientes campos: nombre, edad, promedio,
pedir datos al usuario para 3 alumnos, comprobar cual
de los 3 tiene el mejor promedio y posteriormente 
imprimir los datos del alumno */

#include <iostream>
using namespace std;

struct Alumno {
    string nombre;
    int edad;
    float promedio;
};

int main() {
    Alumno alumnos[3];
    int mejor = 0;

    for (int i=0; i<3; i++) {
        cout<<"\nAlumno "<<i+1<<endl;
        cout<<"Nombre: ";   cin>>alumnos[i].nombre;
        cout<<"Edad: ";     cin>>alumnos[i].edad;
        cout<<"Promedio: "; cin>>alumnos[i].promedio;
    }

    for (int i=1; i<3; i++) {
        if (alumnos[i].promedio > alumnos[mejor].promedio){
            mejor = i;
        }
    }
    cout<<"\nAlumno con el mejor promedio:"<<endl;
    cout<<"Nombre: "  <<alumnos[mejor].nombre<<endl;
    cout<<"Edad: "    <<alumnos[mejor].edad<<endl;
    cout<<"Promedio: "<<alumnos[mejor].promedio<<endl;

    return 0;
}
