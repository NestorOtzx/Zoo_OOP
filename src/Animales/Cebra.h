//
// Created by itsre on 26/03/2023.
//

#ifndef PROJECT_OOP_CEBRA_H
#define PROJECT_OOP_CEBRA_H
#include "Animal.h"


class Cebra : public Animal{
private:
    const TipoAlimento tipo = TipoAlimento::Herbivoro;
public:
    Cebra() = default;
    Cebra(std::string nombre, int edad, std::string salud) : Animal{nombre, edad, salud} { alimento = Alimento("hojas", tipo); }

    void correr();

    bool puedeHabitar(Habitat * habitat) override;
    void ejecutarAccion(std::string accion) override;
    void mostrarAcciones() override;

    std::string getEspecie() override;
};


#endif //PROJECT_OOP_CEBRA_H
