/*escribe un programa que defina un vector de numeros 
  y muestre en la salida estandar el vector en orden  
  inverso - del ultimo al primero elemento */


  
#include<iostream>
#include<conio.h>

using namespace std;

int main(){
    int numeros[100], n;

    cout<<"digite el numero del areglo"; cin>>n;

    for(int i=0; i<n; i++){
        cout<<"digite un numero: "; cin>>numeros[i];
    }
    int x = 0;
    for(int i=n-1; i>=0; i--){
        cout<<x<<" -> "<<numeros[i]<<endl;
        x++;
    }

    getch();
    return 0;
}