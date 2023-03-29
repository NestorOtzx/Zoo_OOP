//
// Created by itsre on 26/03/2023.
//

#ifndef PROJECT_OOP_ALIMENTO_H
#define PROJECT_OOP_ALIMENTO_H
#include <string>

enum TipoAlimento{
    Carnivoro, Herbivoro, Omnivoro
};


class Alimento {
private:
    std::string nombreAlimento;
    TipoAlimento tipo;

public:
    Alimento() = default;
    Alimento(std::string nombreComida, TipoAlimento tipo);

    std::string getNombre();

    TipoAlimento getTipo();

};


#endif //PROJECT_OOP_ALIMENTO_H
