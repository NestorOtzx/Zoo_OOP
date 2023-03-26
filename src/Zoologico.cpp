//
// Created by itsre on 26/03/2023.
//

#include "Zoologico.h"

void Zoologico::menu() {
    int option =0;

    while(option != 7)
    {
        std::cout<<"------Zoologico------"<<std::endl;
        std::cout<<"1. Agregar animal"<<std::endl;
        std::cout<<"2. Agregar habitat"<<std::endl;
        std::cout<<"3. Mostrar todos los animales"<<std::endl;
        std::cout<<"4. Mostrar todos los habitats"<<std::endl;
        std::cout<<"5. Interactuar con animal"<<std::endl;
        std::cout<<"6. Editar alimentos"<<std::endl;
        std::cout<<"7. Salir"<<std::endl;

        std::cin>>option;

        switch (option) {
            case 1:
                break;
            case 2:
                agregarHabitat();
                break;
            case 3:
                break;
            case 4:
                mostrarHabitats();
                break;
            case 5:
                break;
            case 6:
                break;
            case 7:
                std::cout<<"Hasta luego"<<std::endl;
                break;
            default:
                std::cout<<"Opcion no valida"<<std::endl;
                break;
        }
    }
}

void Zoologico::agregarAnimal() {

}

void Zoologico::agregarHabitat() {


    int opcion = 0;

    while(opcion < 1 || opcion > 4)
    {
        std::cout<<"----Que mostrarDetalles de habitat desea agregar?----"<<std::endl;
        std::cout<<"1. Bosque"<<std::endl;
        std::cout<<"2. Acuatico"<<std::endl;
        std::cout<<"3. Sabana"<<std::endl;
        std::cout<<"4. Selva tropical"<<std::endl;

        std::cin>>opcion;
        int tamanio;

        Habitat * habitat;

        switch (opcion) {
            case 1:
                int arboles;
                int nivelDeHumedad;
                std::cout<<"Que tamanio en metros cuadrados tiene el habitat?"<<std::endl;
                std::cin>>tamanio;
                std::cout<<"Cuantos arboles tiene el habitat?"<<std::endl;
                std::cin>>arboles;
                std::cout<<"Que nivel de humedad tiene el bosque?"<<std::endl;
                std::cin>>nivelDeHumedad;

                habitat = new Bosque(tamanio, nivelDeHumedad, arboles);
                habitats.push_back(habitat);
                break;
            case 2:
                int corales;
                int profundidad;
                std::cout<<"Que tamanio en metros cuadrados tiene el acuario?"<<std::endl;
                std::cin>>tamanio;
                std::cout<<"Cuantos corales tiene el acuario?"<<std::endl;
                std::cin>>corales;
                std::cout<<"Que profundidad tiene el acuario?"<<std::endl;
                std::cin>>profundidad;


                habitat = new Acuatico(tamanio, profundidad, corales);
                habitats.push_back(habitat);
                break;
            case 3:
                int lagunas;
                float alturaArboles;
                std::cout<<"Que tamanio en metros cuadrados tiene el acuario?"<<std::endl;
                std::cin>>tamanio;
                std::cout<<"Cuantas lagunas tiene el habitat?"<<std::endl;
                std::cin>>lagunas;
                std::cout<<"Que altura tienen los arboles?"<<std::endl;
                std::cin>>alturaArboles;

                habitat = new Sabana(tamanio, lagunas, alturaArboles);
                habitats.push_back(habitat);
                break;
            case 4:
                int lianas;
                int temperaturaMedia;
                std::cout<<"Que tamanio en metros cuadrados tiene el acuario?"<<std::endl;
                std::cin>>tamanio;
                std::cout<<"Cuantas lianas tiene el habitat?"<<std::endl;
                std::cin>>lianas;
                std::cout<<"Que temperatura media tiene el habitat?"<<std::endl;
                std::cin>>temperaturaMedia;

                habitat = new SelvaTropical(tamanio, lianas, temperaturaMedia);
                habitats.push_back(habitat);
                break;
            default:
                break;
        }

    }
}

void Zoologico::mostrarAnimales() {

}

void Zoologico::interactuarAnimal() {

}

void Zoologico::editarAlimento() {

}

void Zoologico::mostrarHabitats() {
    std::list<Habitat*>::iterator habitat;

    std::cout<<"---INFORMACION DE LOS HABITATS---"<<std::endl;
    for(habitat = habitats.begin(); habitat != habitats.end(); ++habitat) {
        (*habitat)->mostrarDetalles();
    }
}

Zoologico::Zoologico(int id) { //Constructor para hacer pruebas con caracteristicas definidas
    switch (id) {
        case 1: //4 habitats
            Habitat * bosque = new Bosque(10,1,1);
            Habitat * acuario = new Acuatico(10,0,1);
            Habitat * sabana = new Sabana(1,2,1.1f);
            Habitat * selva = new SelvaTropical(10,1,1);

            habitats.push_back(bosque);
            habitats.push_back(acuario);
            habitats.push_back(sabana);
            habitats.push_back(selva);
            break;
    }
}
