//
// Created by itsre on 26/03/2023.
//

#ifndef PROJECT_OOP_CALAMAR_H
#define PROJECT_OOP_CALAMAR_H

#include "Animal.h"

class Calamar : public Animal{
public:
    Calamar() = default;
    void arrojarTinta();


    void ejecutarAccion(std::string accion) override;
    void mostrarAcciones() override;
    void comer() override;
    std::string getEspecie() override;
};


#endif //PROJECT_OOP_CALAMAR_H
