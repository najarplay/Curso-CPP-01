// escrive un programa que lea un precio y muestre el precio del producti y el iva

#include<iostream>

using namespace std;

int main(){
    int n1 = 0 , iva = 0 ;

    cout<<"\nescrive el precio del producto : "; cin>>n1;

    iva  = ((n1 * 1.16) - n1);

    cout<<"\nproducto : "<<n1<<endl;
    cout<<"\niva : "<<iva<<endl;
    cout<<"\nproducto + iva : "<<n1 + iva<<endl;

    return 0 ;
}