//
// Created by Admin on 24/04/2019.
//

#ifndef INSTRUMENTS_TO_STRINGED_INSTRUMENTS_STRINGEDINSTRUMENT_H
#define INSTRUMENTS_TO_STRINGED_INSTRUMENTS_STRINGEDINSTRUMENT_H
#include "Instrument.h"

class StringedInstrument : public Instrument {

public:
    virtual void sound() = 0;

    void play() override;


protected:
    int _numberOfStrings;

};


#endif //INSTRUMENTS_TO_STRINGED_INSTRUMENTS_STRINGEDINSTRUMENT_H
