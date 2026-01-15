/*la sentencia if 

if (condicion){
    intrucion 1;
    }
else{
    intrucion 2;
}*/

#include<iostream>

using namespace std;

int main(){
    int numero , dato = 5;

    cout<<"digita un numero : "; cin>>numero;

    // if(numero != dato){    // esto comprueba si es diferente a 
    if(numero == dato){    // esto comprueba si el igual a 
        cout<<"el numero es 5";
    }
    else{
        cout<<"el numero es diferente de 5";
    }

    return 0;
}