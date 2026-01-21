/*crea una cadena que tenga la siguiente frase 
"hola que tal" luego crear otra cadena para preguntarle
 al usuario su nombre por ultimo anadir el nombre al 
 final de la primera cadena y mostrar el mensaje 
 compreto "hola que tal (nombre del usuario)"*/

 #include<iostream>
 #include<conio.h>
 #include<string.h>

 using namespace std;

 int main(){
    char h[] = "hola que tal ";
    char u[30];
    char a[100];

    cout<<"ingresa tu nombre: "; cin>>u;
    strcpy(a,h); strcat(a,u); cout<<a;

    getch();
    return 0;
 }
