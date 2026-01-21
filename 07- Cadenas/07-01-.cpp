/*cadenas de caracteres*/

#include<iostream>
#include<conio.h>
#include<string.h>

using namespace std;

int main(){
    char palabra[] = "Alejandro" ;
    char palabra2[] = {'a','l','e','j','a','n'};
    char nombre[30];

    cout<<"digite su nombre: "; 
    cin.getline(nombre,20,'\n'); // el mejor por que seleccionas la cantidad
    // de caracteres y como terminar de guardar 
    // gets(nombre);// este tiene el problema que guarda dator de mas
    // cin>>nombre; // cuando pones " " espacio deja de guardar
    cout<<nombre<<endl;


    getch();
    return 0;
}