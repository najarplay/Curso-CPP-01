/*ejemplo encontrar el mayor de 2 numeros*/

#include<iostream>
#include<conio.h>
using namespace std;

int encontrarMax(int x, int y);


int main(){
    int n1, n2;
    int mayor;

    cout<<"digite 2 numeros: "; cin>>n1>>n1;
    cout<<"el mayor de los 2 numeros es: "<<encontrarMax(n1,n2)<<endl;

    getch();
    return 0;
}

//definicion de la funcion
int encontrarMax(int x, int y){
    int numMax;
    if (x>y){numMax = x;}
    else    {numMax = y;}
    return numMax;
}