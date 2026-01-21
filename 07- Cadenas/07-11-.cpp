/*hacer un programa que determine si una palabra es polindroma*/

#include <iostream>
#include <string.h>
using namespace std;

int main() {
    char palabra[50];
    int longitud = 0;
    bool palindroma = true;

    cout<<"Ingrese una palabra: "; cin>>palabra;

    longitud = strlen(palabra);

    for (int i=0; i<longitud/2; i++) {
        if (palabra[i] != palabra[longitud-1-i]) {
            palindroma = false;
            break; } }

    if(palindroma){cout<<"La palabra es palindroma"<<endl;} 
    else {cout<<"La palabra NO es palindroma"<<endl;}

    return 0;
}
