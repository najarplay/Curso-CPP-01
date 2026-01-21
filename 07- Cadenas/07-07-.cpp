/*pedir al usuario que digite 2 cadenas de caracteres
e indicar si ambas cadenas son iguales en caso de no 
serlo indicar cual es marot alfabeticamente */

#include<iostream>
#include<conio.h>
#include<string.h>

using namespace std;

int main(){
    char palabra1[30];
    char palabra2[30];

    cout<<"ingresa 1 cadena: "; cin>>palabra1;
    cout<<"ingresa 2 cadena: "; cin>>palabra2;

    if      (strcmp(palabra1,palabra2)==0)
        {cout<<"son iguales";}
    else if (strcmp(palabra1,palabra2) > 0)
        {cout<<palabra1<<" es mayor";}
    else if (strcmp(palabra1,palabra2) < 0)
        {cout<<palabra2<<" es mayor";}

    getch();
    return 0;
}