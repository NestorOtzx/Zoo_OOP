//
// Created by itsre on 26/03/2023.
//

#ifndef PROJECT_OOP_OSOPANDA_H
#define PROJECT_OOP_OSOPANDA_H
#include "Animal.h"


class OsoPanda : public Animal{
public:
    OsoPanda() = default;
    //Usa el constructor original y asigna el alimento por defecto del animal
    OsoPanda(std::string nombre, int edad, std::string salud) : Animal{nombre, edad, salud} { alimento = Alimento("bambu", tipoAlimento); tipoAlimento = Omnivoro; }

    //Accion extra
    void dormirMas();

    //Overrides
    bool puedeHabitar(Habitat * habitat) override;
    void ejecutarAccion(std::string accion) override;
    void mostrarAcciones() override;

    std::string getEspecie() override;
};


#endif //PROJECT_OOP_OSOPANDA_H
