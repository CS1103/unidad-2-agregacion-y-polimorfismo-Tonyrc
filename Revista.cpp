//
// Created by ASUS on 19/09/2019.
//

#include "Revista.h"

Revista::Revista(std::string nombre, int numVol, int numRevistas):Volumen{nombre,numVol},numRevistas{numRevistas}{}

void Revista::mostrar(){
    std::cout<<"VolumenR #:"<<numVol<<" ,numRevistas :"<<numRevistas<<" ,Titulo :"<<nombre<<"\n";
}
