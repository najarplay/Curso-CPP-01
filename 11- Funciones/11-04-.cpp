/*escriba una funcion llamada al_cuadrado() que calcule
el cuadrado del valor que se le transmite y despliegue 
el resultado, la funcion debera ser capaz de elevar al
cuadrado numeros flotantes*/

#include<iostream>
#include<conio.h>
using namespace std;

void pedirDatos();
void al_cuadrado(float x);

float num1;

int main(){
    pedirDatos();
    al_cuadrado(num1);

    getch();
    return 0;
}

void pedirDatos(){
    cout<<"digite 1 numeros: ";
    cin>>num1;
}

void al_cuadrado(float x){
    float multiplicacion = x * x;
    cout<<"la multiplicacion es: "<<multiplicacion<<endl;
}