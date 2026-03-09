/*pedir una cadena de caracteres (string) al usuario
e indicar cuantas veces aparece la vocal a, e, i, o, u:
en la cadena de caracteres NOTA: usar punteros*/

#include <iostream>
#include <conio.h>
using namespace std;

void contarVocales(char *cadena);

int main(){
    char cadena[100];

    cout << "Digite una cadena de caracteres: ";
    cin.getline(cadena, 100);

    contarVocales(cadena);

    getch();
    return 0;
}

void contarVocales(char *cadena){
    int a = 0, e = 0, i = 0, o = 0, u = 0;

    while(*cadena != '\0'){   // mientras no sea fin de cadena
        switch(*cadena){
            case 'a': case 'A': a++; break;
            case 'e': case 'E': e++; break;
            case 'i': case 'I': i++; break;
            case 'o': case 'O': o++; break;
            case 'u': case 'U': u++; break;
        }
        cadena++;   // avanzar puntero
    }

    cout << "\nCantidad de vocales:\n";
    cout << "a: " << a << endl;
    cout << "e: " << e << endl;
    cout << "i: " << i << endl;
    cout << "o: " << o << endl;
    cout << "u: " << u << endl;
}
