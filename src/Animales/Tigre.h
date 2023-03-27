//
// Created by itsre on 26/03/2023.
//

#ifndef PROJECT_OOP_TIGRE_H
#define PROJECT_OOP_TIGRE_H
#include "Animal.h"

class Tigre : public Animal{
public:
    Tigre() = default;
    void correr();

    void ejecutarAccion(std::string accion) override;
    void mostrarAcciones() override;
    void comer() override;
    std::string getEspecie() override;
};


#endif //PROJECT_OOP_TIGRE_H
