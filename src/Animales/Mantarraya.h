//
// Created by itsre on 26/03/2023.
//

#ifndef PROJECT_OOP_MANTARRAYA_H
#define PROJECT_OOP_MANTARRAYA_H
#include "Animal.h"

class Mantarraya : public Animal {
public:
    Mantarraya() = default;
    Mantarraya(std::string nombre, int edad, std::string salud) : Animal{nombre, edad, salud} {}

    void nadar();

    bool puedeHabitar(Habitat * habitat) override;
    void ejecutarAccion(std::string accion) override;
    void mostrarAcciones() override;
    void comer() override;
    std::string getEspecie() override;
};


#endif //PROJECT_OOP_MANTARRAYA_H
