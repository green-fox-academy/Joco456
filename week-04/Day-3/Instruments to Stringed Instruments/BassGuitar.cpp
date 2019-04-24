//
// Created by Admin on 24/04/2019.
//

#include "BassGuitar.h"

BassGuitar::BassGuitar() {
    _numberOfStrings = 4;
    _sound = "Duum-duum-duum";
    _name = "Bass Guitar";
}

BassGuitar::BassGuitar(int numberOfStrings) {
    _numberOfStrings = numberOfStrings;
    _name = "Bass Guitar";
    _sound = "Duum-duum-duum";

}

void BassGuitar::sound() {

    std::cout << _sound << std::endl;

}
