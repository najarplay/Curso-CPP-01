/*determinar si un numero es primo o no: con puntero
y ademas indicar en que posicion de memoria se guardo
el numero     2,3,5,7,11,13,17,19,23,29,31 */

#include <iostream>
#include <conio.h>
using namespace std;

bool esPrimo(int *num);

int main(){
    int numero;
    int *ptr = &numero; 

    cout<<"Digite un numero: ";
    cin>>numero;

    if(esPrimo(ptr)) {cout << "\nEl numero es PRIMO\n";}
    else {cout<<"\nEl numero NO es primo\n";}

    cout<<"Valor del numero: "    <<*ptr<<endl;
    cout<<"Direccion de memoria: "<<ptr<<endl;

    getch();
    return 0;
}

bool esPrimo(int *num){
    if(*num<=1) {return false;}

    for(int i=2; i<=*num/2; i++){
        if(*num%i==0) {return false;}
    }
    return true;
}
