/*la sentencia while: 

    while (exprecion logica){
        conjunto de instrucciones;
    }                                   */

#include<iostream>
#include<conio.h>

using namespace std;

int main(){
    int a ;  a = 1;

    while(a<=10){
        cout<<a<<endl;
        a++; // es igual que (a+=1;) o (a=a+1;)
    }

    getch(); // de la libreria conio.h 
             // evita que se cierre el programa solo
             // para cerra preciona una tecla 
    return 0;
}