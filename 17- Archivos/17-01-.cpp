#include<iostream>
#include<stdlib.h>
#include<fstream>
using namespace std;

void escribir();

int main(){
    escribir();

    system("pause");
    return 0;
}

void escribir(){
    ofstream archivo;
    string nombreArchivo,frase;

    cout<<"digite el nombre del archivo: ";
    getline(cin,nombreArchivo);

    archivo.open(nombreArchivo.c_str(), ios::out);

    if(archivo.fail()){
        cout<<"nose pude abrir el archivo";
        exit(1);
    }

    cout<<"\ndigite el texto del archivo; ";
    getline(cin,frase);

    archivo<<frase;
    
    archivo<<"creando un archivo de texto"<<endl;
    archivo<<"agregando mas texto al archivo";

    archivo.close();
}