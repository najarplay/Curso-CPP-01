// anadir texto al final de un archivo

#include<iostream>
#include<stdlib.h>
#include<string.h>
#include<fstream>
using namespace std;

void aniadir();

int main(){
    aniadir();

    system("pause");
    return 0;
}

void aniadir(){
    ofstream archivo;
    string texto;

    archivo.open("programacion.txt", ios::app);

    if(archivo.fail()){
        cout<<"nose puede abrir el archivo";
        exit(1);
    }

    cout<<"digite el texto que quiere aniadir";
    getline(cin,texto);

    archivo<<texto<<endl;

    archivo.close();
}