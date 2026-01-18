/*realisa un programa que calcule la suma de dos 
matrices cuadradas de 3x3*/

#include <iostream>
using namespace std;

int main() {
    int A[3][3], B[3][3], C[3][3];

    cout<<"ingrese los elementos de la matriz A (3x3):"<<endl;
    for (int i=0; i<3; i++) {
        for (int j=0; j<3; j++) {
            cin>>A[i][j];
        }
    }

    cout<<"\ningrese los elementos de la matriz B (3x3):"<<endl;
    for (int i=0; i<3; i++) {
        for (int j=0; j<3; j++) {
            cin>>B[i][j];
        }
    }

    for (int i=0; i<3; i++) {
        for (int j=0; j<3; j++) {
            C[i][j] = A[i][j] + B[i][j];
        }
    }

    cout<<"\nmatriz suma (A + B):"<<endl;
    for (int i=0; i<3; i++) {
        for (int j=0; j<3; j++) {
            cout<<C[i][j]<<"\t";
        }
    }

    return 0;
}
