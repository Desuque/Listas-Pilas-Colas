#include <iostream>
#include "Nodo.h"
#include "Pila.h"
#include "Cola.h"
#include "Lista.h"
#include "Lista_DE.h"
#include "Nodo_DE.h"

using namespace std;

int main(){
    Lista_DE resultadosCarrera;
    int autos;
    int posicion;

    cout<<"Cargar los autos segun su posicion de llegada: "<<endl;
    do{
        cin>>autos;
        resultadosCarrera.agregar(autos);
    } while(autos!=0);

    cout<<"La cantidad de competidores es de: "<<resultadosCarrera.contarElementos()<<endl;

    cout<<"Se agrega el auto numero 100 en la posicion 4"<<endl;
    resultadosCarrera.agregar(100,4);

    cout<<"Ingrese el puesto para conocer el auto que lo ocupa: "<<endl;
    cin>>posicion;
    cout<<resultadosCarrera.obtener(posicion)<<endl;

    cout<<"Se elimina el 1er competidor de la lista"<<endl;
    resultadosCarrera.remover(1);

    cout<<"Autos en la carrera:"<<endl;
    for(int i=1; i<=resultadosCarrera.contarElementos(); i++){
        cout<<resultadosCarrera.obtener(i)<<endl;
    }

    /* Ejemplo de Lista SE */
    /*
    Lista resultadosCarrera;
    int autos;
    int posicion;

    cout<<"Cargar los autos segun su posicion de llegada: "<<endl;
    do{
        cin>>autos;
        resultadosCarrera.agregar(autos);
    } while(autos!=0);

    cout<<"La cantidad de competidores es de: "<<resultadosCarrera.contarElementos()<<endl;

    cout<<"Se agrega el auto numero 100 en la posicion 4"<<endl;
    resultadosCarrera.agregar(100,4);

    cout<<"Ingrese el puesto para conocer el auto que lo ocupa: "<<endl;
    cin>>posicion;
    cout<<resultadosCarrera.obtener(posicion)<<endl;

    cout<<"Se elimina el 1er competidor de la lista"<<endl;
    resultadosCarrera.remover(1);

    cout<<"Autos en la carrera:"<<endl;
    for(int i=1; i<=resultadosCarrera.contarElementos(); i++){
        cout<<resultadosCarrera.obtener(i)<<endl;
    }
    */

    /* Para probar la Cola, desmarcar todo este comentario */
    /*
    Cola numeroDeCliente;
    int cliente;

    cout<<"Ingrese el numero de cliente a atender: "<<endl;
    do{
        cin>>cliente;
        numeroDeCliente.insertar(cliente);
    } while (cliente!=0);

    while (not(numeroDeCliente.colaVacia())){
        cout<<"El proximo cliente a atender es: "<<numeroDeCliente.obtenerDato()<<endl;
        numeroDeCliente.borrarDato();
    }
    */

    /* Para probar la pila, desmarcar todo este comentario */
    /*
    Pila numerosPares;
    int numeros;

    cout<<"Cargar numeros pares a la pila: ";
    do{
        cin>>numeros;
        numerosPares.agregarDato(numeros);
    } while (numeros!=0);

    cout<<"El ultimo dato cargado fue: "<<numerosPares.obtenerDato()<<endl;

    while (not(numerosPares.pilaVacia())){
        cout<<"El numero a eliminar es el: "<<numerosPares.obtenerDato()<<endl;
        numerosPares.borrarDato();
    }

    if (numerosPares.pilaVacia()){
        cout<<"La lista esta vacia!";
    }
    else{
        cout<<"Algo salio mal negro!";
    }
    */
    return 0;
}
