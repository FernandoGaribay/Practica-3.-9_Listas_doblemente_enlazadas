#include "CNodo.h"

CNodo::CNodo(CLibro* libro, CNodo* sig = NULL)
{
	valor = libro;
	siguiente = sig;
}