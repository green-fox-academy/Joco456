//
// Created by Admin on 24/04/2019.
//

#ifndef INSTRUMENTS_TO_STRINGED_INSTRUMENTS_ELECTRICGUITAR_H
#define INSTRUMENTS_TO_STRINGED_INSTRUMENTS_ELECTRICGUITAR_H

#include "StringedInstrument.h"

class ElectricGuitar : public StringedInstrument {

public:
    ElectricGuitar ();
    ElectricGuitar(int numberOfStrings);

    void sound() override;


};


#endif //INSTRUMENTS_TO_STRINGED_INSTRUMENTS_ELECTRICGUITAR_H
