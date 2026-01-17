/*la sentencia do while 

    do{
        conjunto de instruciones;
    }while(exprecion logica);

*/

#include<iostream>
#include<stdlib.h>

using namespace std;

int main(){
    int i;   i = 1;

    do{
        cout<<i<<endl;
        i++;
    }while(i<=10);

    system("pause"); // ayuda a que el sistema no cierre
    return 0;
}