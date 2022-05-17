#pragma once
#include "CNodo.h"
#include "CLibro.h"

class CLista {
public:
    CLista();
    ~CLista();
    void InsertarInicio(CLibro* libro);
    void modificarNodo(CLibro* libro, int z);
    void visualizarNodo(int z);
    void Mostrar();
    CNodo* buscarNodo(int z);
    bool ListaVacia();
    
    enum TOrden { ASC, DESC };

protected:
    TOrden orden;
    CNodo* lista;
    CNodo* primero;
    CNodo* anterior;
};