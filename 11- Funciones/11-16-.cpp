/*realice una funcion que tome como parametros un 
vector de numeros enteros y devuelva la suma de sus 
elementos */

#include<iostream>
#include<conio.h>
using namespace std;

void pedirDatos();
int cal(int vec[],int tam);

int vec[100],tam;

int main(){
    pedirDatos();

    cout<<"\nla suma de lois elementos del vector: "<<cal(vec,tam)<<endl;

    getch();
    return 0;
}

void pedirDatos(){
    cout<<"digite el numero de elementos del vector: ";
    cin>>tam;

    for(int i=0; i<tam; i++){
        cout<<i+1<<"digite un numero: ";
        cin>>vec[i];
    }
}

int cal(int vec[], int tam){
    int suma = 0;

    for(int i=0; i<tam; i++){suma += vec[i];}

    return suma;
}