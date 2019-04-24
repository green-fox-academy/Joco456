//
// Created by Admin on 24/04/2019.
//

#include "Bird.h"

Bird::Bird(std::string name) {
    _name = name;

}


std::string Bird::breed() {

    return "laying eggs";

}

void Bird::activity() {

    std::cout << " sleeping now." << std::endl;

}

std::string Bird::getName() {
    return _name;
}

void Bird::land() {

    std::cout << _name << "is now landing" << std::endl;

}

void Bird::fly() {

    std::cout << _name << " is now flying" << std::endl;
}

void Bird::takeOff() {

    std::cout << _name << " is now taking off" << std::endl;

}
