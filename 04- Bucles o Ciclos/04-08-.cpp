/*escriba un programa que le valores enteros que se 
introdusca en el rango  [20-30] o se introdusca
al valor 0 el programa debe entregar la suma de los 
valores mayores a 0 introducidos*/

#include<iostream>
#include<stdlib.h>

using namespace std;

int main(){
    int numero, suma = 0;

    do{
        cout<<"digite un numero "; cin>>numero;

        if(numero>0){
            suma += numero;
        }
    }while(((numero<20) || (numero>30)) && (numero != 0));

    cout<<"\nla suma es: "<<suma<<endl;

    system("pause");
    return 0;
}