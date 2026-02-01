/*escriba una funcion nombrada calc_anos() que tenga 
un parametro entero que represente el numero total 
de dias desde la fecha 1/1/2000 y parametros de 
referencia nombrados ano , mes y dia . la funcion es 
calcular el ano, mes y dia actual para el numero 
deda de dias que se le transmitan , para este problema
suponga que cada ano tiene 365dias y cada mes tiene 30 
dias*/

#include <iostream>
#include <conio.h>
using namespace std;

void calc_anos(int total_dias, int &ano, int &mes, int &dia);

int main(){
    int total_dias, ano, mes, dia;

    cout<<"Digite el numero total de dias: "; 
    cin>>total_dias;

    calc_anos(total_dias, ano, mes, dia);

    cout<<"\nFecha calculada:\n";
    cout<<"Dia: "<<dia<<endl;
    cout<<"Mes: "<<mes<<endl;
    cout<<"Ano: "<<ano<<endl;

    getch();
    return 0;
}

void calc_anos(int total_dias, int &ano, int &mes, int &dia){
    ano = 2000+(total_dias/365); total_dias %= 365;
    mes = (total_dias/30) + 1; total_dias %= 30;
    dia = total_dias + 1;
}
