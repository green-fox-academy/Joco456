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
