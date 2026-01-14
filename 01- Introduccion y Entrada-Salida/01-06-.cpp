/* realice un programa que lea de la entrada los siguientes datos 

    Edad: dato de tipo entero 
    Sexo: dato de tipo de caracter 
    Altura: datos de tipo real 

tras leer los datos , el programa debe mostrarlos en la salida estandar */

#include<iostream>

using namespace std;

int main(){

    int edad;
    char sexo[10];
    float altura ;

    cout<<"digita tu edad: "; cin>>edad;
    cout<<"digita tu sexo: "; cin>>sexo;
    cout<<"digita tu altura: "; cin>>altura;

    cout<<"\nedad: "<<edad<<endl;
    cout<<"\nsexo: "<<sexo<<endl;
    cout<<"\naltura: "<<altura<<endl;


    return 0;
}