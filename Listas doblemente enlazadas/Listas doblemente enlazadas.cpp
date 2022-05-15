#include <iostream>
#include <string>
#include <ctype.h>

#include "CLista.h"
#include "CLibro.h"

using namespace std;

void mostrarMenu(char& opc);
void introducirLibro(int& clave, string& titulo, string& autor, CLibro*& libro, CLista& lista);
void visualizarLista(CLista& lista);
void salir(bool& r);

int main(void) 
{
    CLibro* libro = new CLibro();
    CLista lista;

    int clave;
    string titulo="";
    string autor="";

    bool r = true;
    char opc;

    do {
        mostrarMenu(opc);

        switch (opc) {
        case '1':
            introducirLibro(clave, titulo, autor, libro, lista);
            break;
        case '2':
            //modificarLibro(clave, titulo, autor, libro, lista);
            break;
        case '3':
            //visualizarLibro(clave, lista);
            break;
        case '4':
            //borrarLibro(clave, lista);
            break;
        case '5':
            //borrarLista(lista);
            break;
        case '6':
            visualizarLista(lista);
            break;
        case '7':
            salir(r);
            break;
        default:
            cout << "\nOpcion invalida." << endl;
            system("pause");
        }
    } while (r);

    return 0;
}

void salir(bool& r)
{
    r = false;
    cout << "\nPrograma finalizado." << endl;
    system("pause");
}

void introducirLibro(int& clave, string& titulo, string& autor, CLibro*& libro, CLista& lista)
{
    system("clear");
    cout << "INTRODUCIR LIBRO EN LA LISTA ----------------------\n" << endl;

    cout << "Dijite la clave del libro: ";
    cin >> clave;
    cin.ignore();

    cout << "Dijite el titulo del libro: ";
    getline(cin, titulo);

    cout << "Dijite el autor del libro: ";
    getline(cin, autor);

    libro = new CLibro(clave, titulo, autor);
    lista.InsertarInicio(libro);

    system("pause");
}

void visualizarLista(CLista& lista) {
    system("clear");
    cout << "VISUALIZAR TODOS LOS LIBROS -----------------------\n" << endl;
    lista.Mostrar();
    system("pause");
}

void mostrarMenu(char& opc)
{
    system("clear");
    cout << "MENU --------------------------\n" << endl;
    cout << "1) Introduccir libro en la lista" << endl;
    cout << "2) Modificar libro" << endl;
    cout << "3) Visualizar libro" << endl;
    cout << "4) Borrar libro" << endl;
    cout << "5) Borrar lista de libros" << endl;
    cout << "6) Visualizar todos los libros" << endl;
    cout << "7) Salir" << endl;

    cout << "\n- Dijite una opcion: ";
    cin >> opc;
}