//
// Created by Admin on 24/04/2019.
//

#include "Violin.h"

Violin::Violin() {
    _numberOfStrings = 4;
    _sound = "Screech";
    _name = "Violin";
}

void Violin::sound() {
    std::cout << _sound << std::endl;

}
