/*mostrar los mese del ano pidiendole al usuario un 
  numero entre (1 - 12) y muestra el mes al que es*/

#include<iostream>

using namespace std;

int main(){
    int mes;

    cout<<"escribe el numero del mes: "; cin>>mes;

    int caso = mes;

    switch (caso){
    case 1 : cout<<"Enero";      break;
    case 2 : cout<<"Febrero";    break;
    case 3 : cout<<"Marzo";      break;
    case 4 : cout<<"Abril";      break;
    case 5 : cout<<"Mayo";       break;
    case 6 : cout<<"Junio";      break;
    case 7 : cout<<"Jolio";      break;
    case 8 : cout<<"Agosto";     break;
    case 9 : cout<<"Septiembre"; break;
    case 10: cout<<"Octubre";    break;
    case 11: cout<<"Nobiembre";  break;
    case 12: cout<<"Diciembre";  break;
    default: cout<<"equivocado"; break;
    }

    return 0;
}