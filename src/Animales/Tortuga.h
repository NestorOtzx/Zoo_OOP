//
// Created by itsre on 26/03/2023.
//

#ifndef PROJECT_OOP_TORTUGA_H
#define PROJECT_OOP_TORTUGA_H
#include "Animal.h"

class Tortuga : public Animal{
public:
    Tortuga() = default;
    void accion() override;
    std::string getEspecie() override;
};


#endif //PROJECT_OOP_TORTUGA_H
