//
// Created by Admin on 30/04/2019.
//

#ifndef ANIMAL_PROTECTION_PARROT_H
#define ANIMAL_PROTECTION_PARROT_H
#include "Animal.h"

class Parrot : public Animal {
public:
    Parrot();
    Parrot(std::string name);

    void setHealCost() override;
};


#endif //ANIMAL_PROTECTION_PARROT_H
