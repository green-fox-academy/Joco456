//
// Created by Admin on 24/04/2019.
//

#ifndef INSTRUMENTS_TO_STRINGED_INSTRUMENTS_BASSGUITAR_H
#define INSTRUMENTS_TO_STRINGED_INSTRUMENTS_BASSGUITAR_H

#include "StringedInstrument.h"

class BassGuitar : public StringedInstrument {

public:
    BassGuitar ();
    BassGuitar (int numberOfStrings);

    void sound() override;
};


#endif //INSTRUMENTS_TO_STRINGED_INSTRUMENTS_BASSGUITAR_H
