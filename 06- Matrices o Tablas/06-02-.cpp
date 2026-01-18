/*realiza un programa que defina una matriz de 3x3 
y escriba un ciclo para que muestre la diagonal 
principal de la matriz*/

#include <iostream>
using namespace std;

int main() {
    int matriz[3][3];

    cout<<"elementos de la matriz 3x3: "<<endl;
    for (int i=0; i<3; i++) {
        for (int j=0; j<3; j++) {cin>>matriz[i][j];}
    }

    for(int i=0; i<3; i++){ cout<<matriz[i][i]<<" ";}

    return 0;
}
