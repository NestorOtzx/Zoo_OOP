//
// Created by itsre on 26/03/2023.
//

#ifndef PROJECT_OOP_CIERVO_H
#define PROJECT_OOP_CIERVO_H
#include "Animal.h"


class Ciervo : public Animal{
private:
    const TipoAlimento tipo = TipoAlimento::Herbivoro;
public:
    Ciervo() = default;
    Ciervo(std::string nombre, int edad, std::string salud) : Animal{nombre, edad, salud} { alimento = Alimento("hojas", tipo); }

    void saltar();


    bool puedeHabitar(Habitat * habitat) override;
    void ejecutarAccion(std::string accion) override;
    void mostrarAcciones() override;

    std::string getEspecie() override;
};


#endif //PROJECT_OOP_CIERVO_H
