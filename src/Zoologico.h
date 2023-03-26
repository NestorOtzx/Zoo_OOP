//
// Created by itsre on 26/03/2023.
//

#ifndef PROJECT_OOP_ZOOLOGICO_H
#define PROJECT_OOP_ZOOLOGICO_H
#include <list>
#include <iostream>

//Todos los habitats
#include "Habitats/Habitat.h"
#include "Habitats/Bosque.h"
#include "Habitats/Acuatico.h"
#include "Habitats/SelvaTropical.h"
#include "Habitats/Sabana.h"


class Zoologico {
private:
    std::list<Animal*> animales;
    std::list<Habitat*> habitats;

public:
    Zoologico() = default;
    Zoologico(int id);


    void menu();
    void agregarAnimal();
    void agregarHabitat();
    void mostrarAnimales();
    void mostrarHabitats();
    void interactuarAnimal();
    void editarAlimento();
};


#endif //PROJECT_OOP_ZOOLOGICO_H
