//
// Created by Admin on 17/04/2019.
//

#include "Animal.h"

Animal::Animal(std::string name, int hunger, int thirst) {

    _name = name;
    _hunger = hunger;
    _thirst = thirst;
}
Animal::Animal() {
    Animal::_hunger = 50;
    Animal::_thirst = 50;
}
int Animal::getHunger() const {
    return _hunger;
}
int Animal::getThirst() const {
    return _thirst;
}
std::string Animal::getName() {
    return _name;
}
void Animal::setHunger(int hunger) {
    Animal::_hunger = hunger;
}
void Animal::setThirst(int thirst) {
    Animal::_thirst = thirst;
}
void Animal::eat() {
    _hunger = _hunger -1;
}
void Animal::drink() {
    _thirst = _thirst -1;
}
void Animal::play() {
    _thirst = _thirst +1;
    _hunger = _hunger +1;
}
void Animal::setName(std::string name) {
    _name = name;
}


