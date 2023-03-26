//
// Created by itsre on 26/03/2023.
//

#include "Bosque.h"

Bosque::Bosque(float tamanio, int humedad, int arboles) {
    this->tamHabitat = tamanio;
    this->niveldehumedad = humedad;
    this->cantidadDeArboles = arboles;
}

void Bosque::mostrarDetalles() {
    std::cout<<"---Bosque---"<<std::endl;
    std::cout<<"* Numero de arboles: "<<cantidadDeArboles<<std::endl;
    std::cout<<"* Nivel de humedad: "<<niveldehumedad<<std::endl;
}
