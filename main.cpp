#include <iostream>
#include "Biblioteca.h"
#include "Libro.h"
#include "Revista.h"

int main() {
    Volumen* L1 = new Libro("La Tregua",1,4);
    Volumen* L2 = new Libro("1984",2,5);
    Volumen* L3 = new Libro("El Tunel",4,8);
    Volumen* R1 = new Revista("Cosas",1,6);
    Volumen* R2 = new Revista("Casas",2,7);
    auto B = new Biblioteca;
    B->incluir(L1);
    B->incluir(L2);
    B->incluir (L3);
    B->incluir(R1);
    B->incluir(R2);
    B->mostrarBiblioteca();
    B->cantidad();
}
