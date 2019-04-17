//
// Created by Admin on 17/04/2019.
//

#include "Animal.h"

Animal::Animal(int hunger, int thirst) : hunger(hunger), thirst(thirst) {}

Animal::Animal() {
    Animal::hunger = 50;
    Animal::thirst = 50;
}

int Animal::getHunger() const {
    return hunger;
}

int Animal::getThirst() const {
    return thirst;
}

void Animal::setHunger(int hunger) {
    Animal::hunger = hunger;
}

void Animal::setThirst(int thirst) {
    Animal::thirst = thirst;
}

void Animal::eat() {
    hunger = hunger -1;
}

void Animal::drink() {
    thirst = thirst -1;
}
void Animal::play() {
    thirst = thirst +1;
    hunger = hunger +1;
}



