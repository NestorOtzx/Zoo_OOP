//
// Created by itsre on 26/03/2023.
//

#ifndef PROJECT_OOP_CEBRA_H
#define PROJECT_OOP_CEBRA_H
#include "Animal.h"


class Cebra : public Animal{
public:
    Cebra() = default;
    void correr();

    bool puedeHabitar(Habitat * habitat) override;
    void ejecutarAccion(std::string accion) override;
    void mostrarAcciones() override;
    void comer() override;
    std::string getEspecie() override;
};


#endif //PROJECT_OOP_CEBRA_H
