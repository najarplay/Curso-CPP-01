/*asigasion dinamica de arreglos 

new: reserva el numero de bytes solicitado por la declaracion 
delete : libera un bloque de bytes reservado con anterioridad

ejemplo : pedir al usurario  n calificaciones y almacenarlos en un arreglo dinamico */

#include<iostream>
#include<conio.h>
#include<stdalign.h>
using namespace std;

void pedirNotas();
void mostrarNotas();

int numCalif, *calif;

int main(){
    pedirNotas();
    mostrarNotas();

    delete[] calif;

    getch();
    return 0;
}

void pedirNotas(){
    cout<<"digite el numero de calificaciones: ";
    cin>>numCalif;

    calif = new int[numCalif];

    for(int i=0; i<numCalif; i++){
        cout<<"ingrese una nota: ";
        cin>>calif[i];
    }
}

void mostrarNotas(){
    cout<<"\n\nmostrando notas del usuario: \n";
    for(int i=0; i<numCalif; i++){
        cout<<calif[i]<<endl;
    }
}
