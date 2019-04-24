//
// Created by Admin on 24/04/2019.
//

#ifndef INSTRUMENTS_TO_STRINGED_INSTRUMENTS_VIOLIN_H
#define INSTRUMENTS_TO_STRINGED_INSTRUMENTS_VIOLIN_H
#include "StringedInstrument.h"

class Violin : public StringedInstrument {

public:
    Violin ();

    void sound() override;


};


#endif //INSTRUMENTS_TO_STRINGED_INSTRUMENTS_VIOLIN_H
