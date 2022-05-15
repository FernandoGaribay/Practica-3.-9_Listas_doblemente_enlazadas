#pragma once
#include "CNodo.h"
#include "CLibro.h"

class CLista {
public:
    CLista();
    ~CLista();
    void InsertarInicio(CLibro* libro);
    void InsertarFinal(CLibro* libro);
    void Insertar(CLibro* libro);
    void InsertarAntesDe(CLibro* libro, int z);
    CNodo* buscarNodo(int z);
    void modificarNodo(CLibro* libro, int z);
    void visualizarNodo(int z);
    void Borrar(int clave);
    bool ListaVacia();
    void Mostrar();
    CNodo* Ultimo();
protected:
    CNodo* primero;
};