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
    const TipoAlimento tipoAlimento = TipoAlimento::Herbivoro;
    std::string nombre;
    Habitat * habitat;
    int edad;
    std::string salud;

protected:
    Alimento alimento;

public:
    Animal() = default;
    Animal(std::string nombre, int edad, std::string salud);

    //getters
    std::string getNombre();
    std::string getEstadoSalud();
    std::string getNombreComida();

    int getEdad();
    TipoAlimento getTipoAlimento();

    //setters
    void setAlimento(Alimento nuevoAlimento);

    //Acciones
    void comer();
    void dormir();


    //si el acuario recibido es habitable por este animal, esta funcion retornara verdadero.
    virtual bool puedeHabitar(Habitat *habitat);

    virtual void ejecutarAccion(std::string accion);
    virtual void mostrarAcciones();

    //Retorna el tipo de especie de cada animal con su respectivo pronombre, ej: "La serpiente", "El leon"
    virtual std::string getEspecie();


    static std::string tipoComidaAString(TipoAlimento tipo);

};


#endif //PROJECT_OOP_ANIMAL_H
