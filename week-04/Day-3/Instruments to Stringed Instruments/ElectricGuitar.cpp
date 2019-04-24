//
// Created by Admin on 24/04/2019.
//

#include "ElectricGuitar.h"

ElectricGuitar::ElectricGuitar() {

    _numberOfStrings = 6;
    _sound = "Twang";
    _name = "Electric Guitar";

}

void ElectricGuitar::sound() {

    std::cout << _sound << std::endl;

}

ElectricGuitar::ElectricGuitar(int numberOfStrings) {
    _numberOfStrings = numberOfStrings;
    _name = "Electric Guitar";
}


