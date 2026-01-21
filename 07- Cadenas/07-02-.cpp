/*longitud de una cadena de caracteres */

#include<iostream>
#include<conio.h>
#include<string.h>

using namespace std;

int main(){
    char palabra[] = "hola";
    int longitud = 0;

    longitud = strlen(palabra); // como funcion len() en python

    cout<<"numero de elementos de la cadena es: "<<longitud<<endl;

    getch();
    return 0;
}