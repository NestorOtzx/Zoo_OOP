//
// Created by itsre on 26/03/2023.
//

#include "SelvaTropical.h"

SelvaTropical::SelvaTropical(int tamanio, int cantidadLianas, int temperaturaMedia) {
    this->tamHabitat = tamanio;
    this->cantidadLianas = cantidadLianas;
    this->temperaturaMedia = temperaturaMedia;
}

void SelvaTropical::mostrarDetalles() {
    std::cout<<"---Selva tropical---"<<std::endl;
    std::cout<<"* Cantidad de lianas: "<<cantidadLianas<<std::endl;
    std::cout<<"* Temperatura media: "<<temperaturaMedia<<std::endl;

    //llamar a la definicion original del metodo donde se muestran los animales
    Habitat::mostrarDetalles();
}

std::string SelvaTropical::getNombre() {
    return "Selva tropical";
}
