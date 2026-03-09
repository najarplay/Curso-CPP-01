/*matrices dinamicas: rellenar una matiz de NxM y 
mostrar su contenido 

**puntero_matiz -> *puntero_fila -> [int] [int] [int]
                   *puntero_fila -> [int] [int] [int]
                   *puntero_fila -> [int] [int] [int]*/

#include<iostream>
#include<conio.h>
#include<stdlib.h>
using namespace std;

void pedirDatos();
void mostrarMatriz(int **, int, int);

int **puntero_matriz, nFilas, nCol;

int main(){
    pedirDatos();
    mostrarMatriz(puntero_matriz,nFilas,nCol);

    for(int i=0; i<nFilas; i++){
        delete[] puntero_matriz[i];
    }
    delete [] puntero_matriz;

    getch();
    return 0;
}

void pedirDatos(){

    cout<<"digita el numero de filas: ";
    cin>>nFilas;
    cout<<"digite el numero de colum: ";
    cin>>nCol;

    puntero_matriz = new int*[nFilas]; 
    for(int i=0; i<nFilas; i++){
        puntero_matriz[i] = new int[nCol];
    } 

    cout<<"\ndigitando elementos de la matriz: ";
    for(int i=0; i<nFilas; i++){
        for(int j=0; j<nCol; j++){
            cout<<"digite un numero ["<<i<<"] ["<<j<<"]: \n";
            cin>>*(*(puntero_matriz+i)+j);
        }
    }
}

void mostrarMatriz(int **puntero_matriz, int nFilas, int nCol){
    cout<<"\n\nimprimiendo matriz\n";
    for(int i=0; i<nFilas; i++){
        for(int j=0; j<nCol; j++){
            cout<<*(*(puntero_matriz+i)+j)<<" ";
        }
        cout<<"\n";
    }
}