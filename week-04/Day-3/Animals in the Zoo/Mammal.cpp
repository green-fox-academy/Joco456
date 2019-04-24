//
// Created by Admin on 24/04/2019.
//

#include "Mammal.h"

Mammal::Mammal(std::string name) {
    _name = name;

}

std::string Mammal::getName() {
    return _name;
}

std::string Mammal::breed() {

    return "pushing miniature versions out.";


}

void Mammal::activity() {

    std::cout << "is eating." << std::endl;
}
