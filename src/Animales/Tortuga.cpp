//
// Created by itsre on 26/03/2023.
//

#include "Tortuga.h"

std::string Tortuga::getEspecie() {
    return "tortuga";
}

void Tortuga::mostrarAcciones() {
    Animal::mostrarAcciones();
    std::cout<<"Esconderse"<<std::endl;
}

void Tortuga::ejecutarAccion(std::string accion) {
    if (accion == "esconderse")
    {
        esconderseEnCaparazon();
        return;
    }
    Animal::ejecutarAccion(accion);
}

void Tortuga::esconderseEnCaparazon() {
    std::cout<<"Soy una tortuga y estoy escondida en mi caparazon!"<<std::endl;
}

bool Tortuga::puedeHabitar(Habitat * habitat) {
    //si el habitat recibido es acuatico, sera verdadero.
    bool puedePertenecer = habitat->getNombre() == NOMBRE_ACUARIO
            || habitat->getNombre() == NOMBRE_BOSQUE;
    return puedePertenecer;
}
