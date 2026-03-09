/*hacer una funcion para almacenar N numero en un 
arreglo dinamico, posteriormente en otra funcion buscar
un numero en particular
NOTA: puedes utilizar cualquier metodo de buqueda
secuencial o binaria*/

#include <iostream>
#include <conio.h>
using namespace std;

void llenarArreglo(int *arr, int n);
int buscarNumero(int *arr, int n, int num);

int main(){
    int n, numBuscar;

    cout << "Digite el numero de elementos: ";
    cin >> n;

    int *arreglo = new int[n];

    llenarArreglo(arreglo, n);

    cout << "\nDigite el numero a buscar: ";
    cin >> numBuscar;

    int pos = buscarNumero(arreglo, n, numBuscar);

    if(pos != -1)
        cout << "Numero encontrado en la posicion: " << pos << endl;
    else
        cout << "Numero NO encontrado" << endl;

    delete[] arreglo;

    getch();
    return 0;
}

void llenarArreglo(int *arr, int n){
    for(int i = 0; i < n; i++){
        cout << "Digite el elemento " << i + 1 << ": ";
        cin >> *(arr + i);   // arr[i]
    }
}

int buscarNumero(int *arr, int n, int num){
    for(int i = 0; i < n; i++){
        if(*(arr + i) == num){
            return i; 
        }
    }
    return -1; 
}
