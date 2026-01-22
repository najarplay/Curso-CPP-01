/*busqueda secuencial*/

#include<iostream>
#include<conio.h>

using namespace std;

int main(){
    int a[] = {3,4,6,8,1};
    int i, dato;
    char band = 'f';

    dato = 4;
    i=0;
    while((band == 'f') && (i<5)){
        if(a[i] == dato){band = 'v';}
        i++;
    }

    if(band == 'f'){cout<<"no existe";}
    else if(band == 'v'){
        cout<<"el numero a sido encontrado "<<i-1<<endl;
    }

    getch();
    return 0;
}///