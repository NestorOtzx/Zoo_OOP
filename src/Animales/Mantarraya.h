//
// Created by itsre on 26/03/2023.
//

#ifndef PROJECT_OOP_MANTARRAYA_H
#define PROJECT_OOP_MANTARRAYA_H
#include "Animal.h"

class Mantarraya : public Animal {
public:
    Mantarraya() = default;
    //Usa el constructor original y asigna el alimento por defecto del animal
    Mantarraya(std::string nombre, int edad, std::string salud) : Animal{nombre, edad, salud} { alimento = Alimento("peces", tipoAlimento);  tipoAlimento = Omnivoro; }

    //Accion extra
    void nadar();

    //Overrides
    bool puedeHabitar(Habitat * habitat) override;
    void ejecutarAccion(std::string accion) override;
    void mostrarAcciones() override;

    std::string getEspecie() override;
};


#endif //PROJECT_OOP_MANTARRAYA_H
