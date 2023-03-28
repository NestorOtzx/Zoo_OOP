//
// Created by itsre on 26/03/2023.
//

#ifndef PROJECT_OOP_CALAMAR_H
#define PROJECT_OOP_CALAMAR_H

#include "Animal.h"
#include <list>


class Calamar : public Animal{
public:
    Calamar() = default;
    Calamar(std::string nombre, int edad, std::string salud) : Animal{nombre, edad, salud} {}

    void arrojarTinta();

    bool puedeHabitar(Habitat * habitat) override;
    void ejecutarAccion(std::string accion) override;
    void mostrarAcciones() override;
    void comer() override;
    std::string getEspecie() override;
};


#endif //PROJECT_OOP_CALAMAR_H
