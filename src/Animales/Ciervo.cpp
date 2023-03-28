//
// Created by itsre on 26/03/2023.
//

#include "Ciervo.h"

void Ciervo::comer() {
    std::cout<<"Soy un ciervo y como frutas!"<<std::endl;
}

std::string Ciervo::getEspecie() {
    return "ciervo";
}

void Ciervo::mostrarAcciones() {
    Animal::mostrarAcciones();
    std::cout<<"Saltar"<<std::endl;
}

void Ciervo::ejecutarAccion(std::string accion) {
    Animal::ejecutarAccion(accion);
    if (accion == "saltar")
    {
        saltar();
    }

}

void Ciervo::saltar() {
    std::cout<<"Soy un ciervo y estoy saltando!"<<std::endl;
}

bool Ciervo::puedeHabitar(Habitat * habitat) {
    //si el habitat recibido es bosque o sabana, sera verdadero.
    bool puedePertenecer = habitat->getNombre() == NOMBRE_SABANA
                           || habitat->getNombre() == NOMBRE_BOSQUE;
    return puedePertenecer;
}
