//
// Created by itsre on 26/03/2023.
//

#ifndef PROJECT_OOP_CEBRA_H
#define PROJECT_OOP_CEBRA_H
#include "Animal.h"


class Cebra : public Animal{
public:
    Cebra() = default;
    //Usa el constructor original y asigna el alimento por defecto del animal
    Cebra(std::string nombre, int edad, std::string salud) : Animal{nombre, edad, salud} { tipoAlimento = Herbivoro; horasDormir = 5; }

    //Accion extra
    void correr();

    //Overrides
    bool puedeHabitar(Habitat * habitat) override;
    void ejecutarAccion(std::string accion) override;
    void mostrarAcciones() override;

    std::string getEspecie() override;
};


#endif //PROJECT_OOP_CEBRA_H
