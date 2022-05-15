#include "CNodo.h"

CNodo::CNodo(CLibro* libro, CNodo* sig = NULL, CNodo* ant = NULL)
{
	valor = libro;

	siguiente = sig;
	anterior = ant;
}