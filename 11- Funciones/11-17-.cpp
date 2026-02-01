/*realice una funcion que tome como parametros un 
vector y su tamano y diga si el vector esta ordenado 
crecientemente, sugerencia: compruebe que para todas 
las posiciones del vector, salvo para la 0, el 
elemento que te precede en el vector*/

#include <iostream>
#include <conio.h>
using namespace std;

void pedirDatos();
bool estaOrdenado(int vec[], int tam);

int vec[100], tam;

int main(){
    pedirDatos();

    if(estaOrdenado(vec, tam)) {cout<<"\nEl vector ESTA ordenado crecientemente\n";}
    else{cout<<"\nEl vector NO esta ordenado crecientemente\n";}

    getch();
    return 0;
}

void pedirDatos(){
    cout<<"Digite el numero de elementos del vector: ";
    cin>>tam;

    for(int i=0; i<tam; i++){
        cout<<"Digite el elemento "<<i+1<<": ";
        cin>>vec[i];
    }
}

bool estaOrdenado(int vec[], int tam){
    for(int i=1; i<tam; i++){
        if(vec[i]<vec[i-1]){
            return false; 
        }
    }

    return true;         
}
