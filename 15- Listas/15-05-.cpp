// insertar un elemento en una lista 

#include<iostream>
#include<conio.h>
#include<stdlib.h>
using namespace std;

struct Nodo{
    int dato;
    Nodo *siguiente;
};

void menu();
void insertarLista(Nodo *&, int);
void mostrarLista(Nodo *);
void buscarLista(Nodo *, int);
void eliminarNodo(Nodo *&, int);

Nodo *lista = NULL;

int main(){
    menu();

    getch();
    return 0;
}

void menu(){
    int opcion, dato;

    do{
        cout<<"\t.:menu:.\n";
        cout<<"1. insertar elementos a la lista\n";
        cout<<"2. mostrar los elementos de la lista\n";
        cout<<"3. buscar un elemento en lista\n";
        cout<<"4. eliminar elemento";
        cout<<"5. salir\n";
        cout<<"opcion: ";
        cin>>opcion;
        switch (opcion){
            case 1: cout<<"diguite un numero: ";
                    cin>>dato;
                    insertarLista(lista,dato);
                    cout<<"\n";
                    system("pause");
                    break;
            case 2: mostrarLista(lista);
                    cout<<"\n";
                    system("pause");
                    break;
            case 3: cout<<"\n digite un numero a buscas";
                    cin>>dato;
                    buscarLista(lista,dato);
                    cout<<"\n";
                    system("pause");
                    break;
            case 4: cout<<"\n digite un numero a eliminar";
                    cin>>dato;
                    eliminarNodo(lista,dato);
                    cout<<"\n";
                    system("pause");
                    break;
        }
        system("cls");
    }while(opcion != 5);
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

void mostrarLista(Nodo*lista){
    Nodo *actual = new Nodo();
    actual = lista;

    while(actual != NULL){
        cout<<actual->dato<<" -> ";
        actual = actual->siguiente;
    }
}

void buscarLista(Nodo *lista, int n){
    bool band = false;
    Nodo *actual = new Nodo();
    actual = lista;

    while((actual != NULL) && (actual -> dato <= n)){
        if (actual->dato == n){band = true;}
        actual = actual->siguiente;
    }
    if(band == true){
        cout<<"elemento "<<n<<" si a sido encontrado";
    }
    else{
        cout<<"elemento "<<n<<" no a sido encontrado";
    }
}

void eliminarNodo(Nodo *&lista, int n){
    if(lista != NULL){
        Nodo *aux_borrar;
        Nodo *anterior =NULL;

        aux_borrar = lista;

        while((aux_borrar != NULL) && (aux_borrar->dato != n)){
            anterior = aux_borrar;
            aux_borrar = aux_borrar->siguiente;
        }

        if(aux_borrar == NULL){
            cout<<"el elemento no ha sido enconrado: ";
        }
        else if(anterior == NULL){
            lista = lista->siguiente;
            delete aux_borrar;
        }
        else{
            anterior->siguiente = aux_borrar->siguiente;
            delete aux_borrar;
        }
    }
}


