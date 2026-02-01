/*factorial de un numero  3! = 3*2*1

        factorial(n) = 1                ,si n=0
                       n*factorial(n-1) ,si n>0   */

#include<iostream>
#include<conio.h>
using namespace std;

int factorial(int);

int main(){
    cout<<factorial(3)<<endl;

    getch();
    return 0;
}

int factorial(int n){
    if(n == 0) {n = 1;}
    else{n = n * factorial(n-1);}
    return n;
}