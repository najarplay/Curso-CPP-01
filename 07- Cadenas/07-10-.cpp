/*invierte una cadena funcion strrev()*/

#include<iostream>
#include<conio.h>
#include<string.h>

using namespace std;

int main(){
    char cad[] = "renocer a";

    strrev(cad);
    
    cout<<cad<<endl;

    getch();
    return 0;
}