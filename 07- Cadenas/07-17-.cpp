/*pedir al usuario 2 cadenas de caracteres de numeros
uno entero y el otro real convertirlos a sus respectivos
valores y por ultimo sumarlos*/



#include <iostream>
#include <stdlib.h>   // atoi, atof
using namespace std;

int main() {
    char int_cad[20];
    char float_cad[20];

    int entero;
    float real;
    float suma;

    cout<<"Ingrese un numero entero: "; cin>>int_cad;
    cout<<"Ingrese un numero real: "; cin>>float_cad;

    entero = atoi(int_cad);   // cadena -> int
    real   = atof(float_cad); // cadena -> float
    suma = entero + real;

    cout<<"La suma es: "<<suma<<endl;

    return 0;
}


