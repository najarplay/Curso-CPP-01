//eliminar elementos de la cola
// insertar elementos en una cola

#include<iostream>
#include<conio.h>
#include<stdlib.h>
using namespace std;

struct Nodo{
    int dato;
    Nodo *siguiente;
};

void insertarCola(Nodo *&, Nodo *&, int);
bool cola_vacia(Nodo *);
void suprimirCola(Nodo *&, Nodo *&, int &);

int main(){
    Nodo *frente = NULL;
    Nodo *fin = NULL;

    int dato;

    cout<<"digite un nuevemo: ";
    cin>>dato;
    insertarCola(frente,fin,dato);

    cout<<"digite un nuevemo: ";
    cin>>dato;
    insertarCola(frente,fin,dato);

    cout<<"digite un nuevemo: ";
    cin>>dato;
    insertarCola(frente,fin,dato);

    cout<<"\nquitando los nodos";
    while(frente != NULL){
        suprimirCola(frente, fin, dato);

        if(frente != NULL){
            cout<<dato<<" , ";
        }
        else{
            cout<<dato<<" ... ";
        }
    }

    getch();
    return 0;
}

void innsertarCola(Nodo *&frente, Nodo *&fin, int n){
    Nodo *nuevo_nodo = new Nodo();

    nuevo_nodo-> dato = n;
    nuevo_nodo-> siguiente = NULL;

    if(cola_vacia(frente)){
        frente = nuevo_nodo;
    }
    else {
        fin->siguiente = nuevo_nodo;
    }

    fin = nuevo_nodo;
}

bool cola_vacia(Nodo *frente){
    return (frente == NULL)? true : false;
    /*      es igual al de ariva 
    if(frente == NULL){
        return true;    
    }
    else{
        return false;
    }*/
}

void suprimirCola(Nodo *&frente, Nodo *&fin, int &n){
    n = frente -> dato;
    Nodo *aux = frente;

    if(frente == fin){
        frente = NULL;
    }
    else{
        frente = frente -> siguiente;
    }

    delete aux;
}
