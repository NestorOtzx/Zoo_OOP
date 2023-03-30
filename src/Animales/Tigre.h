//
// Created by itsre on 26/03/2023.
//

#ifndef PROJECT_OOP_TIGRE_H
#define PROJECT_OOP_TIGRE_H
#include "Animal.h"


class Tigre : public Animal{
public:
    Tigre() = default;
    //Usa el constructor original y asigna el alimento por defecto del animal
    Tigre(std::string nombre, int edad, std::string salud) : Animal{nombre, edad, salud} { tipoAlimento = Carnivoro; horasDormir = 13; }

    //Accion extra
    void correr();

    //Overrides
    bool puedeHabitar(Habitat * habitat) override;
    void ejecutarAccion(std::string accion) override;
    void mostrarAcciones() override;

    std::string getEspecie() override;
};


#endif //PROJECT_OOP_TIGRE_H
