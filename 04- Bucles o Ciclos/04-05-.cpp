/*realice un programa que lea de la entrada estandar 
  numeros hasta que se introduzca un cero , en ese
  momento el programa estandar el numero de valoes
  mayores que cero leidos*/

#include <iostream>
using namespace std;

int main() {
    int numero;
    int a = 0; // contador

    cout<<"ingresa numeros"<<endl; cin>>numero;

    while(numero != 0){
        if(numero > 0){ a++; }
        cin >> numero;
    }

    cout<<"cantidad mayor que 0: "<<a<<endl;

    return 0;
}
