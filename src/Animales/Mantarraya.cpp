//
// Created by itsre on 26/03/2023.
//

#include "Mantarraya.h"

void Mantarraya::comer() {
    std::cout<<"Soy una mantarraya y como calamares..."<<std::endl;
}

std::string Mantarraya::getEspecie() {
    return "mantarraya";
}

void Mantarraya::mostrarAcciones() {
    Animal::mostrarAcciones();
    std::cout<<"Nadar"<<std::endl;
}

void Mantarraya::ejecutarAccion(std::string accion) {
    Animal::ejecutarAccion(accion);
    if (accion == "nadar")
    {
        nadar();
    }
}

void Mantarraya::nadar() {
    std::cout<<"Soy una mantarraya y estoy nadando."<<std::endl;
}
