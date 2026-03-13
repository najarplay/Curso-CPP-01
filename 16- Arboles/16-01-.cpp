#include<iostream>
#include<conio.h>
#include<stdlib.h>
using namespace std;

struct Nodo{
    int dato;
    Nodo *der;
    Nodo *izq;
    Nodo *padre;
};

void menu();
Nodo *crearnodo(int, Nodo *);
void insertarNodo(Nodo*&, int, Nodo *);
void mostrarArbol(Nodo *, int);
bool busqueda(Nodo *, int);
void preOrden(Nodo *);
void inOrden(Nodo *);
void posOrden(Nodo *);
void eliminar(Nodo *, int );
void eliminarNodo(Nodo *);
Nodo *minimo(Nodo *);
void reemplazar(Nodo *, Nodo *);
void destruir(Nodo *);


Nodo *arbol = NULL;

int main(){
    menu();
    
    getch();
    return 0;
}

void menu(){
    int dato, opcion, contador=0;
        do{
        cout<<"\t.:MENU:."<<endl;
        cout<<"1. insertar un nuevo nodo"<<endl;
        cout<<"2. mostrar el arbol completo"<<endl;
        cout<<"3. buscar"<<endl;
        cout<<"4. recorer el arbol en preOrden"<<endl;
        cout<<"5. recorer en in orden: "<<endl;
        cout<<"6. posorden: "<<endl;
        cout<<"7. eliminar nodo"<<endl;
        cout<<"8. salir"<<endl;
        cout<<"opcion: ";
        cin>>opcion;

        switch(opcion){
            case 1: cout<<"\ndigite un numero ";
                    cin>>dato;
                    insertarNodo(arbol,dato,NULL);
                    cout<<"\n";
                    system("pause");
                    break;
            case 2: cout<<"\nmostrarndo el arbol compleyo: \n\n";
                    mostrarArbol(arbol,contador);
                    cout<<"\n";
                    system("pause");
                    break;
            case 3: cout<<"\ndigita el elemento a buscar: ";
                    cin>>dato;
                    if(busqueda(arbol,dato) == true){
                        cout<<"\nelemento "<<dato<<"esta en el arbol "<<endl;   
                    }
                    else{
                        cout<<"\nelemento no encontrado ";
                    }
                    cout<<"\n";
                    system("pause");
                    break;
            case 4: cout<<"\nrecorido en preorden: ";
                    preOrden(arbol);
                    cout<<"\n\n";
                    system("pause");
                    break;
            case 5: cout<<"\nrecorido en in orden: ";
                    inOrden(arbol);
                    cout<<"\n\n";
                    system("pause");
                    break; 
            case 6: cout<<"\nrecorido en posorden: ";
                    posOrden(arbol);
                    cout<<"\n\n";
                    system("pause");
                    break;
            case 7: cout<<"\ndigite el numero a eliminar: ";
                    cin>>dato;
                    eliminar(arbol,dato);
                    cout<<"\n";
                    system("pause");
                    break;

        }
        system("cls");
    }while(opcion != 8);
}

Nodo *crearNodo(int n, Nodo *padre){
    Nodo *nuevo_nodo = new Nodo();

    nuevo_nodo->dato = n;
    nuevo_nodo->der = NULL;
    nuevo_nodo->izq = NULL;
    nuevo_nodo->padre = padre;

    return nuevo_nodo;
}

void insertarNodo(Nodo *&asbol, int n, Nodo *padre){
    if (arbol ==NULL){
        Nodo *nuevo_nodo = crearNodo(n,padre);
        arbol = nuevo_nodo;
    }
    else{
        int valorRaiz = arbol->dato;
        if(n < valorRaiz){
            insertarNodo(arbol->izq,n,arbol);
        }
        else{
            insertarNodo(arbol->der,n,arbol);
        }
    }
}

void mostrarArbol(Nodo *arbol, int cont){
    if (arbol == NULL){
        return;
    }
    else{
        mostrarArbol(arbol->der,cont+1);
        for(int i=0; i<cont; i++){
            cont<<'  ';
        }
        cout<<arbol->dato<<endl;
        mostrarArbol(arbol->izq,cont+1);
    }
}

bool busqueda(Nodo *arbol, int n ){
    if(arbol == NULL){
        return false;
    }
    else if( arbol -> dato == n ){
        return true;
    }
    else if( n < arbol -> dato ){
        return busqueda( arbol -> izq, n );
    }
    else {
        return busqueda( arbol -> der, n );
    }
}

void preOrden(Nodo *arbol){
    if(arbol == NULL){
        return;
    }
    else{
        cout<<arbol->dato<<" . ";
        preOrden(arbol->izq);
        preOrden(arbol->der);
    }
}

void inOrden(Nodo *arbol){
    if(arbol == NULL){
        return;
    }
    else{
        inOrden(arbol->izq);
        cout<<arbol->dato<<" - ";
        inOrden(arbol->der);
    }
}

void posOrden(Nodo *arbol){
    if(arbol == NULL){
        return;
    }
    else{
        posOrden(arbol->izq);
        posOrden(arbol->der);
        cout<<arbol->dato<<" - ";   
    }
}

void eliminar(Nodo *arbol, int n){
    if(arbol == NULL){
        return;
    }
    else if (n < arbol->dato){
        eliminar(arbol->izq,n);
    }
    else if(n > arbol->dato){
        eliminar(arbol->der,n);
    }
    else{
        eliminarNodo(arbol);
    }
}

Nodo *minimo(Nodo *arbol){
    if(arbol == NULL){
        return NULL
;   }
    if(arbol->izq){
        return minimo(arbol->izq);
    }
    else{
        return arbol;
    }
}

void reemplazar(Nodo *arbol, Nodo *nuevoNodo){
    if(arbol->padre){
        if(arbol->dato == arbol->padre->izq->dato){
            arbol->padre->izq = nuevoNodo;
        }
        else if(arbol->dato == arbol->padre->der->dato){
            arbol->padre->der = nuevoNodo;
        }
    }
    if(nuevoNodo){
        nuevoNodo->padre = arbol->padre;
    }
}

void destruir(Nodo *nodo){
    nodo->izq = NULL;
    nodo->der = NULL;

    delete nodo;
}

void eliminarNodo(Nodo *nodoEliminar){
    // eliminar con 2 hijos
    if(nodoEliminar->izq && nodoEliminar->der){
        Nodo *menor = minimo(nodoEliminar->der);
        nodoEliminar->dato = menor->dato;
        eliminarNodo(menor);
    }
    //eliminar con un solo hijo 
    else if(nodoEliminar->izq){
        reemplazar(nodoEliminar, nodoEliminar->izq);
        destruir(nodoEliminar);
    }
    else if(nodoEliminar->der){
        reemplazar(nodoEliminar, nodoEliminar->der);
        destruir(nodoEliminar);
    }
    // eliminar nodo hoja
    else{
        reemplazar(nodoEliminar, NULL);
        destruir(nodoEliminar);
    }
}

