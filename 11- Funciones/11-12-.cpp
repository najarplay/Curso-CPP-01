/*escriba una funcion nombrada cambio() que tenga un 
parametro en numero entero y seis parametros de referencia
en numero entero nombrados cien, cincuenta, veinte, 
diez, cinco y uno respectivamente la funcion tiene 
que considerar el valor entero transmitido como una 
cantidad en dolares y comvertir el valor en el numero 
de billetes equivalentes*/

#include <iostream>
#include <conio.h>
using namespace std;

void cambio(int cantidad, int &cien, int &cincuenta, 
            int &veinte,  int &diez, int &cinco, 
            int &uno);

int main(){
    int cantidad;
    int cien, cincuenta, veinte, diez, cinco, uno;

    cout<<"Digite la cantidad en dolares: ";
    cin>>cantidad;

    cambio(cantidad, cien, cincuenta, veinte, diez, cinco, uno);

    cout<< "\nBilletes:\n";
    cout<< "100: "<<cien<<endl;
    cout<< "50 : "<<cincuenta<<endl;
    cout<< "20 : "<<veinte<<endl;
    cout<< "10 : "<<diez<<endl;
    cout<< "5  : "<<cinco<<endl;
    cout<<"1  : "<<uno<<endl;

    getch();
    return 0;
}

void cambio(int cantidad, int &cien,  int &cincuenta, 
            int &veinte,  int &diez,  int &cinco, 
            int &uno){
    
    cien      = cantidad / 100; cantidad %= 100;
    cincuenta = cantidad / 50;  cantidad %= 50;
    veinte    = cantidad / 20;  cantidad %= 20;
    diez      = cantidad / 10;  cantidad %= 10;
    cinco     = cantidad / 5;   cantidad %= 5;
    uno       = cantidad;
}
