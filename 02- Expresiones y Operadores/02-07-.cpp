/*la calificacion final de un estudiante es la medida ponderada de tres notas 
la nota de participacion que cuenta un 30% del total , la nota teorica que cuenta un 
60% y la nota de participacion cuenta el 10% restante . escribe un programa que lea 
las tres notas de un alumno y escriba en la salida */

#include<iostream>

using namespace std;

int main(){
    float practica, teorica, parti, nota_final = 0 ;

    cout<<"digita la nota de practica: ";      cin>>practica;
    cout<<"digita la nota de teorica: ";       cin>>teorica;
    cout<<"digita la nota de participacion: "; cin>>parti;

    practica *= 0.30;
    teorica  *= 0.60;
    parti    *= 0.10;

    nota_final = practica + teorica + parti;

    cout<<"\nla nota final es : "<<nota_final<<endl;

    return 0;
}