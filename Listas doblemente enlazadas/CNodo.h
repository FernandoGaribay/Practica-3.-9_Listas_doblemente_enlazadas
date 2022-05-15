#pragma once
#include <iostream>
#include "CLibro.h"

using namespace std;

class CNodo {
public:
    CNodo(CLibro* libro, CNodo* sig);

private:
    CLibro* valor;
    CNodo* siguiente;

    friend class CLista;
};