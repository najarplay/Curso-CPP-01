/*escriba un programa un vector de numeros y muestre 
  los numeros del vector con sus indices asociados*/

#include<iostream>
#include<conio.h>

using namespace std;

int main(){
    int numeros[100], n;

    cout<<"digite el numero del areglo"; cin>>n;

    for(int i=0; i<n; i++){
        cout<<"digite un numero: "; cin>>numeros[i];
    }

    for(int i=0; i<n; i++){
        cout<<i<<" -> "<<numeros[i]<<endl;
    }



    getch();
    return 0;
}