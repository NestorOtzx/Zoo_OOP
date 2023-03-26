//
// Created by itsre on 26/03/2023.
//

#ifndef PROJECT_OOP_ZOOLOGICO_H
#define PROJECT_OOP_ZOOLOGICO_H
#include <list>
#include <iostream>
#include "Animales/Animal.h"
#include "Habitat.h"

class Zoologico {
private:
    std::list<Animal*> animales;
    std::list<Habitat*> habitats;

public:
    Zoologico() = default;
    void menu();
    void agregarAnimal();
    void agregarHabitat();
    void mostrarAnimales();
    void interactuarAnimal();
    void editarAlimento();
};


#endif //PROJECT_OOP_ZOOLOGICO_H
