#include "Pila.h"
#include "Nodo.h"

Pila::Pila(){
    primero=0;
}

Pila::~Pila(){
    while (not (this->pilaVacia())){
        this->borrarDato();
    }
}

void Pila::agregarDato(int dato){
    Nodo* nuevoPuntero = new Nodo(dato);
    nuevoPuntero->setearSiguienteNodo(primero);
    primero=nuevoPuntero;
}

bool Pila::pilaVacia(){
    return (this->primero==0);
}

int Pila::obtenerDato(){
    return primero->obtenerDato();
}

void Pila::borrarDato(){
    Nodo* nuevo = primero;
    primero=nuevo->obtenerSiguienteNodo();
    delete nuevo;
}
