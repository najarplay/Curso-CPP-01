/*pedir su nombre al usuario y devolver el numero de 
vocales que hay NOTA: recuerda que debes utilizar 
punteros*/

#include<iostream>
#include<conio.h>
#include<string.h>
using namespace std;

void perdirdatos();
int contadorVocales(char *);

char nombreUsuario[30];

int main(){
    pedirDatos();
    cout<<"\nel numero de vocales es: "<<contadorVocales(nombreUsuario)<<endl;

    getch();
    return 0;
}

void pedirDatos(){
    cout<<"digite su nombre: ";
    cin.getline(nombreUsuario,30,'\n');

    strupr(nombreUsuario);
}

int contadorVocales(char *nombre){
    int cont=0;

    while(*nombre){
        switch(*nombre){
            case 'A':
            case 'E':
            case 'I':
            case 'o':
            case 'u': cont ++;
        }
        nombre++;
    }
    return cont ;
}