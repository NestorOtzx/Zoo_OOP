//
// Created by itsre on 26/03/2023.
//

#include "Habitat.h"

void Habitat::mostrarAnimales() {
    std::list<Animal*>::iterator animal = animales.begin();


    //Muestra en forma de tabla la informacion de cada animal en el habitat
    std::cout<<" ID | NOMBRE | EDAD | ESPECIE | ALIMENTACION | ESTADO DE SALUD | "<<std::endl;
    int contador = 1;
    for(animal; animal != animales.end(); ++animal)
    {
        std::cout << "#" << contador << ": | " << (*animal)->getNombre() << " | "
                  << (*animal)->getEdad() << " anios | " << (*animal)->getEspecie()
                  << " | " << Animal::tipoAlimentoAString((*animal)->getTipoAlimento()) << " | " << (*animal)->getEstadoSalud() << " |" << std::endl;
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

    if (id < 0 || id >= animales.size())
    {
        throw std::out_of_range("Ese animal no esta en el habitat");
    }

    animal = animales.begin();
    std::advance(animal, id);
    return (*animal);
}

int Habitat::getCantidadAnimales() {
    return animales.size();
}

