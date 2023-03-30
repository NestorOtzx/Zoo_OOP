//
// Created by itsre on 26/03/2023.
//

#ifndef PROJECT_OOP_HABITAT_H
#define PROJECT_OOP_HABITAT_H
#include <list>
#include <iostream>
#include "Animales/Animal.h"

//Constantes globales
#define NOMBRE_ACUARIO "Acuario"
#define NOMBRE_SELVA "Selva tropical"
#define NOMBRE_BOSQUE "Bosque"
#define NOMBRE_SABANA "Sabana"


class Animal; //le decimos al compilador que el tipo "Animal" existe, para que después pueda ser usado.

class Habitat {
private:
    std::list<Animal*> animales;

protected:
    float tamHabitat;

public:
    Habitat() = default;

    //Muestra en forma de tabla la informacion de cada animal en el habitat
    void mostrarAnimales();

    //Agrega un animal siempre y cuando el habitat sea adecuado para el animal
    void agregarAnimal(Animal * animal);

    //Obtener un animal por su id en la lista;
    Animal * getAnimal(int id);

    //Mostrar los animales en el habitat además de su información.
    virtual void mostrarDetalles();

    //retorna el nombre del habitat
    virtual std::string getNombre();

    //retorna la cantidad actual de animales en el habitat
    int getCantidadAnimales();
};


#endif //PROJECT_OOP_HABITAT_H
