/*as un programa que simule un cajero automatico */

#include<iostream>

using namespace std;

int main(){
    int saldos = 1000;
    int opc;
    float extra, retiro, saldo = 0;

    cout<<"entrando a su cajero automatico"<<endl;
    cout<<"1- ingresa dinero en cuenta : "<<endl;
    cout<<"2- retirar dinero de la cuenta : "<<endl;
    cout<<"3- dalir : "<<endl;
    cout<<"opciones"<<endl;
    cin>>opc;

    switch(opc){
        case 1: cout<<"cantidad: "; cin>>extra;
                saldo = saldos + extra;
                cout<<"dinero en cuenta "<<saldo;break;
        case 2: cout<<"cantidad: "; cin>>retiro;
                if(retiro > saldos){
                    cout<<"saldo insuficiente";
                }
                else{
                    saldo = saldos - retiro;
                    cout<<"dinero en cuenta"<<saldo;break;
                }
        case 3: break;
                
    }


    return 0;
}


