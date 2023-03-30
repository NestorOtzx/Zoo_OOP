//
// Created by itsre on 26/03/2023.
//

#include "Animal.h"

std::string Animal::getEspecie() {
    return "animal";
}

std::string Animal::getNombre() {
    return this->nombre;
}

void Animal::dormir() {
    std::cout<<"Zzzz... Zzz..."<<std::endl;
}

void Animal::ejecutarAccion(std::string accion) {

    if (accion == "comer")
    {
        comer();
        return;
    }
    if (accion == "dormir")
    {
        dormir();
        return;
    }

    throw std::invalid_argument("Esa accion no existe");
}

void Animal::mostrarAcciones() {
    std::cout<<"--Acciones--"<<std::endl;
    std::cout<<"Comer"<<std::endl;
    std::cout<<"Dormir"<<std::endl;
}

bool Animal::puedeHabitar(Habitat* habitat) {
    return true;
}

Animal::Animal(std::string nombre, int edad, std::string salud) {
    this->nombre = nombre;
    this->edad = edad;
    this->salud = salud;
}

int Animal::getEdad() {
    return this->edad;
}

std::string Animal::getEstadoSalud() {
    return this->salud;
}

void Animal::comer() {
    std::cout<<"Soy "<<getNombre()<<", un(a) "<<getEspecie()<<" y estoy comiendo "<<"alimento"<<std::endl;
}

TipoAlimento Animal::getTipoAlimento() {
    return this->tipoAlimento;
}

std::string Animal::tipoAlimentoAString(TipoAlimento tipo) {
    switch(tipo)
    {
        case TipoAlimento::Carnivoro:
            return "Carnivoro";
        case TipoAlimento::Herbivoro:
            return "Herbivoro";
        case TipoAlimento::Omnivoro:
            return "Omnivoro";
    }
}



