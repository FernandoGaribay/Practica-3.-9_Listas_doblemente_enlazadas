#pragma once
#include <iostream>
#include <string>

using namespace std;

class CLibro {
private:
	int clave;
	string titulo;
	string autor;
public:
	CLibro();
	CLibro(int, string, string);
	~CLibro();
	void setClave(int);
	int getClave();
	void setTitulo(string);
	string getTitulo();
	void setAutor(string);
	string getAutor();
	void mostrarDatos();
};