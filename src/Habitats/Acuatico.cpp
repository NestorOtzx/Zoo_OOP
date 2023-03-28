//
// Created by itsre on 26/03/2023.
//

#include "Acuatico.h"



Acuatico::Acuatico(int tamanio, float profundidad, int corales) {
    this->tamHabitat = tamanio;
    this->profundidadDelAgua = profundidad;
    this->cantidadDeCorales = corales;
}

void Acuatico::mostrarDetalles() {
    std::cout<<"---Acuatico---"<<std::endl;
    std::cout<<"* Numero de corales: "<<cantidadDeCorales<<std::endl;
    std::cout<<"* Profundidad del agua: "<<profundidadDelAgua<<std::endl;

    //llamar a la definicion original del metodo donde se muestran los animales
    Habitat::mostrarDetalles();
}

std::string Acuatico::getNombre() {
    return NOMBRE_ACUARIO;
}
