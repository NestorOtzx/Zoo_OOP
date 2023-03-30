//
// Created by itsre on 26/03/2023.
//

#ifndef PROJECT_OOP_JIRAFA_H
#define PROJECT_OOP_JIRAFA_H
#include "Animal.h"

class Jirafa: public Animal {
public:
    Jirafa() = default;
    //Usa el constructor original y asigna el alimento por defecto del animal
    Jirafa(std::string nombre, int edad, std::string salud) : Animal{nombre, edad, salud} { tipoAlimento = Herbivoro; }

    //Accion extra
    void alcanzarComida();

    //Overrides
    bool puedeHabitar(Habitat * habitat) override;
    void ejecutarAccion(std::string accion) override;
    void mostrarAcciones() override;

    std::string getEspecie() override;
};


#endif //PROJECT_OOP_JIRAFA_H
