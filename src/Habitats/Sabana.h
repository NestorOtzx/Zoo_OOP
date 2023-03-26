//
// Created by itsre on 26/03/2023.
//

#ifndef PROJECT_OOP_SABANA_H
#define PROJECT_OOP_SABANA_H
#include "Habitat.h"

class Sabana : public Habitat{
private:
    int cantidadDeLagunas;
    float alturaDeArboles;
public:
    Sabana() = default;
    Sabana(int tamanio, int lagunas, float alturaArboles);
    void mostrarDetalles();
};


#endif //PROJECT_OOP_SABANA_H
