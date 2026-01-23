/*utilizar las 2 estructuras del problema 5 pero ahora
pedir los datos para N alumnos, y calcular cual de 
todos tiene el mejor promedio, e imprimir sus datos*/

#include <iostream>
#include <conio.h>
using namespace std;

struct Promedio {
    float nota1;
    float nota2;
    float nota3;
};

struct Alumno {
    char  nombre[20];
    char  sexo[10];
    int   edad;
    Promedio prom;
};

int main() {
    int   N;
    float promedio_actual, mejor_promedio = 0;
    int   mejor = 0;

    cout<<"Digite el numero de alumnos: "; cin>>N;
    cin.ignore(); // limpiar buffer

    Alumno alumnos[N];

    for (int i=0; i<N; i++) {
        cout<<"\nAlumno "<<i+1<<endl;
        cout<<"Nombre: "; cin.getline(alumnos[i].nombre, 20);
        cout<<"Sexo: ";   cin.getline(alumnos[i].sexo, 10);
        cout<<"Edad: ";   cin>>alumnos[i].edad;
        cout<<"Nota 1: "; cin>>alumnos[i].prom.nota1;
        cout<<"Nota 2: "; cin>>alumnos[i].prom.nota2;
        cout<<"Nota 3: "; cin>>alumnos[i].prom.nota3;
        cin.ignore(); 
    }

    for (int i=0; i<N; i++) {
        promedio_actual = (alumnos[i].prom.nota1+
                           alumnos[i].prom.nota2+
                           alumnos[i].prom.nota3)/3;

        if (i==0 || promedio_actual>mejor_promedio){
            mejor_promedio = promedio_actual;
            mejor=i;
        }
    }

    cout<<"\nAlumno con el mejor promedio:\n";
    cout<<"Nombre: "  <<alumnos[mejor].nombre<<endl;
    cout<<"Sexo: "    <<alumnos[mejor].sexo<<endl;
    cout<<"Edad: "    <<alumnos[mejor].edad<<endl;
    cout<<"Promedio: "<<mejor_promedio<<endl;

    getch();
    return 0;
}
