// escribe un programa que lea dos entradas de datos y muestre la + , - , * , /

#include<iostream>

using namespace std;

int main(){
    int n1, n2, suma = 0, resta = 0, mult = 0, divi = 0;

    cout<<"\nescrive el primer numero : "; cin>>n1;
    cout<<"\nescrive el segundo numero : "; cin>>n2;

    suma  = n1 + n2;
    resta = n1 - n2;
    mult  = n1 * n2;
    divi  = n1 / n2;

    cout<<"\nla suma es : "<<suma<<endl;
    cout<<"\nla resta es : "<<resta<<endl;
    cout<<"\nla mult es : "<<mult<<endl;
    cout<<"\nla divi es : "<<divi<<endl;

    return 0 ;
}