//
// Created by itsre on 26/03/2023.
//

#ifndef PROJECT_OOP_MANTARRAYA_H
#define PROJECT_OOP_MANTARRAYA_H
#include "Animal.h"

class Mantarraya : public Animal {
private:
    const TipoAlimento tipo = TipoAlimento::Omnivoro;
public:
    Mantarraya() = default;
    Mantarraya(std::string nombre, int edad, std::string salud) : Animal{nombre, edad, salud} { alimento = Alimento("peces", tipo); }

    void nadar();

    bool puedeHabitar(Habitat * habitat) override;
    void ejecutarAccion(std::string accion) override;
    void mostrarAcciones() override;

    std::string getEspecie() override;
};


#endif //PROJECT_OOP_MANTARRAYA_H
