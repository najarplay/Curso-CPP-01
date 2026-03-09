/*realice un programa que lea una matriz dinamica de 
NxM y cree su matriz transpuesta NOTA: la matriz 
traspuesta es aquella en la que la columna (i) era 
la fila (i) de la  matriz original */

#include <iostream>
#include <conio.h>
using namespace std;

int main(){
    int filas, columnas;

    cout << "Digite el numero de filas: ";
    cin >> filas;
    cout << "Digite el numero de columnas: ";
    cin >> columnas;

    // Matriz dinamica original
    int **matriz = new int*[filas];
    for(int i = 0; i < filas; i++){
        matriz[i] = new int[columnas];
    }

    // Matriz dinamica transpuesta
    int **transpuesta = new int*[columnas];
    for(int i = 0; i < columnas; i++){
        transpuesta[i] = new int[filas];
    }

    // Llenar matriz
    cout << "\nDigite los elementos de la matriz:\n";
    for(int i = 0; i < filas; i++){
        for(int j = 0; j < columnas; j++){
            cout << "Elemento [" << i << "][" << j << "]: ";
            cin >> *(*(matriz + i) + j);   // matriz[i][j]
        }
    }

    // Calcular transpuesta
    for(int i = 0; i < filas; i++){
        for(int j = 0; j < columnas; j++){
            *(*(transpuesta + j) + i) = *(*(matriz + i) + j);
        }
    }

    // Mostrar transpuesta
    cout << "\nMatriz transpuesta:\n";
    for(int i = 0; i < columnas; i++){
        for(int j = 0; j < filas; j++){
            cout << *(*(transpuesta + i) + j) << " ";
        }
        cout << endl;
    }

    // Liberar memoria
    for(int i = 0; i < filas; i++){
        delete[] matriz[i];
    }
    delete[] matriz;

    for(int i = 0; i < columnas; i++){
        delete[] transpuesta[i];
    }
    delete[] transpuesta;

    getch();
    return 0;
}
