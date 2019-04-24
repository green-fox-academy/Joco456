//
// Created by Admin on 24/04/2019.
//

#include "Reptile.h"

Reptile::Reptile(std::string name) {
    _name = name;
}

std::string Reptile::getName() {
    return _name;
}

std::string Reptile::breed() {

    return "laying eggs";

}

void Reptile::activity() {

    std ::cout << "is playing with other animals." << std::endl;

}


