//
// Created by itsre on 26/03/2023.
//
#include "Zoologico.h"

void Zoologico::menu() {
    int opcion =0;
    do
    {
        std::cout<<"------Zoologico------"<<std::endl;
        std::cout<<"1. Agregar animal"<<std::endl;
        std::cout<<"2. Agregar habitat"<<std::endl;
        std::cout<<"3. Mostrar todos los habitats"<<std::endl;
        std::cout<<"4. Interactuar con animal"<<std::endl;
        std::cout<<"5. Editar alimentos"<<std::endl;
        std::cout<<"6. Salir"<<std::endl;

        std::cin>>opcion;

        //intenta seleccionar una opcion del menu y se hace cargo de todos los posibles errores.
        try{
            seleccionarOpcion(opcion);
        } catch (std::invalid_argument error)
        {
            std::cout<<"Error, opcion no valida: "<<std::endl;
            std::cout<<error.what()<<std::endl;
        }catch (std::domain_error error)
        {
            std::cout<<"Error de dato."<<std::endl;
            std::cout<<error.what()<<std::endl;
        }catch (std::out_of_range error)
        {
            std::cout<<"Error de rango."<<std::endl;
            std::cout<<error.what()<<std::endl;
        }


    }while(opcion != 6);
}

void Zoologico::seleccionarOpcion(int opcion) {

    switch (opcion) {
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
            editarAlimento();
            break;
        case 6:
            std::cout<<"Hasta luego"<<std::endl;
            break;
        default: //Lanzar excepcion de numero o caracter no valido.
            if (std::cin.fail())
            {
                limpiarBuffer();
                throw std::invalid_argument("Debe ingresar numeros del 1 al 6.");
            }else{
                throw std::invalid_argument("Esa opcion no existe en el menu.");
            }
            break;
    }

}


void Zoologico::agregarAnimal() {

//Menu
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
    std::cout<<"Elija al animal: "<<std::endl;
    std::cin>>opcionAnimal;

    if (std::cin.fail()) {
        limpiarBuffer();
        throw std::invalid_argument("Debe ingresar numeros del 1 al 9.");
    }
    if (opcionAnimal > 9 || opcionAnimal < 1)
    {
        throw std::invalid_argument("Ese animal no esta disponible para el zoologico.");
    }

//Datos del animal
    //Nombre
    std::cout<<"Esciba el nombre del animal: "<<std::endl;
    std::string nombre;

    limpiarBuffer();
    std::getline(std::cin, nombre);

    //Edad
    std::cout<<"Digite cuantos anios tiene "<<nombre<<": "<<std::endl;
    int edad = 0;
    std::cin>>edad;

    if (std::cin.fail()) {
        limpiarBuffer();
        throw std::invalid_argument("La edad debe ser un numero.");
    }
    if (edad < 0)
    {
        throw std::domain_error("La edad no puede ser negativa");
    }

    //Estado de salud
    std::cout<<"Describa el estado de salud de "<<nombre<<": "<<std::endl;
    std::string salud;

    limpiarBuffer();
    std::getline(std::cin, salud);

//Creacion del objeto animal
    Animal * animal;
    switch (opcionAnimal) {
        case 1:
            animal = new Calamar(nombre, edad, salud);
            break;
        case 2:
            animal = new Cebra(nombre, edad, salud);
            break;
        case 3:
            animal = new Ciervo(nombre, edad, salud);
            break;
        case 4:
            animal = new Jirafa(nombre, edad, salud);
            break;
        case 5:
            animal = new Mantarraya(nombre, edad, salud);
            break;
        case 6:
            animal = new OsoPanda(nombre, edad, salud);
            break;
        case 7:
            animal = new Serpiente(nombre, edad, salud);
            break;
        case 8:
            animal = new Tigre(nombre, edad, salud);
            break;
        case 9:
            animal = new Tortuga(nombre, edad, salud);
            break;
    }

//Seleccionar habitat
    std::cout<<"---Seleccionar habitat---"<<std::endl;
    imprimirHabitats();

    int opcionHabitat=-1;
    std::cout<<"Donde vivira el animal: "<<animal->getEspecie() <<"?"<<std::endl;
    std::cin>>opcionHabitat;
    limpiarBuffer();


    if (std::cin.fail()) {
        limpiarBuffer();
        throw std::invalid_argument("Debe ingresar numeros para elegir el habitat.");
    }
    if (opcionHabitat > habitats.size() || opcionHabitat<1)
    {
        throw std::invalid_argument("Ese habitat no existe.");
    }

//Agregar el animal seleccionado al habitat seleccionado.
    auto habitat = habitats.begin();
    std::advance(habitat, opcionHabitat-1);
    (*habitat)->agregarAnimal(animal);
}

