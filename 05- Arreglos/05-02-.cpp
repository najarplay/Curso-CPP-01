/*escrive un programa que defina un vector de numros 
y calcule la multiplicacion acumulada de sus elementos */


#include <iostream>
using namespace std;

int main() {
    int n;
    int producto = 1;

    cout<<"cantidad de elementos del vector: "; cin>>n;

    int vector[n];

    for(int i=0; i<n; i++) {
        cout<<"Elemento "<<i+1<<": "; cin>>vector[i];
        producto *= vector[i];
    }

    cout<<"multiplicacion es: "<<producto<<endl;

    return 0;
}
