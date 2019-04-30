//
// Created by Admin on 30/04/2019.
//

#include "Parrot.h"

Parrot::Parrot() {
    _name = "Parrot";
    setHealCost();
}

Parrot::Parrot(std::string name) : Animal(name) {
    setHealCost();
}

void Parrot::setHealCost() {
    _healCost = rand() % 6 + 4;
}


