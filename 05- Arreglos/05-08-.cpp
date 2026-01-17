/*hacer un programa que lea 5 numeros en un areglo, 
los copie a otro arreglo multiplicados por 2 y muestre
el segundo areglo*/

#include <iostream>
using namespace std;

int main() {
    int a[5];
    int b[5];

    for(int i=0; i<5; i++) {
        cout<<"indice"<<i+1<<": "; 
        cin>>a[i]; 
        b[i] = a[i]*2;
    }
    //for(int i=0; i<5; i++) {b[i] = a[i]*2;}

    cout<<"\nsegundo arreglo: "<<endl;
    for(int i=0; i<5; i++) {cout<<b[i]<<" ";}

    return 0;
}
