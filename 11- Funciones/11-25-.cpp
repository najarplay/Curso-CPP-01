/*escriba una funcion en C++ llamada mayor() que devuelva
 la fecha mas reciente de cualquier par de fechas que 
 se le transmitan 10/09/2005 y 11/3/2015 a mayor()
  , sera devuelta la segunda fecha*/

#include <iostream>
#include <conio.h>
using namespace std;

struct Fecha{
    int dia;
    int mes;
    int anio;
};

Fecha mayor(Fecha f1, Fecha f2);

int main(){
    Fecha fecha1 = {10, 9, 2005};
    Fecha fecha2 = {11, 3, 2015};

    Fecha reciente = mayor(fecha1, fecha2);

    cout << "La fecha mas reciente es: "
         << reciente.dia  << "/"
         << reciente.mes  << "/"
         << reciente.anio << endl;

    getch();
    return 0;
}

Fecha mayor(Fecha f1, Fecha f2){
    if     (f1.anio > f2.anio) {return f1;}
    else if(f2.anio > f1.anio) {return f2;}
    else if(f1.mes  > f2.mes)  {return f1;}
    else if(f2.mes  > f1.mes)  {return f2;}
    else if(f1.dia  > f2.dia)  {return f1;}
    else                       {return f2;}
}
