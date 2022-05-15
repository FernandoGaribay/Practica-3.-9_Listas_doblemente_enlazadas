#pragma once
#include "CNodo.h"
#include "CLibro.h"

class CLista {
public:
    CLista();
    ~CLista();
    void InsertarInicio(CLibro* libro);
    void Mostrar();
    
    enum TOrden { ASC, DESC };

protected:
    TOrden orden;
    CNodo* lista;
    CNodo* primero;
    CNodo* anterior;
};