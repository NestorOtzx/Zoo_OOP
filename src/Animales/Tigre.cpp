//
// Created by itsre on 26/03/2023.
//

#include "Tigre.h"

void Tigre::comer() {
    std::cout<<"Soy un tigre y estoy comiendo carne!"<<std::endl;
}

std::string Tigre::getEspecie() {
    return "tigre";
}

void Tigre::mostrarAcciones() {
    Animal::mostrarAcciones();
    std::cout<<"Correr"<<std::endl;
}

void Tigre::ejecutarAccion(std::string accion) {
    Animal::ejecutarAccion(accion);
    if (accion == "correr")
    {
        correr();
    }
}

void Tigre::correr() {
    std::cout<<"Soy un tigre y estoy corriendo."<<std::endl;
}
