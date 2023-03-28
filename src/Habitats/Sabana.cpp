//
// Created by itsre on 26/03/2023.
//

#include "Sabana.h"

Sabana::Sabana(int tamanio, int lagunas, float alturaArboles) {
    this->tamHabitat = tamanio;
    this->alturaDeArboles = alturaArboles;
    this->cantidadDeLagunas = lagunas;
}

void Sabana::mostrarDetalles() {
    std::cout<<"---Sabana---"<<std::endl;
    std::cout<<"* Cantidad de lagunas: "<<cantidadDeLagunas<<std::endl;
    std::cout<<"* Altura promedio de los arboles: "<<alturaDeArboles<<std::endl;

    //llamar a la definicion original del metodo donde se muestran los animales
    Habitat::mostrarDetalles();
}

std::string Sabana::getNombre() {
    return NOMBRE_SABANA;
}
