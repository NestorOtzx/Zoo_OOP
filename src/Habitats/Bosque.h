//
// Created by itsre on 26/03/2023.
//

#ifndef PROJECT_OOP_BOSQUE_H
#define PROJECT_OOP_BOSQUE_H
#include "Habitat.h"

class Bosque : public Habitat{
private:
    int cantidadDeArboles;
    int niveldehumedad;
public:
    Bosque(float tamanio, int humedad, int arboles);
    void mostrarDetalles() override;
    std::string getNombre() override;
};


#endif //PROJECT_OOP_BOSQUE_H
