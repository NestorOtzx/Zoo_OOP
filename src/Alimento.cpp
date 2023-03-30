//
// Created by itsre on 26/03/2023.
//

#include "Alimento.h"

Alimento::Alimento(std::string nombreComida, TipoAlimento tipo) {
    this->nombreAlimento = nombreComida;
    this->tipo = tipo;
}

TipoAlimento Alimento::getTipo() {
    return tipo;
}

std::string Alimento::getNombre() {
    return nombreAlimento;
}

void Alimento::setNombre(std::string nombre) {
    this->nombreAlimento = nombre;
}

void Alimento::setTipo(TipoAlimento tipo) {
    this->tipo = tipo;
}
