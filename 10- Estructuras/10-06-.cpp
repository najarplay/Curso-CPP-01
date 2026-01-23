/*hacer un arreglo de estructura llamada atleta para N
atletas que contenga los siguientes campos: nombre, 
pais, numero_medallas, y devuelva los datos 
(nombre, pais) del atleta que ha ganado el mayor 
numero de medallas*/

#include <iostream>
using namespace std;

struct Atleta {
    string nombre;
    string pais;
    int numero_medallas;
};

int main() {
    int N;
    cout<<"Ingrese el numero de atletas: "; cin>>N;

    Atleta atletas[N];
    int mayor = 0;

    for (int i=0; i<N; i++) {
        cout<<"\nAtleta "<<i+1<<endl;
        cout<<"Nombre: ";             cin>>atletas[i].nombre;
        cout<<"Pais: ";               cin>>atletas[i].pais;
        cout<<"Numero de medallas: "; cin>>atletas[i].numero_medallas;
    }

    for (int i=1; i<N; i++) {
        if (atletas[i].numero_medallas > atletas[mayor].numero_medallas) {
            mayor = i;
        }
    }

    cout<<"\nAtleta con mayor numero de medallas:"<<endl;
    cout<<"Nombre: "<< atletas[mayor].nombre<<endl;
    cout<<"Pais: "  << atletas[mayor].pais<<endl;

    return 0;
}
