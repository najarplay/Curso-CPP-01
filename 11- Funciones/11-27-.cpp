/*realixe una funcion recursiva que suma los promeros 
n enteros positivosd - Notas: para plantear la funcion
recursiva tenga en cuenta que la suma puede expresarse
mediante la siguiente recurrencia

    suma(n) = 1           ,si n=1
              n+suma(n-1) ,si n>1*/

#include<iostream>
#include<conio.h>
using namespace std;

int sumar(int);

int main(){
    int nElementos;

    do{
        cout<<"digite el numero de elementos: ";
        cin>>nElementos;
    }while(nElementos <= 0);

    cout<<"\nla suma es: "<<sumar(nElementos)<<endl;

    getch();
    return 0;
}

int sumar(int n){
    int suma = 0;

    if (n == 1) {n = 1;}
    else {suma = n+sumar(n-1);}
    return suma;
}