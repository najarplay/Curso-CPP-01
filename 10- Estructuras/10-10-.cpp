/*defina una estructura que sirva para representar a
una persona la estructura debe contener dos campos:
el nombre de la persona y un valor de tipo logico 
que indica si la persona tiene algun tipo de 
discapacidad realice un programa que dado un vector 
de personas rellene dos nuevos vectores uno que 
contenga las personas que no tienen ninguna 
discapacidad y otro que contenga las personas con 
discapacidad*/

#include <iostream>
using namespace std;

struct Persona {
    char nombre[20];
    bool discapacidad;
};

int main() {
    int N;
    
    cout<<"Ingrese el numero de personas: "; cin>>N;
    cin.ignore();

    Persona personas[N];
    Persona con_discapacidad[N];
    Persona sin_discapacidad[N];

    int cont_con = 0, cont_sin = 0;

    for (int i=0; i<N; i++) {
        cout<<"\nPersona "<<i+1<<endl;
        cout<<"Nombre: "; cin.getline(personas[i].nombre,20);
        cout<<"Tiene discapacidad?: "; cin>>personas[i].discapacidad;
        cin.ignore();

        if (personas[i].discapacidad) {
            con_discapacidad[cont_con] = personas[i];
            cont_con++;
        } else {
            sin_discapacidad[cont_sin] = personas[i];
            cont_sin++;
        }
    }

    cout<<"\nPersonas SIN discapacidad:\n";
    for(int i=0; i<cont_sin; i++) {
        cout<<"- "<<sin_discapacidad[i].nombre<<endl;}

    cout<<"\nPersonas CON discapacidad:\n";
    for(int i=0; i<cont_con; i++){
        cout<<"- "<<con_discapacidad[i].nombre<<endl;}

    return 0;
}
