//
// Created by ASUS on 19/09/2019.
//

#ifndef BIBLIOTECA_VOLUMEN_H
#define BIBLIOTECA_VOLUMEN_H


#include <iostream>
#include <string>

class Volumen {
  protected:
      std::string nombre;
      int numVol;
  public:
      Volumen(std::string nombre,int numVol);
      virtual void mostrar()=0;
      virtual int cantidad()=0;

};

#endif //BIBLIOTECA_VOLUMEN_H
