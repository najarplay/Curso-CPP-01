/*realice un programa que solicite al usuario que 
  piense un numero entero entre 1 y el 100 , el 
  programa debe geneerar un numero aleatorio en 
  ese mismo rango[1-100] , e indicar al usuario si 
  el numero que digito es mayor o menor al numero 
  aleatorio asi hasta que lo adivine y por ultimo 
  mostrarle el numero de intentos que le lleva */

  #include<iostream>
  #include<stdlib.h>
  #include<time.h>

  using namespace std;

  int main(){
    int numero, dato, contador = 0;

    srand(time(NULL)); // genera un numero aleatorio
    dato = 1 + rand()%(100); // 25

    do{ cout<<"digite un numero: "; cin>>numero;
        if(numero>dato){cout<<"\nnumero menor\n";}
        if(numero<dato){cout<<"\nnumero mayor\n";}
        contador++;
    }while(numero != dato);

    cout<<"ganador\n"<<contador<<" intentos"<<endl;

    system("pausa");
    return 0;
  }