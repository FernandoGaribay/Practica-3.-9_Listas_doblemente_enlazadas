#include "CLista.h"

CLista::CLista() {
    primero = NULL;
    anterior = NULL;
    CNodo* lista = NULL;

    orden = DESC;
}

CLista::~CLista() {
    CNodo* aux;

    while (primero) {
        aux = primero;
        primero = primero->siguiente;
        delete aux;
    }
    cout << "\Lista de libros borrada." << endl;
}

void CLista::InsertarInicio(CLibro* libro) {
    CNodo* aux = new CNodo(libro, primero, anterior);

    if (ListaVacia()) {
        aux->valor = libro;
        lista = aux;
    }
    else{
        aux->valor = libro;
        aux->siguiente = lista;
        lista->anterior = aux;
        lista = aux;
    }
}

void CLista::Mostrar() {
    CNodo* aux = lista;

    if (aux == NULL){
        cout << "La lista está vacia.\n";
    }
    else if (orden == ASC) {
        while (aux->anterior) {  //buscamos el principio de la lista
            aux = aux->anterior;
        }

        while (aux){
            aux->valor->mostrarDatos();
            aux = aux->siguiente;
        }
    }
    else{
        while (aux->siguiente) {  //buscamos el final de la lista
            aux = aux->siguiente;
        }

        while (aux){
            aux->valor->mostrarDatos();
            aux = aux->anterior;
        }
    }
}

bool CLista::ListaVacia() {
    return lista == NULL;
}