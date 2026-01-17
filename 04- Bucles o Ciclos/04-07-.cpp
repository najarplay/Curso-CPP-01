/*escruba un prograna qye toma cada 4 horas la temperatura
 exterior, leyendo durante un periodo de 24 horas es
 decir debe leer 6 tenperaturas calcule la temperatura
 calcule la temperatura media del dia la temperatura mas 
 alta y la mas baja*/

#include <iostream>
using namespace std;

int main() {
    float temperatura;
    float suma = 0;
    float max, min;

    cout<<"Ingrese la temperatura 1: "; cin>>temperatura;
    
    suma = temperatura;
    max = temperatura;
    min = temperatura;

    for (int i=2; i<=6; i++) {
        cout<<"Ingrese la temperatura "<<i<<": "; cin>>temperatura;
        suma += temperatura;

        if (temperatura > max) {max = temperatura;}
        if (temperatura < min) {min = temperatura;}
    }

    cout<<"Temperatura media del dia: "<<suma/6<<endl;
    cout<<"Temperatura mas alta: "<<max<<endl;
    cout<<"Temperatura mas baja: "<<min<<endl;

    return 0;
}
