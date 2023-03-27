//
// Created by itsre on 26/03/2023.
//

#include "Calamar.h"

void Calamar::comer() {
    std::cout<<"Soy un calamar y como crustaceos"<<std::endl;
}

std::string Calamar::getEspecie() {
    return "calamar";
}

void Calamar::mostrarAcciones() {
    Animal::mostrarAcciones();
    std::cout<<"Tirar tinta"<<std::endl;
}

void Calamar::ejecutarAccion(std::string accion) {
    Animal::ejecutarAccion(accion);
    if (accion == "tirar tinta")
    {
        arrojarTinta();
    }
}

void Calamar::arrojarTinta() {
    std::cout<<"Soy un calamar y arrojo tinta!"<<std::endl;
}
