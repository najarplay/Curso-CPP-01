/*escriba un programa en c++ que devuelva la parte
fraccionaria de cualquier numero introducido por el 
usuario por ejemplo, si se introduce el numero 256.879 
deberia desplegarse el numero .879*/

#include<iostream>
#include<conio.h>
using namespace std;

void pedirDatos();
void fraccionaria(float x);

double numero;

int main() {
    pedirDatos();
    fraccionaria(numero);

    getch();
    return 0;
}

void pedirDatos(){
    cout<<"digite un numero: "; cin>>numero;
}

void fraccionaria(float x){
    int    entera = (float)x;            
    double fraccionaria = x - entera; 

    cout<<"La parte fraccionaria es: "<<fraccionaria<<endl;
}