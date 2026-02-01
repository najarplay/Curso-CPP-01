/*realice una funcion recursiva para la serie Fibonacci 
- Nota: la serie de Fibonacci esta formada por la 
secuencia de numeros:  0,1,1,2,3,5,8,13,21,34*/

#include <iostream>
#include <conio.h>
using namespace std;

int fibonacci(int n);

int main(){
    int n;

    do{
        cout<<"digite la cantidad de elementos: ";
        cin>>n;
    }while(n <= 0);

    for(int i=0; i<n; i++) {cout<<fibonacci(i)<<" ";}

    getch();
    return 0;
}

int fibonacci(int n){
    if     (n == 0) {return 0;}
    else if(n == 1) {return 1;}
    else {return fibonacci(n-1) + fibonacci(n-2);}
}
