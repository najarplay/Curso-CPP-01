// escrive un programa que intercambie los valores 

#include<iostream>

using namespace std;

int main(){

    int x,y,z;

    cout<<"dijita el valor de x: "; cin>>x;
    cout<<"dijite el valor de y: "; cin>>y;

    z = x;
    x = y;
    y = z;

    cout<<"\nel valor de x es: "<<x<<endl;
    cout<<"\nel valor de y es: "<<y<<endl;
    

    return 0;
}