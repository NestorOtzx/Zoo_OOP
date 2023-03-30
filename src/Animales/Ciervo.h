//
// Created by itsre on 26/03/2023.
//

#ifndef PROJECT_OOP_CIERVO_H
#define PROJECT_OOP_CIERVO_H
#include "Animal.h"


class Ciervo : public Animal{
public:
    Ciervo() = default;
    //Usa el constructor original y asigna el alimento por defecto del animal
    Ciervo(std::string nombre, int edad, std::string salud) : Animal{nombre, edad, salud} { tipoAlimento = Herbivoro; horasDormir = 6; }

    //Accion extra
    void saltar();

    //Overrides
    bool puedeHabitar(Habitat * habitat) override;
    void ejecutarAccion(std::string accion) override;
    void mostrarAcciones() override;

    std::string getEspecie() override;
};


#endif //PROJECT_OOP_CIERVO_H
