#include "Nodo.h"
#include "Lista.h"

Lista::Lista(){
    this->primero=0;
    this->cursor=0;
    this->tamanio=0;
}

bool Lista::estaVacia(){
    return (this->tamanio==0);
}

int Lista::contarElementos(){
    return this->tamanio;
}

void Lista::agregar(int elemento){
    this->agregar(elemento, this->tamanio+1);
}

void Lista::agregar(int elemento, int posicion){
    if ((posicion>0) && (posicion<=tamanio+1)){
        Nodo* nuevo = new Nodo(elemento);

        if (posicion==1){
            nuevo->setearSiguienteNodo(this->primero);
            this->primero=nuevo;
        }
        else{
            Nodo* anterior = this->obtenerNodo(posicion-1);
            nuevo->setearSiguienteNodo(anterior->obtenerSiguienteNodo());
            anterior->setearSiguienteNodo(nuevo);
        }
        this->tamanio++;
    }
    this->iniciarCursor();
}

int Lista::obtener(int posicion){
    int elemento;
    if ( (posicion>0) && (posicion<=(this->tamanio)) ){
        elemento= (this->obtenerNodo(posicion))->obtenerDato();
    }
    return elemento;
}

void Lista::asignar(int elemento, int posicion){
    if( (posicion>0) && (posicion<=(this->tamanio)) ){
        (this->obtenerNodo(posicion))->cambiarDato(elemento);
    }
}

void Lista::remover(int posicion){
    if ( (posicion>0) && (posicion<=tamanio) ){
        Nodo* removido;

        if (posicion==1){
            removido=this->primero;
            this->primero=removido->obtenerSiguienteNodo();
        }
        else{
            Nodo* anterior= obtenerNodo(posicion-1);
            removido= anterior->obtenerSiguienteNodo();
            anterior->setearSiguienteNodo(removido->obtenerSiguienteNodo());
        }

        delete removido;
    }

    this->tamanio--;
    this->iniciarCursor();
}

void Lista::iniciarCursor(){
    this->cursor=0;
}

bool Lista::avanzarCursor(){
    if (this->cursor==0){
        this->cursor=this->primero;
    }
    else{
        this->cursor=this->cursor->obtenerSiguienteNodo();
    }
    return (this->cursor!=0);
}

int Lista::obtenerCursor(){
    int elemento;

    if (this->cursor!=0){
        elemento=this->cursor->obtenerDato();
    }
    return elemento;
}

Lista::~Lista(){
    while(this->primero!=0){
        Nodo* aBorrar = this->primero;
        this->primero=this->primero->obtenerSiguienteNodo();
        delete aBorrar;
    }
}

Nodo* Lista::obtenerNodo(int posicion){
    Nodo* actual= primero;
    for(int i=1; i<posicion; i++){
        actual=actual->obtenerSiguienteNodo();
    }
    return actual;
}
