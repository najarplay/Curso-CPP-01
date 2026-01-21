/*pasar una palabra a mayusculas funcion strupr()*/

#include<iostream>
#include<conio.h>
#include<string.h>

using namespace std;

int main(){
    char palabra[] = "alan";

    strupr(palabra);

    cout<<palabra<<endl;


    getch();
    return 0;
}