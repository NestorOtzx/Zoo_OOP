//
// Created by itsre on 26/03/2023.
//

#ifndef PROJECT_OOP_OSOPANDA_H
#define PROJECT_OOP_OSOPANDA_H
#include "Animal.h"

class OsoPanda : public Animal{
public:
    OsoPanda() = default;
    void accion() override;
    std::string getEspecie() override;
};


#endif //PROJECT_OOP_OSOPANDA_H
