#include "Nodo_DE.h"

Nodo_DE::Nodo_DE(int dato){
    this->dato=dato;
    this->siguiente=0;
    this->anterior=0;
}

void Nodo_DE::cambiarDato(int nuevoDato){
    this->dato=nuevoDato;
}

Nodo_DE* Nodo_DE::obtenerSiguienteNodo(){
    return (this->siguiente);
}

Nodo_DE* Nodo_DE::obtenerAnteriorNodo(){
    return(this->anterior);
}

int Nodo_DE::obtenerDato(){
    return (this->dato);
}

void Nodo_DE::setearSiguienteNodo(Nodo_DE* nuevoSiguiente){
    this->siguiente=nuevoSiguiente;
}

void Nodo_DE::setearAnteriorNodo(Nodo_DE* nuevoAnterior){
    this->anterior=nuevoAnterior;
}
