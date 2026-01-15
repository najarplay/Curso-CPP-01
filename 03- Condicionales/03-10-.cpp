/* escrive un programa que lea de la entrada estandar
tres numeros. despues debe leer un cuarto numer e
indicar si el numero coincide con alguno de los 
introducidos con anterioridad*/

#include<iostream>

using namespace std;

int main(){
    int a, b, c, x;

    cout<<"introduce numero A: "; cin>>a;
    cout<<"introduce numero B: "; cin>>b;
    cout<<"introduce numero C: "; cin>>c;
    cout<<"ahora el numero comparativo";
    cout<<"introduce numero X: "; cin>>x;

    if ((a==x)&&(b==x)&&(c==x))
        { cout<<"\nX = A, B y C"; }
    else if ((a==x)&&(x==b)){cout<<"\nX = A y B ";}
    else if ((a==x)&&(x==c)){cout<<"\nX = A y C ";}
    else if ((b==x)&&(x==c)){cout<<"\nX = B y C ";}
    else if (a==x){cout<<"\nX = A ";}
    else if (b==x){cout<<"\nX = B ";}
    else if (c==x){cout<<"\nX = C ";}
    else {cout<<"\nX no coincide ";}


///////////////////(   switch   )////////////////////
    int caso = 0;

    if (a == x) caso += 1;
    if (b == x) caso += 2;
    if (c == x) caso += 4;

    switch (caso) {
        case 0: cout<<"\nX no coincide "; break;
        case 1: cout<<"\nX = A ";         break;
        case 2: cout<<"\nX = B ";         break;
        case 4: cout<<"\nX = C ";         break;
        case 3: cout<<"\nX = A y B ";     break;
        case 5: cout<<"\nX = A y C ";     break;
        case 6: cout<<"\nX = B y C ";     break;
        case 7: cout<<"\nX = A, B y C ";  break; 
    }
////////////////////////////////////////////////////
    return 0;
}