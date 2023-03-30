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

void Animal::dormir(int horas) {
    if (horas >= horasDormir)
    {
        std::cout<<"Zzzz... Zzz..."<<std::endl;
    }else{
        std::cout<<"No puedo dormir solo "<<horas<<" horas, necesito mas de "<<getHorasDormir()<<" para descansar"<<std::endl;
    }
}

void Animal::jugar() {
    if (jugoEnElDia)
    {
        std::cout<<getNombre()<<": Ya jugue mucho por hoy."<<std::endl;
    }else{
        std::cout<<"Soy "<<getNombre()<<", un(a) "<<getEspecie()<<" y jugando"<<std::endl;
        jugoEnElDia = true;
    }
}


void Animal::comer(Alimento *comida) {
    //si es omnivoro puede comer cualquier alimento, si no, el tipo de alimento debe ser el mismo al que puede recibir.
    if (tipoAlimento == Omnivoro || comida->getTipo() == tipoAlimento)
    {
        std::cout<<"Soy "<<getNombre()<<", un(a) "<<getEspecie()<<" y como "<<comida->getNombre()<<std::endl;
    }else{
        std::cout<<"Soy un "<<getEspecie()<<" "<<tipoAlimentoAString(tipoAlimento)<<" y no puedo comer comida de tipo "<<tipoAlimentoAString(comida->getTipo())<<std::endl;
    }
}

void Animal::ejecutarAccion(std::string accion) {

    if (accion == "jugar")
    {
        jugar();
        return;
    }

    throw std::invalid_argument("Esa accion no existe");
}

void Animal::mostrarAcciones() {
    std::cout<<"--Acciones--"<<std::endl;
    std::cout<<"Comer"<<std::endl;
    std::cout<<"Dormir"<<std::endl;
    std::cout<<"Jugar"<<std::endl;
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

int Animal::getHorasDormir() {
    return horasDormir;
}



