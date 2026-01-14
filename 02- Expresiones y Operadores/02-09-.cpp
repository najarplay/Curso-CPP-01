// realisa un programa que calcule el valor quee toma la aigueiente funcion para valoraes dados de xe y :

#include<iostream>
#include<math.h>

using namespace std;

int main(){
    float x, y, resultado = 0;

    cout<<"digita el valor de x : "; cin>>x;
    cout<<"digita el valor de y : "; cin>>y;

    resultado = (sqrt(x))/(pow(y,2)-1);

    cout<<"\nel resultado es : "<<resultado<<endl;


    return 0;
}