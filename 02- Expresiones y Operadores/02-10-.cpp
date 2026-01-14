

#include<iostream>
#include<cmath>

using namespace std;
int main(){
    double a, b, c;
    double resumen, x1, x2;

    cout<<"ingresa el valor de a: "; cin>>a;
    cout<<"ingresa el valir de b: "; cin>>b;
    cout<<"ingresa el valor de c: "; cin>>c;

    if (a == 0) {
        cout<<"no es una ecuacion de segundo grado"<<endl;
        return 0;
    }

    resumen = b * b  -4 * a * c;
    
    if (resumen > 0){
        x1 = (-b + sqrt(resumen)) / (2 * a);
        x2 = (-b - sqrt(resumen)) / (2 * a);

        cout<<"dos soluciones realies"<<endl;
        cout<<"x1 = "<<x1<<endl;
        cout<<"x2 = "<<x2<<endl;
    }
/////
    else if (resumen == 0){
        x1 = -b / (2 * a);
        cout<<"una solucion real "<<endl;
        cout<<"x ="<<x1<<endl;
    }
/////
    else{
        cout<<"no existen soluciones realies"<<endl;
    }


    return 0;
}