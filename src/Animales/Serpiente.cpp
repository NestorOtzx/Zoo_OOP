//
// Created by itsre on 26/03/2023.
//

#include "Serpiente.h"

void Serpiente::comer() {
    std::cout<<"Soy una serpiente... y como ratones!"<<std::endl;
}

std::string Serpiente::getEspecie() {
    return "serpiente";
}

void Serpiente::mostrarAcciones() {
    Animal::mostrarAcciones();
    std::cout<<"Esconderse"<<std::endl;
}

void Serpiente::ejecutarAccion(std::string accion) {
    Animal::ejecutarAccion(accion);
    if (accion == "esconderse")
    {
        esconderse();
    }
}

void Serpiente::esconderse() {
    std::cout<<"Soy una serpiente... y estoy escondida..."<<std::endl;
}