void Zoologico::agregarHabitat() {
//Menu
    std::cout<<"----Que tipo de habitat desea agregar?----"<<std::endl;
    std::cout<<"1. Bosque"<<std::endl;
    std::cout<<"2. Acuatico"<<std::endl;
    std::cout<<"3. Sabana"<<std::endl;
    std::cout<<"4. Selva tropical"<<std::endl;

    int opcion = 0;
    std::cin>>opcion;

//Seleccion de habitat
    Habitat * habitat;
    switch (opcion) {
        case 1:
            habitat = crearBosque();
            break;
        case 2:
            habitat = crearAcuatico();
            break;
        case 3:
            habitat = crearSabana();
            break;
        case 4:
            habitat = crearSelva();
            break;
        default:
            if (std::cin.fail()) {
                limpiarBuffer();
            }
            throw std::invalid_argument("Ese tipo de habitat no existe.");
    }

//Agregar el nuevo habitat al zoologico
    habitats.push_back(habitat);
}

Habitat *Zoologico::crearBosque() {
    float tamanio;
    Habitat*habitat;
    int arboles;
    int nivelDeHumedad;

    std::cout<<"Que tamanio en metros cuadrados tiene el habitat?"<<std::endl;
    std::cin>>tamanio;

    if (std::cin.fail()) {
        limpiarBuffer();
        throw std::invalid_argument("El tamanio debe ser un numero");
    }
    if (tamanio < 1)
    {
        throw std::domain_error("el tamanio no puede ser menor a 1");
    }

    std::cout<<"Cuantos arboles tiene el habitat?"<<std::endl;
    std::cin>>arboles;

    if (std::cin.fail()) {
        limpiarBuffer();
        throw std::invalid_argument("La cantidad de arboles debe ser un numero entero");
    }
    if (arboles < 0)
    {
        throw std::domain_error("La cantidad de arboles no puede ser menor a 0");
    }

    std::cout<<"Que nivel de humedad tiene el bosque?"<<std::endl;
    std::cin>>nivelDeHumedad;

    if (std::cin.fail()) {
        limpiarBuffer();
        throw std::invalid_argument("El nivel de humedad debe ser un numero entero");
    }
    if (nivelDeHumedad < 0)
    {
        throw std::domain_error("El nivel de humedad no puede ser menor a 0");
    }

    habitat = new Bosque(tamanio, nivelDeHumedad, arboles);
    return habitat;
}

Habitat *Zoologico::crearAcuatico() {
    float tamanio;
    int corales;
    float profundidad;
    std::cout<<"Que tamanio en metros cuadrados tiene el acuario?"<<std::endl;
    std::cin>>tamanio;

    if (std::cin.fail()) {
        limpiarBuffer();
        throw std::invalid_argument("El tamanio debe ser un numero");
    }
    if (tamanio < 1)
    {
        throw std::domain_error("el tamanio no puede ser menor a 1");
    }
    std::cout<<"Cuantos corales tiene el acuario?"<<std::endl;
    std::cin>>corales;

    if (std::cin.fail()) {
        limpiarBuffer();
        throw std::invalid_argument("La cantidad de corales debe ser un numero entero");
    }
    if (corales < 0)
    {
        throw std::domain_error("La cantidad de corales no puede ser menor a 0");
    }

    std::cout<<"Que profundidad tiene el acuario?"<<std::endl;
    std::cin>>profundidad;

    if (std::cin.fail()) {
        limpiarBuffer();
        throw std::invalid_argument("La profundidad debe ser un numero");
    }
    if (profundidad < 0)
    {
        throw std::domain_error("La profundidad no puede ser menor a 0");
    }

    Habitat * habitat;
    habitat = new Acuatico(tamanio, profundidad, corales);
    return habitat;
}

