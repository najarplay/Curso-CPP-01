/*ordenamiento por insercion */

#include<iostream>
#include<conio.h>

using namespace std;

int main(){
    int numeros[] = {4,5,2,1,3};
    int i,j,aux;

    for(i=0; i<5; i++){
        j = i;
        aux = numeros[i];

        while((j>0) && (numeros[j-1] > aux)){
            numeros[j] = numeros[j-1];
            j--;
        }
        numeros[j] = aux;
    }

    cout<<"orden acendente ";
    for(i=0; i<5; i++){
        cout<<numeros[i]<<" ";
    }

    getch();
    return 0;
}