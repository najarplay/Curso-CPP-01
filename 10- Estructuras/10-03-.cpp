/*hacer una estructuta llamada corredor en la cual se
tendran los siguientes campos Nombre, edad, sexo, club,
pedir datos al usuario para un corredor, y as una 
categoria de compericion
- jubenil <= 18 edad
- senor   <= 40 edad
- veterano<= 50 edad
posteriormente imprimir todos los datos del corredor,
incluido su categoria de competicion */


#include<iostream>
#include<conio.h>
#include<string.h>
using namespace std;

struct corredor{
    char nombre[20];
    int  edad;
    char sexo[10];
    char club[20];
}c1;

int main(){
    char categoria[20];

    cout<<"digite su nombre; "; 
    cin.getline(c1.nombre,20,'\n');
    cout<<"digite su direccion";
    cin>>c1.edad; fflush(stdin);
    cout<<"sexo; ";
    cin.getline(c1.sexo,10,'\n');
    cout<<"club; ";
    cin.getline(c1.club,20,'\n');
    cout<<"\n";

    if     (c1.edad <= 18){strcpy(categoria, "juvenil");}
    else if(c1.edad <= 40){strcpy(categoria, "senol");}
    else if(c1.edad <= 50){strcpy(categoria, "veterano");}
    

    cout<<"\ndatos del corredor "<<endl;

    cout<<"nombre; " <<c1.nombre<<endl;
    cout<<"edad; "   <<c1.edad<<endl;
    cout<<"sexo; "   <<c1.sexo<<endl;
    cout<<"club; "   <<c1.club<<endl;
    cout<<"categoria"<<categoria<<endl;

    getch();
    return 0;
}