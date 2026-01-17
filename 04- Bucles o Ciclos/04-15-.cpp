/*hacer un programa que calcule el resultado de la
  siguiente exprecion :   1-2+3-4+5-6+7....n*/

#include <iostream>
using namespace std;

int main() {
    int n;
    int suma = 0;

    cout<<"ingresa el valor de n"; cin>>n;

    for (int i=1; i<=n; i++) {
        if (i%2==0) {suma -=i; } 
        else {suma +=i; }
    }

    cout<<"el resultado: "<<suma<<endl;

    return 0;
}
