/*realice un programa que calcule la suma de dos matrices dinamicas*/

#include<iostream>
#include<conio.h>
#include<stdlib.h>
using namespace std;

void pedirDatos();
void sumar(int **, int **, int, int);
void mostrar(int **, int, int);

int **puntero_matriz, **puntero_matriz2, nFilas, nCol;

int main(){
    pedirDatos();
    sumar(puntero_matriz, puntero_matriz2, nFilas, nCol);
    mostrar(puntero_matriz, nFilas, nCol);

    // liverar memoria
    for(int i=0; i<nFilas; i++){
        delete[] puntero_matriz2[i];
    }delete [] puntero_matriz2;

    for(int i=0; i<nFilas; i++){
        delete[] puntero_matriz[i];
    }delete [] puntero_matriz;

    getch();
    return 0;
}

void pedirDatos(){

    cout<<"digite el numero de filas: ";
    cin>>nFilas;
    cout<<"digite el numero de colum: ";
    cin>>nCol;

    puntero_matriz = new int*[nFilas];
    for(int i=0; i<nFilas; i++){
        puntero_matriz[i] = new int[nCol];
    }

    cout<<"\ndigite lo9s elementos de la primera matriz: \n";
    for(int i=0; i<nFilas; i++){
        for(int j=0; j<nCol; j++){
            cout<<"digite un numero ["<<i<<"] ["<<j<<"]: ";
            cin>>*(*(puntero_matriz+i)+j);
        }
    }
    // segunda matriz
    puntero_matriz2 = new int*[nFilas];
    for(int i=0; i<nFilas; i++){
        puntero_matriz2[i] = new int[nCol];
    }

    cout<<"\ndigite lo9s elementos de la primera matriz: \n";
    for(int i=0; i<nFilas; i++){
        for(int j=0; j<nCol; j++){
            cout<<"digite un numero ["<<i<<"] ["<<j<<"]: ";
            cin>>*(*(puntero_matriz2+i)+j);
        }
    }
}

void sumar(int **puntero_matriz, int **puntero_matriz2, int nFilas, int nCol){
    for(int i=0; i<nFilas; i++){
        for(int j=0; j<nCol; j++){
            *(*(puntero_matriz+i)+j) += *(*(puntero_matriz2+i)+j);
        }
    }
}

void mostrar(int **puntero_matriz, int nFilas, int nCol){
    cout<<"]n la suma de las 2 matrices es: \n";
    for(int i=0; i<nFilas; i++){
        for(int j=0; j<nCol; j++){
            cout<<*(*(puntero_matriz+i)+j)<<" ";
        }
        cout<<"\n";
    }
}