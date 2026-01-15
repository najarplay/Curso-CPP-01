/*la sentencia switch

switch(exprecion){
    case literal 1;
        conjunto de instruciones 1;
        break;
    case literal 2;
        conjunto de instruciones 2;
        break;
    case literal 3;
        conjunto de instruciones 3;
        break;
    default;
        conjunto de instruciones por defecto;
        break
}*/

#include<iostream>

using namespace std;

int main(){
    int numero;

    cout<<"digita un numero entre 1 - 5 : "; cin>>numero;

    switch(numero){ // en case usa ( : ) no ( ; )
        case 1: cout<<"el numero es 1"; break;
        case 2: cout<<"el numero es 2"; break;
        case 3: cout<<"el numero es 3"; break;
        case 4: cout<<"el numero es 4"; break;
        case 5: cout<<"el numero es 5"; break;
        default: cout<<"no esta en el rango"; break;
    } // si omites el (break;) en el caso 1 entonces
      // se mostrara el testo de 1 y despues del 2
    return 0;
}