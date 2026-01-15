/*comprueba si un numero digitado por el usuario
  es positivo o negativo */

  #include<iostream>

  using namespace std;

  int main(){
    int n;

    cout<<"digite un numero: "; cin>>n;

    if(n>=0){cout<<"el numero es positivo";}
    else{cout<<"el numero es negativo";}

    return 0;
  }