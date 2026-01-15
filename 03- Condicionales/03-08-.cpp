/*escrive un programa que lea de la entrada estandar
  un caracter e indique en la salida estandar si el
  caracter es una vocal minuscula, mayuscula o int*/

#include <iostream>
using namespace std;

int main() {
    char c;
    
    cout<<"escrive un caracter"; cin >> c;

    if (c>='a'&&c<='z') {
        if (c=='a'||c=='e'||c=='i'||c=='o'||c=='u')
            cout << "vocal minuscula";
        else
            cout << "consonante minuscula";
    }
    else if (c >= 'A' && c <= 'Z') {
        if (c=='A'||c=='E'||c=='I'||c=='O'||c=='U')
            cout << "vocal mayuscula";
        else
            cout << "consonante mayuscula";
    }
    
    else if (c >= '0' && c <= '9') {cout << "entero";}
    else {cout << "otro caracter";}

    return 0;
}
