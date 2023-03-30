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
#include <string>
#include <cctype> //para pasar de mayusculas a minusculas
#include <limits> //para limpiar el buffer de cin

class Zoologico {
private:
    std::list<Habitat*> habitats;
    std::list<Alimento*> alimentos;

public:
    //Zoologico vacio
    Zoologico() = default;

    //Constructor que permite escoger una configuracion por defecto para el zoologico por una id - Leer el readme
    Zoologico(int id);

    //Menu
    void menu();
    void seleccionarOpcion(int opcion);
    void agregarAnimal();
    void agregarHabitat();

    //muestra los habitats actuales del zoologico, sus caracteristicas y los animales que contiene.
    void mostrarHabitats();

    //muestra al usuario las acciones que puede realizar un animal, el usuario podrá escoger cual hacer.
    void interactuarAnimal();

    //ejecuta una accion especifica en un animal especifico
    void accionAnimal(Habitat *habitat, int animalID, std::string nombreAccion);

    void editarAlimento();

    //Limpia todos los datos del cin para evitar errores de consola.
    void limpiarBuffer();

    //Mostrar los nombres de todos los habitats disponibles en el zoologico.
    void imprimirHabitats();

    //Crear habitats especificos
    Habitat * crearBosque();
    Habitat * crearSabana();
    Habitat * crearAcuatico();
    Habitat * crearSelva();

};


#endif //PROJECT_OOP_ZOOLOGICO_H
