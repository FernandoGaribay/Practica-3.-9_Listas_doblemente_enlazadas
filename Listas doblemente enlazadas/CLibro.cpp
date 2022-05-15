#include "CLibro.h"
#include <iostream>
#include <string>

using namespace std;

CLibro::CLibro() {
	clave = 0;
	titulo = "";
	autor = "";
}
CLibro::CLibro(int clave, string titulo, string autor) {
	this->clave = clave;
	this->titulo = titulo;
	this->autor = autor;
}
CLibro::~CLibro() {}

void CLibro::setClave(int clave) {
	this->clave = clave;
}
int CLibro::getClave() {
	return clave;
}

void CLibro::setTitulo(string titulo) {
	this->titulo = titulo;
}
string CLibro::getTitulo() {
	return titulo;
}

void CLibro::setAutor(string autor) {
	this->autor = autor;
}
string CLibro::getAutor() {
	return autor;
}

void CLibro::mostrarDatos() {
	cout << "Clave: " << getClave() << endl;
	cout << "Titulo: " << getTitulo() << endl;
	cout << "Autor: " << getAutor() << endl;
	cout << endl;
}