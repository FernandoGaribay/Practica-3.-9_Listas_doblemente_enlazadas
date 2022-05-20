#include "CNodo.h"

CNodo::CNodo(CLibro* libro)
{
	valor = libro;

	siguiente = NULL;
	anterior = NULL;
}