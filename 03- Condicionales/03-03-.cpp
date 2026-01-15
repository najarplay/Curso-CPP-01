/*escriva un programa que lea dos numeros y 
determine cual es el mayor*/

#include<iostream>

using namespace std;

int main(){
    int n1, n2;

    cout<<"digite dos numero : "; cin>>n1>>n2;

    if (n1 == n2) { cout<<"el numero es igual";}
    else if(n1>n2){ cout<<"el mayor es: "<<n1; }
    else          { cout<<"el mayor es: "<<n2; }
    
    return 0 ;
}

