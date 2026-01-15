/*realise unprograma que lea un valor entero y muestre
si el numero es par o inpar*/

#include<iostream>

using namespace std;

int main(){
    int n;
    
    cout<<"digite un numero: "; cin>>n;
    if     (n==0)  {cout<<"el numero es ; 0";}
    else if(n%2==0){cout<<"el numero es par";}
    else           {cout<<"el numero es inpar";}


    return 0;
}