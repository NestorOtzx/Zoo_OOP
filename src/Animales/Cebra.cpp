//
// Created by itsre on 26/03/2023.
//

#include "Cebra.h"

void Cebra::comer() {
    std::cout<<"Soy una cebra y como hojas!"<<std::endl;
}

std::string Cebra::getEspecie() {
    return "cebra";
}

void Cebra::mostrarAcciones() {
    Animal::mostrarAcciones();
    std::cout<<"Correr"<<std::endl;
}

void Cebra::ejecutarAccion(std::string accion) {
    Animal::ejecutarAccion(accion);
    if (accion == "correr")
    {
        correr();
    }
}

void Cebra::correr() {
    std::cout<<"Soy una cebra y estoy corriendo!"<<std::endl;
}
