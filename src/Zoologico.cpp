//
// Created by itsre on 26/03/2023.
//

#include "Zoologico.h"

void Zoologico::menu() {
    int option =0;

    while(option != 6)
    {
        std::cout<<"------Zoologico------"<<std::endl;
        std::cout<<"1. Agregar animal"<<std::endl;
        std::cout<<"2. Agregar habitat"<<std::endl;
        std::cout<<"3. Mostrar todos los habitats"<<std::endl;
        std::cout<<"4. Interactuar con animal"<<std::endl;
        std::cout<<"5. Editar alimentos"<<std::endl;
        std::cout<<"6. Salir"<<std::endl;

        std::cin>>option;

        switch (option) {
            case 1:
                agregarAnimal();
                break;
            case 2:
                agregarHabitat();
                break;
            case 3:
                mostrarHabitats();
                break;
            case 4:
                interactuarAnimal();
                break;
            case 5:
                break;
            case 6:
                std::cout<<"Hasta luego"<<std::endl;
                break;
            default:
                std::cout<<"Opcion no valida"<<std::endl;
                break;
        }
    }
}

void Zoologico::agregarAnimal() {
    std::cout<<"---Agregar animal---"<<std::endl;
    std::cout<<"1. Calamar."<<std::endl;
    std::cout<<"2. Cebra."<<std::endl;
    std::cout<<"3. Ciervo."<<std::endl;
    std::cout<<"4. Jirafa."<<std::endl;
    std::cout<<"5. Mantarraya."<<std::endl;
    std::cout<<"6. Oso panda."<<std::endl;
    std::cout<<"7. Serpiente."<<std::endl;
    std::cout<<"8. Tigre."<<std::endl;
    std::cout<<"9. Tortuga."<<std::endl;

    int opcionAnimal=-1;
    std::cout<<"Elija el animal: "<<std::endl;
    std::cin>>opcionAnimal;

    Animal * animal;

    switch (opcionAnimal) {
        case 1:
            animal = new Calamar();
            break;
        case 2:
            animal = new Cebra();
            break;
        case 3:
            animal = new Ciervo();
            break;
        case 4:
            animal = new Jirafa();
            break;
        case 5:
            animal = new Mantarraya();
            break;
        case 6:
            animal = new OsoPanda();
            break;
        case 7:
            animal = new Serpiente();
            break;
        case 8:
            animal = new Tigre();
            break;
        case 9:
            animal = new Tortuga();
            break;
    }
    std::cout<<"---Seleccionar habitat---"<<std::endl;
    std::list<Habitat*>::iterator habitat;

    //Imprimir los nombres de los habitats disponibles en el zoologico junto con un id dado por el contador.
    int contador = 1;
    for(habitat = habitats.begin(); habitat != habitats.end(); ++habitat) {
        std::cout<<"#"<<contador<<": "<<(*habitat)->getNombre()<<std::endl;
        ++contador;
    }

    int opcionHabitat=-1;

    std::cout<<"Donde vivira el animal: "<<animal->getEspecie() <<"?"<<std::endl;
    std::cin>>opcionHabitat;

    //agregar el animal seleccionado al habitat seleccionado.
    std::advance(habitat, opcionHabitat);
    (*habitat)->agregarAnimal(animal);
}

void Zoologico::agregarHabitat() {


    int opcion = 0;

    while(opcion < 1 || opcion > 4)
    {
        std::cout<<"----Que tipo de habitat desea agregar?----"<<std::endl;
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
    std::cout<<"---Seleccionar habitat---"<<std::endl;
    std::list<Habitat*>::iterator habitat;

    //Imprimir los nombres de los habitats disponibles en el zoologico junto con un id dado por el contador.
    int contador = 1;
    for(habitat = habitats.begin(); habitat != habitats.end(); ++habitat) {
        std::cout<<"#"<<contador<<": "<<(*habitat)->getNombre()<<std::endl;
        ++contador;
    }
    int opcionHabitat=-1;
    std::cout<<"Seleccione el habitat donde esta el animal para interactuar:"<<std::endl;
    std::cin>>opcionHabitat;


    //Imprimir los animales del habitat y posteriormente seleccionar uno de ellos.
    advance(habitat, opcionHabitat);
    (*habitat)->mostrarAnimales();
    std::cout<<"Seleccione el animal para interactuar:"<<std::endl;
    int opcionAnimal=0;
    std::cin>>opcionAnimal;

    //ejecutar la accion del animal seleccionado.
    (*habitat)->getAnimal(opcionAnimal-1)->accion();



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
    Habitat * bosque;
    Habitat * acuario;
    Habitat * sabana;
    Habitat * selva;

    switch (id) {
        case 1: //4 habitats vacios
            bosque = new Bosque(10,1,1);
            acuario = new Acuatico(10,0,1);
            sabana = new Sabana(1,2,1.1f);
            selva = new SelvaTropical(10,1,1);

            habitats.push_back(bosque);
            habitats.push_back(acuario);
            habitats.push_back(sabana);
            habitats.push_back(selva);
            break;
        case 2://4 habitats con algunos animales
            bosque = new Bosque(10,1,1);
            acuario = new Acuatico(10,0,1);
            sabana = new Sabana(1,2,1.1f);
            selva = new SelvaTropical(10,1,1);

            selva->agregarAnimal(new Jirafa());
            selva->agregarAnimal(new OsoPanda());
            selva->agregarAnimal(new Mantarraya());
            acuario->agregarAnimal(new Mantarraya());


            habitats.push_back(bosque);
            habitats.push_back(acuario);
            habitats.push_back(sabana);
            habitats.push_back(selva);
            break;
        case 3: //4 habitats, todos con 2 animales
            bosque = new Bosque(10,1,1);
            acuario = new Acuatico(10,0,1);
            sabana = new Sabana(1,2,1.1f);
            selva = new SelvaTropical(10,1,1);

            bosque->agregarAnimal(new Tigre());
            bosque->agregarAnimal(new OsoPanda());

            acuario->agregarAnimal(new Mantarraya());
            acuario->agregarAnimal(new Calamar());

            sabana->agregarAnimal(new Ciervo());
            sabana->agregarAnimal(new Cebra());

            selva->agregarAnimal(new Serpiente());
            selva->agregarAnimal(new Tigre());

            habitats.push_back(bosque);
            habitats.push_back(acuario);
            habitats.push_back(sabana);
            habitats.push_back(selva);
            break;
        default:
            habitats = std::list<Habitat*>();

            break;
    }
}
