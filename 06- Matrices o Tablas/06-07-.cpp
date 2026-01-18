/*desarrollar un programa que determine si una matriz
 es simetrica o no , una matriz es simetrica si es 
 cuadrada y si es igual a su matriz transpuesta

|8 1 3|    |8 1 3|
|1 7 4| -> |1 7 4|
|3 4 9|    |3 4 9|
 */

#include<iostream>
#include<conio.h>

using namespace std;

int main(){
    int numeros[100][100], filas, columnas;
    char band = 'f';

    cout<<"digite el numero de filas: "; cin>>filas;
    cout<<"digite el numero de columnas: "; cin>>columnas;

    for(int i=0; i<filas; i++){
        for(int j=0; j<columnas; j++){
            cout<<"digite un numero ["<<i<<"]["<<j<<"]: ";
            cin>>numeros[i][j];
        }
    }

    if(filas==columnas){
        for(int i=0; i<filas; i++){
            for(int j=0; j<columnas; j++){
                if(numeros[i][j] == numeros[j][i]){
                    band ='v';
                }
            }
        }
        
    }

    if (band == 'v'){cout<<"la matriz es simetrica";}
    else{cout<<"la matriz no es simetrica";}

    getch();
    return 0;
}


