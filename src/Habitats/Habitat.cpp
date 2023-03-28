//
// Created by itsre on 26/03/2023.
//

#include "Habitat.h"

void Habitat::mostrarAnimales() {
    std::list<Animal*>::iterator animal = animales.begin();

    std::cout<<" ID | NOMBRE | EDAD | ESPECIE | ALIMENTACION | ESTADO DE SALUD | "<<std::endl;
    int contador = 1;
    for(animal; animal != animales.end(); ++animal)
    {
        std::cout<<"#"<<contador<<": | "<<(*animal)->getNombre()<<" | "
        <<(*animal)->getEdad()<<" anios | "<<(*animal)->getEspecie()
        <<" | Alimentacion | "<<(*animal)->getEstadoSalud()<<" |"<<std::endl;
        ++contador;
    }
}

void Habitat::agregarAnimal(Animal * animal) {
    if (animal->puedeHabitar(this))
    {
        animales.push_back(animal);
    }else{
        std::cout<<"La especie "<<animal->getEspecie()<<" NO puede pertenecer a el habitat "<<getNombre()<<std::endl;
    }
}

void Habitat::mostrarDetalles() {
    if (!animales.empty())
    {
        std::cout<<"-Animales en el habitat-"<<std::endl;
        mostrarAnimales();
    }
}

std::string Habitat::getNombre() {
    return "habitat";
}

Animal *Habitat::getAnimal(int id) {
    std::list<Animal*>::iterator animal;
    animal = animales.begin();
    std::advance(animal, id);
    return (*animal);
}

