/*paso de parametros por refrerencia*/

#include<iostream>
#include<conio.h>
using namespace std;

void valNuevo(int&,int&);

int main(){
    int num1, num2;

    cout<<"digitw 2 numeros: ";
    cin>>num1>>num2;

    valNumevo(num1,num2);

    cout<<"el nuevo valor del primer numero es: "<<num1<<endl;
    cout<<"el nuevo valor del segundo nuemro es: "<<num2<<endl;

    getch();
    return 0;
}

void valNumevo(int& xnum, int& ynum){
    cout<<"el valor del primer numero es: "<<xnum<<endl;
    cout<<"el valor del segundo numero es: "<<ynum<<endl;

    xnum = 88;
    ynum = 90;

}