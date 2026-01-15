/*escriva un programa que lea dos numeros y 
determine cual es el mayor*/

#include<iostream>

using namespace std;

int main(){
    int n1, n2, n3;

    cout<<"digite el 1 numero : "; cin>>n1;
    cout<<"digite el 2 numero : "; cin>>n2;
    cout<<"digite el 3 numero : "; cin>>n3;

    cout<<"el mayor es: ";
    if   (n1==n2&&n1==n3){ cout<<"son iguales";}
    else if(n1>n2&&n1>n3){ cout<<n1; }
    else if(n1<n2&&n2>n3){ cout<<n2; }
    else if(n1<n3&&n2<n3){ cout<<n3; }
    else if(n1==n2){ cout<<n1<<" y "<<n2;}
    else if(n1==n3){ cout<<n1<<" y "<<n3;}
    else if(n2==n3){ cout<<n2<<" y "<<n3;}
    
    
    
    return 0 ;
}