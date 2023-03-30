//
// Created by itsre on 26/03/2023.
//

#ifndef PROJECT_OOP_SERPIENTE_H
#define PROJECT_OOP_SERPIENTE_H
#include "Animal.h"


class Serpiente : public Animal{
public:
    Serpiente() = default;
    //Usa el constructor original y asigna el alimento por defecto del animal
    Serpiente(std::string nombre, int edad, std::string salud) : Animal{nombre, edad, salud} { tipoAlimento = Carnivoro; horasDormir = 0; }

    //Accion extra
    void esconderse();

    //Overrides
    bool puedeHabitar(Habitat * habitat) override;
    void ejecutarAccion(std::string accion) override;
    void mostrarAcciones() override;

    std::string getEspecie() override;
};


#endif //PROJECT_OOP_SERPIENTE_H
