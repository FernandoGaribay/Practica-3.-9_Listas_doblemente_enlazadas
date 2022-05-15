#include "CLista.h"

CLista::CLista() {
    primero = NULL;
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
    CNodo* aux;
    if (ListaVacia()) {
        aux = new CNodo(libro, primero);
        primero = aux;
    }
    else {
        aux = new CNodo(libro, primero->siguiente);
        primero = aux;
    }
}

void CLista::InsertarFinal(CLibro* libro) {
    CNodo* aux = Ultimo();
    aux->siguiente = new CNodo(libro, NULL);
}

void CLista::Insertar(CLibro* libro) {
    CNodo* aux;
    if (ListaVacia()) {
        aux = new CNodo(libro, primero);
        primero = aux;
    }
    else {
        aux = Ultimo();
        aux->siguiente = new CNodo(libro, NULL);
    }

    cout << "\nLibro agregado." << endl;
}

void CLista::InsertarAntesDe(CLibro* libro, int z) {
    CNodo* anterior;
    anterior = primero;

    while (anterior->siguiente && anterior->siguiente->valor->getClave() != z) {
        anterior = anterior->siguiente;
    }

    anterior->siguiente = new CNodo(libro, anterior->siguiente);
}

CNodo* CLista::buscarNodo(int z) {
    CNodo* aux;

    if (!ListaVacia()) {
        aux = primero;
        while (aux != NULL) {
            if (aux->valor->getClave() == z) {
                return aux;
            }
            aux = aux->siguiente;
        }
        return NULL;
    }
    else {
        return NULL;
    }
}

void CLista::modificarNodo(CLibro* libro, int z) {
    CNodo* aux = buscarNodo(z);

    if (aux != NULL) {
        aux->valor = libro;
        cout << "\nLibro modificado." << endl;
    }
    else {
        cout << "\nEl nodo no fue encontrado." << endl;
    }
}

void CLista::visualizarNodo(int z) {
    CNodo* aux = buscarNodo(z);

    if (aux != NULL) {
        aux->valor->mostrarDatos();
    }
    else {
        cout << "\nEl nodo no fue encontrado." << endl;
    }
}

void CLista::Borrar(int clave) {
    CNodo* anterior, *nodo;

    nodo = primero;
    anterior = NULL;

    while (nodo && nodo->valor->getClave() != clave) {
        anterior = nodo;
        nodo = nodo->siguiente;
    }

    if (!nodo || nodo->valor->getClave() != clave) {
        cout << "\nEl nodo no fue encontrado." << endl;
        return;
    }
    else { 
        if (!anterior) 
            primero = nodo->siguiente;
        else  
            anterior->siguiente = nodo->siguiente;
        delete nodo;

    }
}

void CLista::Mostrar() {
    CNodo* aux;

    if (!ListaVacia()) {
        aux = primero;
        while (aux) {
            aux->valor->mostrarDatos();
            aux = aux->siguiente;
        }
    }
    else {
        cout << "La lista esta vacia." << endl;
    }

    cout << endl;
}

bool CLista::ListaVacia() {
    return primero == NULL;
}

CNodo* CLista::Ultimo() {
    CNodo* actual = primero;
    if (!ListaVacia())
        while (actual->siguiente)
            actual = actual->siguiente;
    return actual;
}