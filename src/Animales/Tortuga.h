//
// Created by itsre on 26/03/2023.
//

#ifndef PROJECT_OOP_TORTUGA_H
#define PROJECT_OOP_TORTUGA_H
#include "Animal.h"



class Tortuga : public Animal{
public:
    Tortuga() = default;
    //Usa el constructor original y asigna el alimento por defecto del animal
    Tortuga(std::string nombre, int edad, std::string salud) : Animal{nombre, edad, salud} { tipoAlimento = Carnivoro; horasDormir = 8; }

    //Accion extra
    void esconderseEnCaparazon();

    //Overrides
    bool puedeHabitar(Habitat * habitat) override;
    void ejecutarAccion(std::string accion) override;
    void mostrarAcciones() override;

    std::string getEspecie() override;
};


#endif //PROJECT_OOP_TORTUGA_H
