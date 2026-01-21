/*pedir su nombre al usuario en mayusculas si su 
nombre comienza por la letra A comvertir su nombre 
a minusculas caso contrario no convertirlo*/

#include <iostream>
#include <string.h>
#include <ctype.h>   // tolower
using namespace std;

int main() {
    char nombre[50];

    cout<<"Ingrese su nombre en MAYUSCULAS: "; cin>>nombre;

    if (nombre[0] == 'A') {
        for (int i = 0; nombre[i] != '\0'; i++) {
            nombre[i] = tolower(nombre[i]);
        }
        cout<<"Nombre convertido a minusculas: "<<nombre<<endl;} 
    else {cout<<"Nombre no convertido: "<<nombre<<endl;}

    return 0;
}
