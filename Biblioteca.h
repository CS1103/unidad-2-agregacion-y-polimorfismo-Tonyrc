//
// Created by ASUS on 19/09/2019.
//

#ifndef BIBLIOTECA_BIBLIOTECA_H
#define BIBLIOTECA_BIBLIOTECA_H

#include <vector>
#include "Volumen.h"

class Biblioteca {
private:
   int maxLibros;
   int maxRevistas;
   std::vector<Volumen*> Lista;

public:
   Biblioteca();
   void mostrarBiblioteca();
   void incluir(Volumen* v);
   ~Biblioteca()=default;

};


#endif //BIBLIOTECA_BIBLIOTECA_H
