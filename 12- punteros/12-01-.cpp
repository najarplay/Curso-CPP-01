/*declaracion de punteros

en = la direccion de n
*n = la variable cuya direccion esta almaxenada en n*/

#include<iostream>
#include<conio.h>
using namespace std;

int main(){
    int num, *dir_num;

    num = 20;
    dir_num = &num;

    cout<<"numero: "<<num<<endl;
    cout<<"direcion de mom: "<<dir_num<<endl;

    getch();
    return 0;
}