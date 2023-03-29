//
// Created by itsre on 26/03/2023.
//

#include "OsoPanda.h"

std::string OsoPanda::getEspecie() {
    return "oso panda";
}

void OsoPanda::mostrarAcciones() {
    Animal::mostrarAcciones();
    std::cout<<"Dormir mas"<<std::endl;
}

void OsoPanda::ejecutarAccion(std::string accion) {
    Animal::ejecutarAccion(accion);
    if (accion == "dormir mas")
    {
        dormirMas();
    }
}

void OsoPanda::dormirMas() {
    std::cout<<"Zzzzzzzzzzzzzz........ Zzzzzzzzzzzz...."<<std::endl;
}

bool OsoPanda::puedeHabitar(Habitat * habitat) {
    //si el habitat recibido es bosque, sera verdadero.
    bool puedePertenecer = habitat->getNombre() == NOMBRE_BOSQUE;
    return puedePertenecer;
}
