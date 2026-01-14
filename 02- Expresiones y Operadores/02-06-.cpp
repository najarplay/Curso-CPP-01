// escriba un programa que lea la nota inal de cuatro alumnos y calcule la nota final media de los cuatro alumnos

#include<iostream>

using namespace std;

int main(){
    float a, b, c, d, promedio = 0;

    cout<<"nota del alumno A: "; cin>>a;
    cout<<"nota del alumno B: "; cin>>b;
    cout<<"nota del alumno C: "; cin>>c;
    cout<<"nota del alumno D: "; cin>>d;

    promedio = (a+b+c+d)/4;

    cout<<"\nnota promedio: "<<promedio<<endl;

    return 0 ;
}