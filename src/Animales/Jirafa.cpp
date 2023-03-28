//
// Created by itsre on 26/03/2023.
//

#include "Jirafa.h"

void Jirafa::comer() {
    std::cout<<"Soy una jirafa y como hojas de los arboles altos!"<<std::endl;
}

std::string Jirafa::getEspecie() {
    return "jirafa";
}

void Jirafa::mostrarAcciones() {
    Animal::mostrarAcciones();
    std::cout<<"Alcanzar comida"<<std::endl;
}

void Jirafa::ejecutarAccion(std::string accion) {
    Animal::ejecutarAccion(accion);
    if (accion == "alcanzar comida")
    {
        alcanzarComida();
    }
}

void Jirafa::alcanzarComida() {
    std::cout<<"Soy un ciervo y estoy saltando!"<<std::endl;
}

bool Jirafa::puedeHabitar(Habitat * habitat) {
    //si el habitat recibido es bosque o sabana, sera verdadero.
    bool puedePertenecer = habitat->getNombre() == NOMBRE_SABANA
                           || habitat->getNombre() == NOMBRE_BOSQUE;
    return puedePertenecer;
}