Habitat *Zoologico::crearSabana() {
    float tamanio;
    int lagunas;
    float alturaArboles;

    std::cout<<"Que tamanio en metros cuadrados tiene el acuario?"<<std::endl;
    std::cin>>tamanio;
    if (std::cin.fail()) {
        limpiarBuffer();
        throw std::invalid_argument("El tamanio debe ser un numero");
    }
    if (tamanio < 1)
    {
        throw std::domain_error("el tamanio no puede ser menor a 1");
    }

    std::cout<<"Cuantas lagunas tiene el habitat?"<<std::endl;
    std::cin>>lagunas;
    if (std::cin.fail()) {
        limpiarBuffer();
        throw std::invalid_argument("La cantidad de lagunas debe ser un numero entero");
    }
    if (lagunas < 1)
    {
        throw std::domain_error("La cantidad de lagunas no puede ser menor a 0");
    }

    std::cout<<"Que altura tienen los arboles?"<<std::endl;
    std::cin>>alturaArboles;
    if (std::cin.fail()) {
        limpiarBuffer();
        throw std::invalid_argument("La altura de los arboles debe ser un numero");
    }
    if (alturaArboles < 0)
    {
        throw std::domain_error("La altura de los arboles no puede ser menor a 0");
    }


    Habitat * habitat;
    habitat = new Sabana(tamanio, lagunas, alturaArboles);
    return habitat;
}

Habitat *Zoologico::crearSelva() {
    float tamanio;
    int lianas;
    int temperaturaMedia;

    std::cout<<"Que tamanio en metros cuadrados tiene el acuario?"<<std::endl;
    std::cin>>tamanio;

    if (std::cin.fail()) {
        limpiarBuffer();
        throw std::invalid_argument("El tamanio debe ser un numero");
    }
    if (tamanio < 1)
    {
        throw std::domain_error("El tamanio no puede ser menor a 1");
    }

    std::cout<<"Cuantas lianas tiene el habitat?"<<std::endl;
    std::cin>>lianas;
    if (std::cin.fail()) {
        limpiarBuffer();
        throw std::invalid_argument("La cantidad de lianas debe ser un numero entero");
    }
    if (lianas < 1)
    {
        throw std::domain_error("La cantidad de lianas no puede ser menor a 1");
    }

    std::cout<<"Que temperatura media tiene el habitat?"<<std::endl;
    std::cin>>temperaturaMedia;

    if (std::cin.fail()) {
        limpiarBuffer();
        throw std::invalid_argument("La temperatura media debe ser un numero");
    }

    Habitat * habitat;
    habitat = new SelvaTropical(tamanio, lianas, temperaturaMedia);
    return habitat;
}

