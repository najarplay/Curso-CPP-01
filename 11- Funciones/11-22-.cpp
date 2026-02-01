/*realice una funcion que dada una matriz y un numero 
de fila de la matriz devuelva el menor de los elementos 
almacenados en dicha fila*/

#include <iostream>
#include <conio.h>
using namespace std;

void pedirDatos();
int menorFila(int mat[][3], int fila);

int mat[3][3];

int main(){
    pedirDatos();

    int fila;
    cout<<"\nDigite la fila a evaluar: ";
    cin>>fila;

    cout<<"\nEl menor elemento es "
         <<fila<<" "<<menorFila(mat, fila)<<endl;

    getch();
    return 0;
}

void pedirDatos(){
    cout<<"Digite los elementos de la matriz 3x3:\n";

    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            cout<<"Elemento ["<<i<<"]["<<j<<"]: ";
            cin>>mat[i][j];
        }
    }
}

int menorFila(int mat[][3], int fila){
    int menor = mat[fila][0];

    for(int j=1; j<3; j++){
        if(mat[fila][j] < menor){
            menor = mat[fila][j];
        }
    }

    return menor;
}
