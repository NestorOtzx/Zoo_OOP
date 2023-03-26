//
// Created by itsre on 26/03/2023.
//

#ifndef PROJECT_OOP_HABITAT_H
#define PROJECT_OOP_HABITAT_H
#include <list>
#include "Animales/Animal.h"

class Habitat {
private:
    std::list<Animal*> animales;

public:
    Habitat() = default;

    void mostrarAnimales();
    void agregarAnimal(Animal * animal);
};


#endif //PROJECT_OOP_HABITAT_H
