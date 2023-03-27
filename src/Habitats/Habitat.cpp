//
// Created by itsre on 26/03/2023.
//

#include "Habitat.h"

void Habitat::mostrarAnimales() {

}

void Habitat::agregarAnimal(Animal * animal) {
    animales.push_back(animal);
}

void Habitat::mostrarDetalles() {
    if (!animales.empty())
    {
        std::cout<<"---Animales en el habitat---"<<std::endl;
        std::list<Animal*>::iterator animal = animales.begin();

        int contador = 1;
        for(animal; animal != animales.end(); ++animal)
        {
            std::cout<<"#"<<contador<<": "<<(*animal)->getEspecie()<<std::endl;
        }
    }
}

std::string Habitat::getNombre() {
    return "habitat";
}
