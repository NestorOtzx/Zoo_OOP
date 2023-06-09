//
// Created by itsre on 26/03/2023.
//

#include "Tigre.h"

std::string Tigre::getEspecie() {
    return "tigre";
}

void Tigre::mostrarAcciones() {
    Animal::mostrarAcciones();
    std::cout<<"Correr"<<std::endl;
}

void Tigre::ejecutarAccion(std::string accion) {
    if (accion == "correr")
    {
        correr();
        return;
    }
    Animal::ejecutarAccion(accion);
}

void Tigre::correr() {
    std::cout<<"Soy un tigre y estoy corriendo."<<std::endl;
}

bool Tigre::puedeHabitar(Habitat * habitat) {
    //si el habitat recibido es bosque o sabana, sera verdadero.
    bool puedePertenecer = habitat->getNombre() == NOMBRE_SABANA
                           || habitat->getNombre() == NOMBRE_BOSQUE
                           || habitat->getNombre() == NOMBRE_SELVA;
    return puedePertenecer;
}
