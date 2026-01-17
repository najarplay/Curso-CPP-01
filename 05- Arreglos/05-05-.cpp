/*desarrolla un programa que lea un vector de enteros
  determina el mayor elemento del vector */
    
#include<iostream>
#include<conio.h>

using namespace std;

int main(){
    int numeros[100], n, mayor =0;

    cout<<"digite el numero del areglo"; cin>>n;

    for(int i=0; i<n; i++){
        cout<<i+1<<" digite un numero: "; cin>>numeros[i];
        if(numeros[i] > mayor){ mayor = numeros[i]; }
    }
    cout<<"\nel mayor es: "<<mayor<<endl;

    getch();
    return 0;