/*rellenar un arreglo con n numeros, posteriormente 
utilizando punteros determinar el menor elemento del 
arreglo*/

#include <iostream>
#include <conio.h>
using namespace std;

void pedirDatos(int *vec, int n);
int menorElemento(int *vec, int n);

int main(){
    int n;

    cout<<"Digite el numero de elementos: ";
    cin>>n;

    int vec[n];      
    int *ptr = vec;  

    pedirDatos(ptr, n);

    cout<<"\nEl menor elemento del arreglo es: "
        <<menorElemento(ptr,n)<<endl;

    cout<<"Direccion del primer elemento: "<<ptr<<endl;

    getch();
    return 0;
}

void pedirDatos(int *vec, int n){
    for(int i=0; i<n; i++){
        cout<<"Digite el elemento "<<i+1<<": ";
        cin>>*(vec+i);
    }
}

int menorElemento(int *vec, int n){
    int menor = *vec;   

    for(int i=1; i<n; i++){
        if(*(vec+i)<menor){
            menor = *(vec+i);
        }
    }
    return menor;
}
