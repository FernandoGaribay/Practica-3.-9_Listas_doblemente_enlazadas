#pragma once
#include "CNodo.h"
#include "CLibro.h"

class CLista {
public:
    CLista();
    ~CLista();
    void InsertarInicio(CLibro* libro);
    
protected:
    CNodo* lista;
    CNodo* primero;
    CNodo* anterior;
};