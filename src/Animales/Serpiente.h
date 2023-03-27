//
// Created by itsre on 26/03/2023.
//

#ifndef PROJECT_OOP_SERPIENTE_H
#define PROJECT_OOP_SERPIENTE_H
#include "Animal.h"

class Serpiente : public Animal{
public:
    Serpiente() = default;
    void accion() override;
    std::string getEspecie() override;
};


#endif //PROJECT_OOP_SERPIENTE_H