//
// Created by itsre on 26/03/2023.
//

#include "Tortuga.h"

void Tortuga::comer() {
    std::cout<<"Soy una tortuga y como lechuga!"<<std::endl;
}

std::string Tortuga::getEspecie() {
    return "tortuga";
}

void Tortuga::mostrarAcciones() {
    Animal::mostrarAcciones();
    std::cout<<"Esconderse"<<std::endl;
}

void Tortuga::ejecutarAccion(std::string accion) {
    Animal::ejecutarAccion(accion);
    if (accion == "esconderse")
    {
        esconderseEnCaparazon();
    }
}

void Tortuga::esconderseEnCaparazon() {
    std::cout<<"Soy una tortuga y estoy escondida en mi caparazon!"<<std::endl;
}
