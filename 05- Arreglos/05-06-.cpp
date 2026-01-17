/*escribe un programa que defina un vector de numeros
 y calcule si existe algun numero en el vector cuyo 
 valor equivale a la suma del resto de numeros del vector */

#include <iostream>
using namespace std;

int main() {
    int n, suma = 0;

    cout << "Cantidad de elementos: "; cin>>n;
    int v[n];

    for (int i = 0; i < n; i++) {
        cout<<"Elemento "<<i+1<<": "; cin>>v[i];
        suma += v[i];
    }

    for (int i=0; i<n; i++) {
        if (v[i] == suma - v[i]){ 
            cout<<"existe: "<<v[i]<<endl; break;
        }
    }

    return 0;
}
