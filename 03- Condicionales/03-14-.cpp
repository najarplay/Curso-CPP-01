/*hacer un menu que considere las siguientes opciones
  caso 1 - cubo de un numero
  caso 2 - numero pas o inpar
  caso 3 - salir*/

#include <iostream>
using namespace std;

int main() {
    int opcion;
    int numero;

    cout << "MENU\n";
    cout << "1. Cubo de un numero\n";
    cout << "2. Numero par o impar\n";
    cout << "3. Salir\n";
    cout << "Elige una opcion: ";
    cin >> opcion;

    switch (opcion) {
        case 1:
            cout<<"Ingresa un numero: ";
            cin>>numero;
            cout<<"El cubo es: "<<numero * numero * numero<<endl;
            break;

        case 2:
            cout<<"Ingresa un numero: ";
            cin>>numero;
            if (numero % 2 == 0) {
                cout<<"El numero es par"<<endl;
            } else {
                cout<<"El numero es impar"<<endl;
            }
            break;

        case 3:cout << "Saliendo "<<endl;break;
        default: cout << "Opcion no valida" << endl;
    }

    return 0;
}
