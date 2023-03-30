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

    //Usa el constructor original y asigna el alimento por defecto del animal
    Calamar(std::string nombre, int edad, std::string salud) : Animal{nombre, edad, salud} { alimento = Alimento("peces", tipoAlimento); tipoAlimento = Carnivoro; }

    //Accion extra
    void arrojarTinta();

    //Overrides
    bool puedeHabitar(Habitat * habitat) override;
    void ejecutarAccion(std::string accion) override;
    void mostrarAcciones() override;

    std::string getEspecie() override;
};


#endif //PROJECT_OOP_CALAMAR_H
