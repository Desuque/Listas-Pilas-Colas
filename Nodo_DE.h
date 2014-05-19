#ifndef NODO_DE_H_INCLUDED
#define NODO_DE_H_INCLUDED

class Nodo_DE{
private:
    Nodo_DE* siguiente;
    Nodo_DE* anterior;
    int dato;
public:

    Nodo_DE(int dato);
    void cambiarDato(int nuevoDato);
    void setearSiguienteNodo(Nodo_DE* nuevoSiguiente);
    void setearAnteriorNodo(Nodo_DE* nuevoAnterior);
    int obtenerDato();
    Nodo_DE* obtenerSiguienteNodo();
    Nodo_DE* obtenerAnteriorNodo();

};

#endif // NODO_DE_H_INCLUDED
