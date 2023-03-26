//
// Created by itsre on 26/03/2023.
//

#ifndef PROJECT_OOP_SELVATROPICAL_H
#define PROJECT_OOP_SELVATROPICAL_H

#include "Habitat.h"

class SelvaTropical : public Habitat{
private:
    int cantidadLianas;
    int temperaturaMedia;
public:
    SelvaTropical() = default;
    SelvaTropical(int tamanio, int cantidadLianas, int temperaturaMedia);
    void mostrarDetalles();
};


#endif //PROJECT_OOP_SELVATROPICAL_H