void Zoologico::interactuarAnimal() {

    if (habitats.size() < 1)
    {
        std::cout<<"No hay animales con los que interactuar"<<std::endl;
        return;
    }

    //Menu
    std::cout<<"---Seleccionar habitat---"<<std::endl;
    imprimirHabitats();

    int opcionHabitat=-1;
    std::cout<<"Seleccione el habitat donde esta el animal para interactuar:"<<std::endl;
    std::cin>>opcionHabitat;

    if (std::cin.fail()) {
        limpiarBuffer();
        throw std::invalid_argument("Debe usar numeros para seleccionar el habitat.");
    }
    if (opcionHabitat > habitats.size() || opcionHabitat < 1)
    {
        throw std::invalid_argument("Ese habitat no existe en el zoologico.");
    }



    //Imprimir los animales del habitat
    auto habitat = habitats.begin();
    advance(habitat, opcionHabitat-1);

    if ((*habitat)->getCantidadAnimales() < 1)
    {
        std::cout<<"No hay animales en el habitat con los que interactuar"<<std::endl;
        return;
    }

    (*habitat)->mostrarAnimales();

    //Seleccionar animal del habitat
    std::cout<<"Seleccione el animal para interactuar:"<<std::endl;
    int opcionAnimal=0;
    std::cin>>opcionAnimal;

    if (std::cin.fail()) {
        limpiarBuffer();
        throw std::invalid_argument("Debe usar numeros para seleccionar al animal.");
    }

    //seleccionar la accion a realizar del animal
    (*habitat)->getAnimal(opcionAnimal-1)->mostrarAcciones();
    limpiarBuffer();
    std::string accion="";

    std::cout<<"Escriba exactamente la opcion que va a realizar el animal"<<std::endl;
    std::getline(std::cin, accion);

    //ejecutar la accion del animal seleccionado.
    try{
        accionAnimal(*habitat, opcionAnimal-1, accion);
    }catch (std::invalid_argument e)
    {
        std::cout<<"Error: ";
        std::cout<<e.what()<<std::endl;
    }
}


void Zoologico::accionAnimal(Habitat *habitat, int animalID, std::string nombreAccion) {
    //Convertir cada caracter a minúscula para evitar que la comparacion dependa de las mayusculas o minusculas.
    for (char & c : nombreAccion) {
        c = std::tolower(c);
    }
    habitat->getAnimal(animalID)->ejecutarAccion(nombreAccion);
}


void Zoologico::editarAlimento() {

}

void Zoologico::mostrarHabitats() {

    //zoologico vacio
    if (habitats.size() < 1)
    {
        std::cout<<"No hay habitats en el zoologico"<<std::endl;
        return;
    }

    std::list<Habitat*>::iterator habitat;

    //imprimir informacion
    std::cout<<"---INFORMACION DE LOS HABITATS---"<<std::endl;
    for(habitat = habitats.begin(); habitat != habitats.end(); ++habitat) {
        (*habitat)->mostrarDetalles();
    }
}

/*Constructor con diferentes configuraciones, cada una con propiedades diferentes.
 * Esto se hace para evitar tener que llenar el zoologico manualmente cada vez que se quiera testear algo. */
Zoologico::Zoologico(int id) {
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

            selva->agregarAnimal(new Serpiente("cesar", 5, "bien"));
            selva->agregarAnimal(new Tigre("camilo", 6, "bien"));
            acuario->agregarAnimal(new Mantarraya("pepe", 3, "bien"));
            acuario->agregarAnimal(new Mantarraya("javi", 4, "mal"));


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

            bosque->agregarAnimal(new Tigre("carlos", 12, "bien"));
            bosque->agregarAnimal(new OsoPanda("panda", 3, "bien"));

            acuario->agregarAnimal(new Mantarraya("pedro", 4, "mal"));
            acuario->agregarAnimal(new Calamar("calamardo", 5, "mas o menos"));

            sabana->agregarAnimal(new Ciervo("rodrigo", 1, "bien"));
            sabana->agregarAnimal(new Cebra("alex", 3, "bien"));

            selva->agregarAnimal(new Serpiente("erick", 5, "mal"));
            selva->agregarAnimal(new Tigre("tonio", 6, "mal"));

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

void Zoologico::limpiarBuffer() {
    // Limpiamos el buffer antes de leer la entrada
    std::cin.clear(); // Limpiamos cualquier indicador de error en cin
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); // Ignoramos cualquier entrada hasta el siguiente carácter de nueva línea
}

void Zoologico::imprimirHabitats() {
    auto habitat = habitats.begin();
    int contador = 1;
    for(habitat = habitats.begin(); habitat != habitats.end(); ++habitat) {
        std::cout<<"#"<<contador<<": "<<(*habitat)->getNombre()<<std::endl;
        ++contador;
    }
}


