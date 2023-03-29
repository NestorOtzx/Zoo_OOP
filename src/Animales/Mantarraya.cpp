//
// Created by itsre on 26/03/2023.
//

#include "Mantarraya.h"

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

bool Mantarraya::puedeHabitar(Habitat * habitat) {
    //si el habitat recibido es acuatico, sera verdadero.
    bool puedePertenecer = habitat->getNombre() == NOMBRE_ACUARIO;
    return puedePertenecer;
}
