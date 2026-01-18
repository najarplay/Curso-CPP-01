/*hacer una matriz preguntando al usuario el numero 
de filas y columnas, llenarla de numeros aleatorios, 
copiar el contenido a otra matriz y pro ultima 
mostrarla en pantalla*/

#include <iostream>
#include <cstdlib>  
#include <ctime>    
using namespace std;

int main() {
    int filas, columnas;

    cout<<"numero de filas: "; cin>>filas;
    cout<<"numero de columnas: "; cin>>columnas;

    int matriz[filas][columnas];
    int copia[filas][columnas];

    srand(time(0)); 
    for (int i=0; i<filas; i++) {
        for (int j=0; j<columnas; j++) {
            matriz[i][j] = rand()%100;
            copia[i][j] = matriz[i][j]; 
        }
    }

    cout<<"\nmatriz copiada:"<<endl;
    for (int i=0; i<filas; i++) {
        for (int j=0; j<columnas; j++) {
            cout<<copia[i][j]<<"\t";}
        cout<<endl;
    }

    return 0;
}
