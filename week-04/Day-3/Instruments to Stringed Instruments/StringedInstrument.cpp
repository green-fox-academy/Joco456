//
// Created by Admin on 24/04/2019.
//

#include "StringedInstrument.h"

void StringedInstrument::play() {

    std::cout << _name << ", a " << _numberOfStrings << "-stringed instrument that goes ";
    sound();

}
