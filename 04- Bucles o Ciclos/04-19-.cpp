/*realice un programa que calcule la descomposicion
  en factores primero de un numero entero. 
   por ejemplo :    20 = 2*2*5*/


#include <iostream>
using namespace std;

int main() {
    int n;

    cout<<"ingrese un numero entero: "; cin>>n;
    cout<<n<<" = ";

    for (int i=2; i<=n; i++) {
        while (n % i == 0) {
            cout << i;
            n /= i;
            if (n>1){cout<<"*";}
        }
    }

    return 0;
}
