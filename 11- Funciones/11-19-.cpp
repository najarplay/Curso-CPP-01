/*realiza una funcion que tome como parametros un 
vector de enteros y su tamano e imprima un vector 
con los elementos impares del vector recibido*/

#include <iostream>
#include <conio.h>
using namespace std;

void pedirDatos();
void imprimirImpares(int vec[], int tam);

int vec[100], tam;

int main(){
    pedirDatos();
    imprimirImpares(vec, tam);

    getch();
    return 0;
}

void pedirDatos(){
    cout<<"Digite el numero de elementos del vector: "; cin>>tam;

    for(int i=0; i<tam; i++){
        cout<<"Digite el elemento "<<i+1<<": ";
        cin>>vec[i];
    }
}

void imprimirImpares(int vec[], int tam){
    cout<<"\nVector con numeros impares:\n";
    bool hayImpares = false;

    for(int i=0; i<tam; i++){
        if(vec[i]%2!=0){
            cout<<vec[i]<<" ";
            hayImpares = true;
        }
    

    if(!hayImpares){cout<<"No hay numeros impares\n";}
}
