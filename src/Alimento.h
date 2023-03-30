//
// Created by itsre on 26/03/2023.
//

#ifndef PROJECT_OOP_ALIMENTO_H
#define PROJECT_OOP_ALIMENTO_H
#include <string>
#include "Informacion.h"

enum TipoAlimento{
    Carnivoro, Herbivoro, Omnivoro
};


class Alimento : public Informacion{
private:
    std::string nombreAlimento;
    TipoAlimento tipo;

public:
    Alimento() = default;
    Alimento(std::string nombreComida, TipoAlimento tipo);

    void setNombre(std::string nombre);
    void setTipo(TipoAlimento tipo);

    //retorna el nombre de la comida
    std::string getNombre() override;
    //retorna el tipo de comida, carnivoro o herbivoro
    TipoAlimento getTipo();
};


#endif //PROJECT_OOP_ALIMENTO_H
