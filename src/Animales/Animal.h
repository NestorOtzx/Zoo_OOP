//
// Created by itsre on 26/03/2023.
//

#ifndef PROJECT_OOP_ANIMAL_H
#define PROJECT_OOP_ANIMAL_H
#include "../Habitat.h"
#include "../Alimento.h"
#include <string>

class Animal {
private:
    std::string nombre;
    std::string especie;
    Habitat * habitat;
    Alimento alimento;
    std::string salud;
public:
    Animal() = default;
    void Accion();
};


#endif //PROJECT_OOP_ANIMAL_H
