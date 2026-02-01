/*desarrollar una funcion que determine si una matriz 
es simetrica o no una matriz es simetrica : a = a^t

|2 5 9|    |2 5 9|
|5 8 1| -> |5 8 1|
|9 1 0|    |9 1 0|*/

#include<iostream>
#include<conio.h>
using namespace std;

void pedirDatos();
void comprobar(int m[][100], int, int);

int m[100][100], nfilas, ncol;

int main(){
    pedirDatos();
    comprobar(m,nfilas,ncol);

    getch();
    return 0;
}

void pedirDatos(){
    cout<<"digite el numero de filas: "; cin>>nfilas;
    cout<<"digite el numero de colum: "; cin>>ncol;

    for(int i=0; i<nfilas; i++){
        for(int j=0; j<ncol; j++){
            cout<<"digite u numero ["<<i<<"]["<<j<<"]: ";
            cin>>m[i][j];        
        }
    }
}

void comprobar(int m[][100], int nfilas, int ncol){
    int cont = 0;

    if(nfilas == ncol){
        for(int i=0; i<nfilas; i++){
            for(int j=0; j<ncol; j++){
                if(m[i][j] == m[j][i]){
                    cont++;

                }
            }
        }
    }

    if (cont == nfilas*ncol){
        cout<<"la matris es simetrica"; 
    }
    else {cout<<"la matriz no es simetrica";}
}

