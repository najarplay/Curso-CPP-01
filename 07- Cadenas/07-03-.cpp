/*hacer un programa que pida al usuario que digite una
cadena de caracteres, luego verifica la longitud de la
cadena y si esta supera a 10 caracteres muestrala en 
pantalla caso contrario no mostrarla*/

#include<iostream>
#include<conio.h>
#include<string.h>

using namespace std;

int main(){
    char usuario[10];
    int limite = 10;
    int usuario_int;

    cout<<"digite usuario no mayor a 10 caracteres: ";
    cin>>usuario;

    usuario_int = strlen(usuario);

    if      (usuario_int > limite)
        {cout<<"exediste los caracteres";}
    else if (usuario_int < limite)
        {cout<<"faltan caracteres";}
    else if (usuario_int = limite)
        {cout<<"usuario aceptado"<<usuario_int;}

    getch();
    return 0;
}