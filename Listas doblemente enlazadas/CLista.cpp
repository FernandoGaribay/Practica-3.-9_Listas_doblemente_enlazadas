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

void CLista::modificarNodo(CLibro* libro, int z) {
    CNodo* aux = buscarNodo(z);

    if (aux != NULL) {
        aux->valor = libro;
        cout << "\nLibro modificado." << endl;
    }
    else
        cout << "\nEl nodo no fue encontrado." << endl;
}

void CLista::visualizarNodo(int z) {
    CNodo* aux = buscarNodo(z);

    if (aux != NULL)
        aux->valor->mostrarDatos();
    else
        cout << "\nEl nodo no fue encontrado." << endl;
}

void CLista::Mostrar() {
    CNodo* aux = lista;

    if (aux == NULL){
        cout << "La lista está vacia.\n";
    }
    else if (orden == ASC) {
        while (aux->anterior)  //buscamos el principio de la lista
            aux = aux->anterior;

        while (aux){
            aux->valor->mostrarDatos();
            aux = aux->siguiente;
        }
    }
    else{
        while (aux->siguiente) //buscamos el final de la lista
            aux = aux->siguiente;

        while (aux){
            aux->valor->mostrarDatos();
            aux = aux->anterior;
        }
    }
}

CNodo* CLista::buscarNodo(int z) {
    CNodo* aux;

    if (!ListaVacia()) {
        aux = lista;

        while (aux) {
            if (aux->valor->getClave() == z)
                return aux;

            aux = aux->siguiente;
        }
        return NULL;
    }
    else
        return NULL;
}

bool CLista::ListaVacia() {
    return lista == NULL;
}