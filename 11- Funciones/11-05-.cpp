/*escriva una funcion nombrada funpot() que eleve un
numero entero que se le transmita a una potencia en 
numero entero positivo y despliegue el resultado
el numero entero positivo debera ser el segundo valor
transmitido a la funcion*/

#include<iostream>
#include<conio.h>
using namespace std;

void pedirDatos();
void funpot(int x, int y);

int numero, exponente ;

int main(){
    pedirDatos();
    funpot(numero,exponente);

    getch();
    return 0;
}

void pedirDatos(){
    cout<<"digite un numero: ";
    cin>>numero;
    cout<<"digite el exponente de elevacion: ";
    cin>>exponente;
}

void funpot(int x, int y){
    long resultado;
    for(int i=1; i<=y; i++){
        resultado *= x;
    }
    cout<<"el resultado es: "<<resultado<<endl;
}