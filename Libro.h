//
// Created by ASUS on 19/09/2019.
//

#ifndef BIBLIOTECA_LIBRO_H
#define BIBLIOTECA_LIBRO_H

#include "Volumen.h"

class Libro: public Volumen {

   private:
     int numLibros;
   public:
     Libro(std::string nombre,int numVol, int numLibros);
     void mostrar() override;
     ~Libro()=default;

};


#endif //BIBLIOTECA_LIBRO_H
