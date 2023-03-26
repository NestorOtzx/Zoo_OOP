//
// Created by itsre on 26/03/2023.
//

#include "Zoologico.h"

void Zoologico::menu() {
    int option =0;

    while(option < 1 || option > 5)
    {
        std::cout<<"------Zoologico------"<<std::endl;
        std::cout<<"1. Agregar animal"<<std::endl;
        std::cout<<"2. Agregar habitat"<<std::endl;
        std::cout<<"3. Mostrar todos los animales"<<std::endl;
        std::cout<<"4. Interactuar con animal"<<std::endl;
        std::cout<<"5. Editar alimentos"<<std::endl;

        std::cin>>option;

        switch (option) {
            case 1:
                break;
            case 2:
                break;
            case 3:
                break;
            case 4:
                break;
            case 5:
                break;
            default:
                std::cout<<"Opcion no valida"<<std::cout;
                break;
        }
    }
}

void Zoologico::agregarAnimal() {

}

void Zoologico::agregarHabitat() {

}

void Zoologico::mostrarAnimales() {

}

void Zoologico::interactuarAnimal() {

}

void Zoologico::editarAlimento() {

}
