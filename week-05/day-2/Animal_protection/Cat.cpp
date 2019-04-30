//
// Created by Admin on 30/04/2019.
//

#include "Cat.h"

Cat::Cat() {
    _name = "Cat";
    setHealCost();
}

Cat::Cat(std::string name) : Animal(name){
    setHealCost();

}

void Cat::setHealCost() {
    _healCost = rand() % 7;
}
