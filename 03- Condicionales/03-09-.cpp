/*escrive un programa que solicite una edad y verifique
si la edad esta en un rango*/

#include<iostream>

using namespace std;

int main (){
    int edad;

    cout<<"escrive tu edad : "; cin>>edad;

    if((edad>=18)&&(edad<=25)){
        cout<<"tu edad esta en rango";}
    else{cout<<"tu edad no esta en rango";}


    return 0;
}


