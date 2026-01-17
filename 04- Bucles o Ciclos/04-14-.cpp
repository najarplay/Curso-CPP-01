/*escriva un programa que calcule el valor de la 
  siguiente suma   2^1+2^2+2^3....+2^n    */

#include<iostream>
#include<conio.h>
#include<math.h>

using namespace std;

int main(){
    int suma = 0;
    int elevacion = 0;
    int n;

    cout<<"digite el numero del elementos: "; cin>>n;
    
    for(int i=1; i<=n; i++) { 
        elevacion = pow(2,i);
        suma += elevacion;
    }

    cout<<"\nla suma es: "<<suma<<endl;


    getch();
    return 0;
}