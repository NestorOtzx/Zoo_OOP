//
// Created by itsre on 26/03/2023.
//

#include "Calamar.h"

std::string Calamar::getEspecie() {
    return "calamar";
}

void Calamar::mostrarAcciones() {
    Animal::mostrarAcciones();
    std::cout<<"Tirar tinta"<<std::endl;
}

void Calamar::ejecutarAccion(std::string accion) {
    if (accion == "tirar tinta")
    {
        arrojarTinta();
        return;
    }
    Animal::ejecutarAccion(accion);
}

void Calamar::arrojarTinta() {
    std::cout<<"Soy un calamar y arrojo tinta!"<<std::endl;
}

bool Calamar::puedeHabitar(Habitat * habitat) {
    //si el habitat recibido es acuatico, sera verdadero.
    bool puedePertenecer = habitat->getNombre() == NOMBRE_ACUARIO;
    return puedePertenecer;
}
