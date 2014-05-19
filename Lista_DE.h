#ifndef LISTA_DE_H_INCLUDED
#define LISTA_DE_H_INCLUDED

#include "Nodo_DE.h"

class Lista_DE{
private:
    Nodo_DE* primero;
    Nodo_DE* cursor;
    int tamanio;
public:
    Lista_DE();
    bool estaVacia();
    int contarElementos();
    void agregar(int elemento);
    void agregar(int elemento, int posicion);
    int obtener(int posicion);
    void asignar(int elemento, int posicion);
    void remover(int posicion);
    void iniciarCursor();
    bool avanzarCursor();
    int obtenerCursor();
    ~Lista_DE();
private:
    Nodo_DE* obtenerNodo(int posicion);

};

#endif // LISTA_DE_H_INCLUDED
