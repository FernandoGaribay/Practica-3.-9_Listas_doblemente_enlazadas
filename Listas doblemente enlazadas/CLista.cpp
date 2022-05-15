#include "CLista.h"

CLista::CLista() {
    primero = NULL;
    anterior = NULL;
    CNodo* lista = NULL;
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

    if (lista == NULL) {
        CNodo* aux;
        aux->valor = libro;
        lista = aux;
    }
    else{
        CNodo* aux;
        aux->valor = libro;
        aux->siguiente = lista;
        lista->anterior = aux;
        lista = aux;
    }
}