/*realisa un programa que lea una cadena de caracteres de ka entrada estander muestre en la salida cuantos ocurencias de cada vocal existen*/

#include<iostream>
#include<conio.h>
#include<string.h>

using namespace std;

int main(){
    char frase[30];
    int v_a=0, v_e=0, v_i=0, v_o=0, v_u=0;

    cout<<"digite una frace: "; cin.getline(frase,30,'\n');

    for(int i=0; i<30; i++){
        switch(frase[i]){
            case 'a': v_a++; break;
            case 'e': v_e++; break;
            case 'i': v_i++; break;
            case 'o': v_o++; break;
            case 'u': v_u++; break;
        }
    }

    cout<<"vocal a se encontro "<<v_a<<endl;
    cout<<"vocal e se encontro "<<v_e<<endl;
    cout<<"vocal i se encontro "<<v_i<<endl;
    cout<<"vocal o se encontro "<<v_o<<endl;
    cout<<"vocal u se encontro "<<v_u<<endl;

    

    getch();
    return 0;
}