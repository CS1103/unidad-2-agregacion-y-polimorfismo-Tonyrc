//
// Created by ASUS on 19/09/2019.
//

#include "Biblioteca.h"

Biblioteca::Biblioteca():maxLibros(0),maxRevistas(0){}

void Biblioteca::incluir(Volumen* v){
    this->Lista.push_back(v);
}

void Biblioteca::mostrarBiblioteca(){
    for(auto item:Lista)
        item->mostrar();
}



