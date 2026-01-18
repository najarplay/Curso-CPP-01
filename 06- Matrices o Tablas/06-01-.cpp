/*hacer un programa para rellenar una matriz pidiendo
  al usuario al usuario el numero de filas columnas
  , posteriormente mostrar la matriz en pantalla*/

#include<iostream>
#include<conio.h>

using namespace std;

int main(){
    int numeros[100][100], filas,columnas;

    cout<<"digite el numero de filas: "; cin>>filas;
    cout<<"digite el numero de columnas: "; cin>>columnas;
    
    for(int i=0; i<filas; i++){
        for(int j=0; j<columnas; j++){
            cout<<"digite un numero ["<<i<<"]["<<j<<"]"; cin>>numeros[i][j];
        }
    } // 

    for(int i=0; i<filas; i++){
        for(int j=0; j<columnas; j++){cout<<numeros[i][j];}
        cout<<"\n";
    }

    getch();
    return 0 ;
}