/*escriba un programa que calcule x^y, donde tanto
 x como y son enteros positivos , sin utilizar 
 la funcion pow*/

#include <iostream>
using namespace std;

int main() {
    int x, y;
    int resultado = 1;

    cout<<"Ingrese la base x: "; cin>>x;
    cout<<"Ingrese el exponente y: "; cin>>y;

    for(int i=1; i<=y; i++) 
    {resultado = resultado * x; }

    cout<<x<<" elevado "<<y<<" es: "<<resultado<<endl;

    return 0;
}
