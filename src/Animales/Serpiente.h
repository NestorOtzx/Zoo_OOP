//
// Created by itsre on 26/03/2023.
//

#ifndef PROJECT_OOP_SERPIENTE_H
#define PROJECT_OOP_SERPIENTE_H
#include "Animal.h"


class Serpiente : public Animal{
private:
    const TipoAlimento tipo = TipoAlimento::Carnivoro;
public:
    Serpiente() = default;
    Serpiente(std::string nombre, int edad, std::string salud) : Animal{nombre, edad, salud} { alimento = Alimento("ratones", tipo); }

    void esconderse();

    bool puedeHabitar(Habitat * habitat) override;
    void ejecutarAccion(std::string accion) override;
    void mostrarAcciones() override;

    std::string getEspecie() override;
};


#endif //PROJECT_OOP_SERPIENTE_H
