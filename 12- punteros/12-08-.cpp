/*transmision de direciones

ejemplo: intercambiar el valor de 2 variables*/

#include<iostream>
#include<conio.h>
using namespace std;

void intercambio(float *, float *);

int main(){
    float num1 = 20.8, num2 = 6.78;

    cout<<"primer numero: "<<num1<<endl;
    cout<<"segundo numero: "<<num2<<endl;

    intercambio(&num1,&num2);
    cout<<"\n\ndespues del intercambio: \n\n";
    cout<<"el nuevo valor de num1: "<<num1<<endl;
    cout<<"el nuevo valor de num2: "<<num2<<endl;

    getch();
    return 0;
}

void intercambio(float *dirNm1, float *dirNm2){
    float aux;

    aux = *dirNm1;
    *dirNm1 = *dirNm2;
    *dirNm2 = aux;
}