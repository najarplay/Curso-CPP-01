/*realisa un programa que defina dos vectores de 
caracteres y despues almacena el contenido de ambos 
vectores en un nuevo vector situando en primer logar 
los elementos del primer vector segido por los 
elementos del segundo vector y al final del programa 
muestra el contenido de los dos vectore */


#include<iostream>
#include<conio.h>

using namespace std;

int main(){
    char letras1[] = {'a','e','i','o','u'};
    char letras2[] = {'b','c','d','f','g'};
    char letras3[10];

    for(int i=0; i<5;  i++) {letras3[i]=letras1[i];}
    for(int i=5; i<10; i++) {letras3[i]=letras2[i-5];}
    for(int i=0; i<10; i++) {cout<<letras3[i]<<" - ";}

    getch();
    return 0;
}