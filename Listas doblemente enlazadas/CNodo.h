#pragma once
#include <iostream>
#include "CLibro.h"

using namespace std;

class CNodo {
public:
    CNodo(CLibro* libro, CNodo* sig, CNodo* ant);

private:
    CLibro* valor;

    CNodo* siguiente;
    CNodo* anterior;

    friend class CLista;
};