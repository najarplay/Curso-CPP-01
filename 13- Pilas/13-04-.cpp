#include <stack>
#include <iostream>
using namespace std;

int main(){
    stack<int> pila;

    pila.push(10);
    pila.push(20);
    pila.push(30);

    cout << pila.top(); // 30

    pila.pop();

    cout << pila.top(); // 20
}

// c++ ya tiene una libreria de pilas que te ayuda a
// crear una pil zin tanta creaxion de codigo 
// pero el entender la estructura te ayuda a editar