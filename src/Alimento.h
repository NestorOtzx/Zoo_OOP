//
// Created by itsre on 26/03/2023.
//

#ifndef PROJECT_OOP_ALIMENTO_H
#define PROJECT_OOP_ALIMENTO_H
#include <string>

enum TipoAlimento{
    Carne, plantas
};


class Alimento {
private:
    TipoAlimento tipo;
    int cantidad;

public:
    Alimento() = default;
};


#endif //PROJECT_OOP_ALIMENTO_H
