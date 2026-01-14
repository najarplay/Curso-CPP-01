/* escriba un programam que lea de la entrada estandar los dos catetos de un triangulo rectangulo y 
escriba en la salida estandar su hipotenusa */

#include <iostream>
#include <cmath>

using namespace std;

int main() {
    double cateto1, cateto2, hipotenusa;

    //cin >> cateto1 >> cateto2;
    cout<<"escriva el cateto 1 : "; cin>>cateto1;
    cout<<"escriva el cateto 2 : "; cin>>cateto2;

    hipotenusa = sqrt((cateto1 * cateto1) + (cateto2 * cateto2));

    cout<<"la hipotenusa es : "<<hipotenusa<<endl;

    return 0;
}

