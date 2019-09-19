#include <iostream>
#include "Biblioteca.h"
#include "Libro.h"
#include "Revista.h"

int main() {
    Libro* L1 = new Libro("La Tregua",1,4);
    Libro* L2 = new Libro("1984",2,5);
    Revista* R1 = new Revista("Cosas",1,6);
    Revista* R2 = new Revista("Casas",2,7);
    Biblioteca B;
    B.incluir(L1);
    B.incluir(L2);
    B.incluir(R1);
    B.incluir(R2);
    B.mostrarBiblioteca();
}
