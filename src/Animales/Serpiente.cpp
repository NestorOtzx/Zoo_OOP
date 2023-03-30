//
// Created by itsre on 26/03/2023.
//

#include "Serpiente.h"

std::string Serpiente::getEspecie() {
    return "serpiente";
}

void Serpiente::mostrarAcciones() {
    Animal::mostrarAcciones();
    std::cout<<"Esconderse"<<std::endl;
}

void Serpiente::ejecutarAccion(std::string accion) {
    if (accion == "esconderse")
    {
        esconderse();
        return;
    }
    Animal::ejecutarAccion(accion);
}

void Serpiente::esconderse() {
    std::cout<<"Soy una serpiente... y estoy escondida..."<<std::endl;
}

bool Serpiente::puedeHabitar(Habitat * habitat) {
    //si el habitat recibido es selva tropical o sabana, sera verdadero.
    bool puedePertenecer = habitat->getNombre() == NOMBRE_SELVA
                           || habitat->getNombre() == NOMBRE_SABANA;
    return puedePertenecer;
}
