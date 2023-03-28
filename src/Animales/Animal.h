//
// Created by itsre on 26/03/2023.
//

#ifndef PROJECT_OOP_ANIMAL_H
#define PROJECT_OOP_ANIMAL_H

#include "Habitats/Habitat.h"
#include "../Alimento.h"
#include <iostream>
#include <string>

class Habitat; //le decimos al compilador que el tipo "Habitat" existe, para que después pueda ser usado.

class Animal {
private:
    std::string nombre;
    Habitat * habitat;
    int edad;
    Alimento alimento;
    std::string salud;

public:
    Animal() = default;
    Animal(std::string nombre, int edad, std::string salud);

    std::string getNombre();
    int getEdad();
    std::string getEstadoSalud();

    //Acciones

    void dormir();


    //si el acuario recibido es habitable por este animal, esta funcion retornara verdadero.
    virtual bool puedeHabitar(Habitat *habitat);

    virtual void ejecutarAccion(std::string accion);
    virtual void mostrarAcciones();
    virtual void comer();
    //Retorna el tipo de especie de cada animal con su respectivo pronombre, ej: "La serpiente", "El leon"
    virtual std::string getEspecie();
};


#endif //PROJECT_OOP_ANIMAL_H
