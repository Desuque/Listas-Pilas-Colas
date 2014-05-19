#include "Nodo.h"

Nodo::Nodo(int dato){
    this->dato=dato;
    this->siguiente=0;
}

void Nodo::cambiarDato(int nuevoDato){
    this->dato=nuevoDato;
}

Nodo* Nodo::obtenerSiguienteNodo(){
    return (this->siguiente);
}

int Nodo::obtenerDato(){
    return (this->dato);
}

void Nodo::setearSiguienteNodo(Nodo* nuevoSiguiente){
    this->siguiente=nuevoSiguiente;
}
