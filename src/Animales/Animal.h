//
// Created by itsre on 26/03/2023.
//

#ifndef PROJECT_OOP_ANIMAL_H
#define PROJECT_OOP_ANIMAL_H

#include "Habitats/Habitat.h"
#include "../Informacion.h"
#include "../Alimento.h"
#include <iostream>

class Habitat; //le decimos al compilador que el tipo "Habitat" existe, para que después pueda ser usado.

class Animal : public Informacion{
private:
    std::string nombre;
    Habitat * habitat;
    int edad;
    std::string salud;

protected:
    TipoAlimento tipoAlimento;
public:
    Animal() = default;
    Animal(std::string nombre, int edad, std::string salud);

    //getters
    std::string getNombre() override;
    std::string getEstadoSalud();

    int getEdad();
    TipoAlimento getTipoAlimento();


    //Acciones
    void comer();
    void dormir();

    //si el acuario recibido es habitable por este animal, esta funcion retornara verdadero.
    virtual bool puedeHabitar(Habitat *habitat);

    virtual void ejecutarAccion(std::string accion);
    virtual void mostrarAcciones();

    //Retorna el tipo de especie de cada animal
    virtual std::string getEspecie();

    static std::string tipoAlimentoAString(TipoAlimento tipo);
};


#endif //PROJECT_OOP_ANIMAL_H
