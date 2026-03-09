/*cos=respundencia entre arrays y punteros*/

#include<iostream>
#include<conio.h>
using namespace std;

int main(){
    int numero[] = {1,2,3,4,5};
    int *dir_numeros;

    dir_numeros = numero;

    for(int i=0; i<5; i++){
        cout<<"posicion de memoria "<<numero[i]<<" es: "<<dir_numeros++<<endl;
        cout<<"elemento del vector ["<<i<<"]: "<<*dir_numeros++<<endl;
    }

    getch();
    return 0;
}