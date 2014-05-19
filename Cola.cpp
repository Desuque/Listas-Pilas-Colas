Cola::~Cola(){
    while (not(colaVacia())){
        borrarDato();
    }
}

bool Cola::colaVacia(){
    return (primero==0);
}

void Cola::insertar(int dato){
    Nodo* nuevo = new Nodo(dato);
    if (colaVacia()){
        primero=nuevo;
    }
    else{
        ultimo->setearSiguienteNodo(nuevo);
    }
    ultimo=nuevo;
}

int Cola::obtenerDato(){
    return primero->obtenerDato();
}

void Cola::borrarDato(){
    Nodo* aBorrar = primero;
    primero=aBorrar->obtenerSiguienteNodo();
    delete aBorrar;
}


