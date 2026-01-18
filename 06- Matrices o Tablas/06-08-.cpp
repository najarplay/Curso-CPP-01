/*realice un programa que calcule el producto de dos
 matrices cuadradas de 3x3*/

#include <iostream>
using namespace std;

int main() {
    int A[3][3], B[3][3], C[3][3];

    cout<<"Ingrese los elementos de la matriz A (3x3):"<<endl;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout<<"digite un numero ["<<i<<"]["<<j<<"]: ";
            cin>>A[i][j];
        }
    }

    cout<<"\ningrese los elementos de la matriz B (3x3):"<<endl;
    for (int i=0; i<3; i++) {
        for (int j=0; j<3; j++) {
            cout<<"digite un numero ["<<i<<"]["<<j<<"]: ";
            cin>>B[i][j];
        }
    }

    for (int i=0; i<3; i++) {
        for (int j=0; j<3; j++) {
            C[i][j]=0;
        }
    }

    for (int i=0; i<3; i++) {
        for (int j=0; j<3; j++) {
            for (int k=0; k<3; k++) {
                C[i][j] += A[i][k] * B[k][j];
            }
        }
    }

    cout<<"\nmatriz producto (A x B):"<<endl;
    for (int i=0; i<3; i++) {
        for (int j=0; j<3; j++) {
            cout<<C[i][j]<<"\t";
        }
        cout<<endl;
    }

    return 0;
}
