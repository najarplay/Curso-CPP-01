/*escriva una plamtilla de funcion llamada maximo()
que devuelva el valor maximo de tres argumentos que se 
transmitan a la funcion cuando sea llamada suponga que 
los tres argumentos seran del mismo tipo de dato */

#include <iostream>
#include <conio.h>
using namespace std;

template <class T>
T maximo(T a, T b, T c);

int main(){
    
    cout<<"Maximo (int): "   <<maximo(3, 7, 5)<<endl;
    cout<<"Maximo (float): " <<maximo(3.4f, 7.8f, 5.2f)<<endl;
    cout<<"Maximo (double): "<<maximo(10.5, 4.2, 8.9)<<endl;
    cout<<"Maximo (char): "  <<maximo('a', 'z', 'm')<<endl;

    getch();
    return 0;
}

template <class T>
T maximo(T a, T b, T c){
    T mayor = a;
    if(b > mayor){mayor = b;}
    if(c > mayor){mayor = c;}

    return mayor;
}
