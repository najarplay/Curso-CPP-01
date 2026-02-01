/*escriva una funcion escibeNumeros(int ini, int fin) 
que devuelva en la salida estandar los numeros del 
ini al fin , escriba una version que escriba los 
numeros en orden ascentende */

#include <iostream>
#include <conio.h>
using namespace std;

void escribeNumeros(int ini, int fin);

int main(){
    int ini, fin;

    cout<<"digite el valor inicial: "; cin>>ini;
    cout<<"digite el valor final: ";     cin>>fin;

    cout<<"\nnumeros en orden ascendente: ";
    escribeNumeros(ini, fin);

    getch();
    return 0;
}

void escribeNumeros(int ini, int fin){
    if(ini > fin) {return;}
    else{cout<<ini<<" "; escribeNumeros(ini+1, fin);}
}
