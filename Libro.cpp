//
// Created by ASUS on 19/09/2019.
//

#include "Libro.h"

Libro::Libro(std::string nombre,int numVol,int numLibros): Volumen{nombre,numVol},numLibros{numLibros}{}

void Libro::mostrar(){
    std::cout<<"Volumen #:"<<numVol<<" ,numLibros :"<<numLibros<<" ,Titulo :"<<nombre<<"\n";
}
