//
// Created by itsre on 26/03/2023.
//

#ifndef PROJECT_OOP_HABITAT_H
#define PROJECT_OOP_HABITAT_H
#include <list>
#include <iostream>
#include "Animales/Animal.h"

class Animal; //le decimos al compilador que el tipo "Animal" existe, para que después pueda ser usado.

class Habitat {
private:
    Animal * miAnimal;
    int a1;
    std::list<Animal*> animales;
protected:
    float tamHabitat;
public:
    Habitat() = default;
    void mostrarAnimales();
    void agregarAnimal(Animal * animal);
    virtual void mostrarDetalles();
};


#endif //PROJECT_OOP_HABITAT_H
