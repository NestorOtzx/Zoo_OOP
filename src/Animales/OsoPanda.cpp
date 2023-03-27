//
// Created by itsre on 26/03/2023.
//

#include "OsoPanda.h"

void OsoPanda::comer() {
    std::cout<<"soy un oso panda y como bambu"<<std::endl;
}

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
