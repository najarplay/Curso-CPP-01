// insertar un elemento en una lista 

#include<iostream>
#include<conio.h>
using namespace std;

struct Nodo{
    int dato;
    Nodo *siguiente;
};

void insertarLista(Nodo *&, int);

int main(){
    Nodo *lista = NULL;

    int dato;

    cout<<"diguite un numero: ";
    cin>>dato;
    insertarLista(lista,dato);

    cout<<"diguite un numero: ";
    cin>>dato;
    insertarLista(lista,dato);

    cout<<"diguite un numero: ";
    cin>>dato;
    insertarLista(lista,dato);

    getch();
    return 0;
}

void insertarLista(Nodo *&lista, int n){
    Nodo *nuevo_nudo = new Nodo();
    nuevo_nudo->dato = n;

    Nodo *aux1 = lista;
    Nodo *aux2;

    while((aux1 != NULL) && (aux1 -> dato < n)){
        aux2 = aux1;
        aux1 = aux1->siguiente;
    }

    if (lista == aux1){
        lista = nuevo_nudo;
    }
    else{
        aux2->siguiente = nuevo_nudo;
    }

    nuevo_nudo->siguiente = aux1;

    cout<<"\telemento "<<n<<"insertado a lista corectamente\n";
}