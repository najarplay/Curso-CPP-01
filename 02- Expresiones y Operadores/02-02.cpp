// escrive la siguiente expresion como expresion en c++

#include<iostream>

using namespace std;

int main(){
    float a, b, c, d, resultado = 0;

    cout<<"digita el valor de a: "; cin>>a;
    cout<<"digite el valor de b: "; cin>>b;
    cout<<"digita el valor de c: "; cin>>c;
    cout<<"digita el valor de d: "; cin>>d;

    resultado = (a+b)/(c+d);

    cout.precision(2); // esta linea ayuda a espesificar el numero de desimales
    cout<<"\nel resultado es : "<<resultado<<endl;

    return 0;
}