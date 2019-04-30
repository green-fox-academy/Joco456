#include <iostream>
#include "Animal.h"
#include "Cat.h"
#include "Parrot.h"
#include "Dog.h"
#include "AnimalShelter.h"
#include <ctime>

int main() {

    srand(time(NULL));

    Cat cat;
    Dog dog("Pluto");
    AnimalShelter animalShelter;
    animalShelter.rescue(&dog);
    animalShelter.addAdopter("Joco");
    animalShelter.toString();
    animalShelter.rescue(&cat);
    animalShelter.toString();
    animalShelter.heal();
    animalShelter.toString();
    animalShelter.heal();
    animalShelter.toString();


    return 0;
}

