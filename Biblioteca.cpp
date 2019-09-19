//
// Created by ASUS on 19/09/2019.
//

#include "Biblioteca.h"
#include <typeinfo>

Biblioteca::Biblioteca():maxLibros(0),maxRevistas(0){}

void Biblioteca::incluir(Volumen* v){
    this->Lista.push_back(v);
}

void Biblioteca::mostrarBiblioteca(){
    for(auto item:Lista)
        item->mostrar();
}

void Biblioteca::cantidad() {
    for (auto item: Lista)
    {
        if(typeid(*item) == typeid(Libro))
            maxLibros+=item->cantidad();
        if (typeid(*item) == typeid(Revista))
            maxRevistas+=item->cantidad();
    }
    std::cout <<"#Libros: "<<maxLibros<<"\n";
    std::cout <<"#Revistas: "<<maxRevistas<<"\n";
}

