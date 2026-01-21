/*convertir dos cadenas de minusculas a mayusculas 
compararlas y decir si son iguales o no */

#include <iostream>
#include <string.h>
#include <ctype.h>   

using namespace std;

int main() {
    char cad1[50];
    char cad2[50];

    cout<<"Ingrese la primera cadena: "; cin>>cad1;
    cout<<"Ingrese la segunda cadena: "; cin>>cad2;

    for (int i=0; cad1[i]!='\0'; i++) {
        cad1[i] = toupper(cad1[i]);
    }

    for (int i = 0; cad2[i]!='\0'; i++) {
        cad2[i] = toupper(cad2[i]);
    }

    if (strcmp(cad1,cad2)==0){cout<<"son IGUALES"<<endl;} 
    else {cout<<"son DIFERENTES"<<endl;}

    return 0;
}
