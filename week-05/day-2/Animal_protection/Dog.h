//
// Created by Admin on 30/04/2019.
//

#ifndef ANIMAL_PROTECTION_DOG_H
#define ANIMAL_PROTECTION_DOG_H
#include "Animal.h"
#include <cstdlib>

class Dog : public Animal
{
public:
    Dog();
    Dog(std::string name);
    void setHealCost() override;

};

#endif //ANIMAL_PROTECTION_DOG_H
