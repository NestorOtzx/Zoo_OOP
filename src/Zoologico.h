//
// Created by itsre on 26/03/2023.
//

#ifndef PROJECT_OOP_ZOOLOGICO_H
#define PROJECT_OOP_ZOOLOGICO_H

//Todos los habitats
#include "Habitats/Habitat.h"
#include "Habitats/Bosque.h"
#include "Habitats/Acuatico.h"
#include "Habitats/SelvaTropical.h"
#include "Habitats/Sabana.h"

//Todos los animales
#include "Animales/Calamar.h"
#include "Animales/Cebra.h"
#include "Animales/Ciervo.h"
#include "Animales/Jirafa.h"
#include "Animales/Mantarraya.h"
#include "Animales/OsoPanda.h"
#include "Animales/Serpiente.h"
#include "Animales/Tigre.h"
#include "Animales/Tortuga.h"

//Otros
#include <list>
#include <iostream>

class Zoologico {
private:
    std::list<Habitat*> habitats;

public:
    //Zoologico vacio
    Zoologico() = default;

    //Constructor que permite escoger una configuracion por defecto para el zoologico por una id
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
