/*escriba un programa que calcule el valor de: 
  1!+2!+3!+....n!   */

#include<iostream>
#include<conio.h>

using namespace std;

int main(){
    int n, factorial = 1, suma = 0;

    cout<<"digite el numero del elementos: "; cin>>n;
    
    for(int i=1; i<=n; i++) 
    { factorial *= i; suma += factorial; }

    cout<<"\nla suma es: "<<suma<<endl;


    getch();
    return 0;
}