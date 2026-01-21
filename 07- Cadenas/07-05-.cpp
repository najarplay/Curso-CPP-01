/*pedir al usuario una cadena de caracteres, almacenarla
 en un arreglo y copiar todo su contenido hacia otro 
 arreglo de caracteres*/

 #include<iostream>
 #include<conio.h>
 #include<string.h>

 using namespace std;

 int main(){
    char cadena1[100];
    char cadena2[100];

    cout << "Ingrese una cadena de caracteres: ";
    cin.getline(cadena1, 100);

    int i = 0;
    while (cadena1[i] != '\0')
        {cadena2[i] = cadena1[i]; 
        i++;}

    cadena2[i] = '\0';

    cout<<"Cadena copiada: "<<cadena2<<endl;


    getch();
    return 0;
 }