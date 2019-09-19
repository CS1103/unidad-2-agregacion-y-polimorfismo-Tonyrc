//
// Created by ASUS on 19/09/2019.
//

#ifndef BIBLIOTECA_REVISTA_H
#define BIBLIOTECA_REVISTA_H

#include "Volumen.h"

class Revista: public Volumen {
   private:
     int numRevistas;
   public:
     Revista(std::string nombre, int numVol, int numRevistas);
     void mostrar() override;

};


#endif //BIBLIOTECA_REVISTA_H
