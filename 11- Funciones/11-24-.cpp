/*suma de numeros complejos

z1 = 5-3y   , z2 = -4+2y
z1 + z2 = (5-3y) + (-4+2y)
        = 5-4  -3y+2y
        = 1-1y
*/

#include<iostream>
#include<conio.h>
using namespace std;

struct Complejo{
    float real,imaginaria;
}z1,z2;

void pedirDatos();
Complejo suma(Complejo,Complejo);
void muestra(Complejo);

int main(){
    pedirDatos();
    Complejo x = suma(z1,z2);
    muestra(x);

    getch();
    return 0;
}

void pedirDatos(){
    cout<<"digita los datos para el primer numero complejo: "<<endl;
    
    cout<<"parte real: ";
    cin>>z1.real;
    cout<<"parte imaginaria: ";
    cin>>z1.imaginaria;

    cout<<"digita los datos para el primer numero complejo: "<<endl;

    cout<<"parte real: ";
    cin>>z2.real;
    cout<<"parte imaginaria: ";
    cin>>z2.imaginaria;

}

Complejo suma(Complejo z1, Complejo z2){
    z1.real += z2.real;
    z1.imaginaria += z2.imaginaria;

    return z1;
}

void muestra(Complejo x){
    cout<<"\nresultado de la suma: "<<x.real<<" "<<x.imaginaria<<endl;
}
