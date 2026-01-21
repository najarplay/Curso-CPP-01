/*comprara cadenas = funcion strcpy()*/

#include<iostream>
#include<conio.h>
#include<string.h>

using namespace std;

int main(){
    char palabra1[] = "hola";
    char palabra2[] = "hola";

    if(strcmp(palabra1,palabra2)==0){cout<<"son iguales";}
    
    getch();
    return 0;
}