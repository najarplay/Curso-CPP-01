/*escriba una funcion llamada mult() que acepte dos 
numeros en puntos floatante como parametros, 
multiplique estos dos numeros y despliege el resultado*/

#include<iostream>
#include<conio.h>

using namespace std;

// protototipos de funcion 
void pedirDatos();
void mult(float x, float y);

float num1,num2;

int main(){
    pedirDatos();
    mult(num1,num2);

    getch();
    return 0;
}

void pedirDatos(){
    cout<<"digite 2 numeros: ";
    cin>>num1>>num2;
}

void mult(float x, float y){
    float multiplicacion = x * y;
    cout<<"la multiplicacion es: "<<multiplicacion<<endl;
}