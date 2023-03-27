//
// Created by itsre on 26/03/2023.
//

#include "Animal.h"

void Animal::accion() {
    std::cout<<nombre<<" accion basica."<<std::endl;
}

std::string Animal::getEspecie() {
    return "animal";
}

std::string Animal::getNombre() {
    return this->nombre;
}
