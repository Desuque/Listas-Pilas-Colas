#include "Lista_DE.h"
#include "Nodo_DE.h"

Lista_DE::Lista_DE(){
    this->primero=0;
    this->cursor=0;
    this->tamanio=0;
}

bool Lista_DE::estaVacia(){
    return (this->tamanio==0);
}

int Lista_DE::contarElementos(){
    return tamanio;
}

void Lista_DE::agregar(int elemento){
    agregar(elemento, this->tamanio+1);
}

void Lista_DE::agregar(int elemento, int posicion){
    if ((posicion>0) && (posicion<=tamanio+1)){
        Nodo_DE* nuevo = new Nodo_DE(elemento);

        if (posicion==1){
            nuevo->setearSiguienteNodo(this->primero);
            nuevo->setearAnteriorNodo(0);
            this->primero=nuevo;
        }
        else{
            Nodo_DE* anterior = this->obtenerNodo(posicion-1);
            nuevo->setearSiguienteNodo(anterior->obtenerSiguienteNodo());
            anterior->setearSiguienteNodo(nuevo);

            Nodo_DE* siguiente = this->obtenerNodo(posicion+1);
            nuevo->setearAnteriorNodo(siguiente->obtenerAnteriorNodo());
            siguiente->setearAnteriorNodo(nuevo);

        }
        tamanio++;
    }
    this->iniciarCursor();
}

int Lista_DE::obtener(int posicion){
    int elemento;
    elemento=this->obtenerNodo(posicion)->obtenerDato();
}

void Lista_DE::asignar(int elemento, int posicion){
    obtenerNodo(posicion)->cambiarDato(elemento);
}

void Lista_DE::remover(int posicion){
    Nodo_DE* aBorrar;

    if (posicion==1){
        aBorrar=this->primero;
        this->primero=aBorrar->obtenerSiguienteNodo();
    }
    else{
        Nodo_DE* anterior=obtenerNodo(posicion-1);
        aBorrar=anterior->obtenerSiguienteNodo();
        anterior->setearSiguienteNodo(aBorrar->obtenerSiguienteNodo());

        Nodo_DE* siguiente=obtenerNodo(posicion+1);
        aBorrar= siguiente->obtenerAnteriorNodo();
        siguiente->setearAnteriorNodo(aBorrar->obtenerAnteriorNodo());
    }
    delete aBorrar;

    this->tamanio--;
    this->iniciarCursor();

}

void Lista_DE::iniciarCursor(){
    this->cursor=0;
}

bool Lista_DE::avanzarCursor(){
    if (this->cursor==0){
        this->cursor=this->primero;
    }
    else{
        this->cursor=this->cursor->obtenerSiguienteNodo();
    }
    return (this->cursor!=0);
}

int Lista_DE::obtenerCursor(){
    int elemento;

    if (this->cursor!=0){
        elemento=this->cursor->obtenerDato();
    }
    return elemento;
}

Lista_DE::~Lista_DE(){
    while(this->primero!=0){
        Nodo_DE* aBorrar = this->primero;
        this->primero=this->primero->obtenerSiguienteNodo();
        delete aBorrar;
    }
}

Nodo_DE* Lista_DE::obtenerNodo(int posicion){
    Nodo_DE* actual= primero;
    for(int i=1; i<posicion; i++){
        actual=actual->obtenerSiguienteNodo();
    }
    return actual;
}
