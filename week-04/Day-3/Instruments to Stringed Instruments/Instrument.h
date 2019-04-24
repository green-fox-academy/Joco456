//
// Created by Admin on 24/04/2019.
//

#ifndef INSTRUMENTS_TO_STRINGED_INSTRUMENTS_INSTRUMENT_H
#define INSTRUMENTS_TO_STRINGED_INSTRUMENTS_INSTRUMENT_H

#include <iostream>

class Instrument {

public:
    virtual void play() = 0;

protected:
    std::string _name;
    std::string _sound;

};


#endif //INSTRUMENTS_TO_STRINGED_INSTRUMENTS_INSTRUMENT_H
