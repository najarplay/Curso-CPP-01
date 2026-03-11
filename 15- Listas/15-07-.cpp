// crea una lista que almacene  "n" numeros anteros y 
//calcula el menor y mayor de ellos

#include<iostream>
#include<stdlib.h>
#include<conio.h>
using namespace std;

struct Nodo{
    int dato;
    Nodo *siguinete;
};

void insertarLista(Nodo *&, int);
void mostrarLista(Nodo *);
void calcularMayorMenor(Nodo *);

int main(){
    Nodo *lista = NULL;
    int dato;
    char respuesta;

    do{
        cout<<"diguita un numero: ";
        cin>>dato;
        insertarLista(lista,dato);

        cout<<"desea agregar otro nodo(s/n); ";
        cin>>respuesta;
    }while(respuesta == 's' || respuesta == 'S' );

    cout<<"\nelementos de la lista: \n";
    mostrarLista(lista);

    calcularMayorMenor(lista);



    return 0 ;
}

void insertarLista(Nodo *&lista, int n){
    Nodo *nuevo_nodo = new Nodo();
    Nodo *aux;

    nuevo_nodo-> dato = n;
    nuevo_nodo-> siguinete = NULL;

    if (lista == NULL){
        lista = nuevo_nodo;
    }
    else{
        aux = lista;
        while(aux->siguinete != NULL){
            aux = aux->siguinete;
        }
        aux->siguinete = nuevo_nodo;
    }
    cout<<"\telemento "<<n<<"agregar a lista correctamente\n";
}

void mostrarLista(Nodo *lista){
    while(lista != NULL){
        cout<<lista->dato<<" -. ";
        lista = lista->siguinete;
    }
}

void calcularMayorMenor(Nodo *lista){
    int mayor =0 , menor=99999;

    while(lista != NULL){
        if((lista -> dato) > mayor){
            mayor = lista->dato;
        }
        if((lista -> dato) < menor){
            menor = lista->dato;
        }
        lista = lista->siguinete;
    }
    cout<<"\n el mayor elemento es: "<<mayor<<endl;
    cout<<"\n el menor elemento es; "<<menor<<endl;
}

