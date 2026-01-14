// escrive la siguiente expresion como expresion en c++

#include<iostream>

using namespace std;

int main(){
    float a, b, c, d, e, f, resultado =0;

    cout<<"digita el valor de a: "; cin>>a;
    cout<<"digita el valor de b: "; cin>>b;   
    cout<<"digita el valor de c: "; cin>>c;    
    cout<<"digita el valor de d: "; cin>>d;
    cout<<"digita el valor de e: "; cin>>e;
    cout<<"digita el valor de f: "; cin>>f;

    resultado = (a+(b/c))/(d+(e/f));

    cout<<"\nel resultado es: "<<resultado<<endl;

    return 0;
}