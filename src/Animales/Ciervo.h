//
// Created by itsre on 26/03/2023.
//

#ifndef PROJECT_OOP_CIERVO_H
#define PROJECT_OOP_CIERVO_H
#include "Animal.h"


class Ciervo : public Animal{
public:
    Ciervo() = default;
    void saltar();

    bool puedeHabitar(Habitat * habitat) override;
    void ejecutarAccion(std::string accion) override;
    void mostrarAcciones() override;
    void comer() override;
    std::string getEspecie() override;
};


#endif //PROJECT_OOP_CIERVO_H
