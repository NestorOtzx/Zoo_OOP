//
// Created by itsre on 26/03/2023.
//

#ifndef PROJECT_OOP_CEBRA_H
#define PROJECT_OOP_CEBRA_H
#include "Animal.h"

class Cebra : public Animal{
public:
    Cebra() = default;
    void accion() override;
    std::string getEspecie() override;
};


#endif //PROJECT_OOP_CEBRA_H
