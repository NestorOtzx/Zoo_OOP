# Zoológico

## Selección de configuración básica.
Para hacer pruebas, en el archivo main se puede encontrar la instancia del zoológico, se puede seleccionar una configuración básica del zoológico en base a el parametro que se le de al constructor.

Se puede crear desde un zoológico vacío, hasta un zoológico con unos cuantos habitats y algunos animales en ellos, las configuraciones son las siguientes.

```
  #1 Zoologico(0); //Zoológico vacío
  #2 Zoologico(1); //Zoológico con 4 habitats vacíos
  #3 Zoologico(2); //Zoológico con 4 habitats y algunos animales en un par ellos.
  #4 Zoologico(3); //Zoológico con 4 habitats y 2 animales en todos ellos.
  ```

El siguiente código muestra como se crea un Zoológico con la tercera configuración desde el main.


```
int main() {
    Zoologico zoo = Zoologico(2); //iniciar zoo con 4 habitats y algunos animales.

    zoo.menu(); //desplegar el menú principal
    return 0;
}
```

## Restricciones de los habitat de los animales.

Lógicamente hay animales que no pueden habitar en ciertos habitats, por ejemplo, una jirafa no sobreviviría mucho en un acuario, ni una mantarraya sobreviviría mucho en un bosque.

El programa tiene un sistema que evita que este tipo de situaciones ocurran.

Cada animal tiene sus propias restricciones en la función puedeHabitar() la cual recibe el habitat que se quiere comprobar si es habitable por la especie o no.

A continuación se muestra como está implementado en el tigre:
```
bool Tigre::puedeHabitar(Habitat * habitat) {
    //si el habitat recibido es bosque o sabana, sera verdadero.
    bool puedePertenecer =    habitat->getNombre() == NOMBRE_SABANA
                           || habitat->getNombre() == NOMBRE_BOSQUE
                           || habitat->getNombre() == NOMBRE_SELVA;
    return puedePertenecer;
}
```

Este animal puede habitar 3 biomas, la sabana, el bosque y la selva, y la función retornará verdadero si el habitat recibido es alguno de esos habitats, y retornará falso cuando se pregunte si el tigre puede habitar el acuario.

A continuación otro ejemplo con la mantarraya:
```
bool Mantarraya::puedeHabitar(Habitat * habitat) {
    //si el habitat recibido es acuatico, sera verdadero.
    bool puedePertenecer = habitat->getNombre() == NOMBRE_ACUARIO;
    return puedePertenecer;
}
```
En este caso, la función solo retornará verdadero cuando el habitat recibido sea el acuatico, el único que puede habitar la mantarraya en el zoológico.

