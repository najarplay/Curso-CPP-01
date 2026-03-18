// sobrecarga de constructores

#include<iostream>
#include<stdlib.h>
using namespace std;

class Fecha{
    private:
        int dia, mes, anio;
    public:
        Fecha(int,int,int);
        Fecha(long);
        void mostrarFecha();
};

// constructord DD-MM-AA
Fecha::Fecha(int _dia, int _mes, int _anio){
    anio = _anio;
    mes = _mes;
    dia = _dia;
}

Fecha::Fecha(long fecha){
    anio = int(fecha/10000);
    mes = int((fecha-anio*10000)/100);
    dia = int(fecha-anio*10000-mes*100);
}

void Fecha::mostrarFecha(){
    cout<<"lafecha es : "<<dia<<"-"<<mes<<"-"<<anio<<endl;
}

int main(){
    Fecha hoy(9,1,20);
    Fecha ayer(20170108);

    hoy.mostrarFecha();
    ayer.mostrarFecha();

    system("pause");
    return 0;
}
