//
// Created by Admin on 30/04/2019.
//

#ifndef ANIMAL_PROTECTION_CAT_H
#define ANIMAL_PROTECTION_CAT_H
#include "Animal.h"

class Cat : public Animal
{
public:
    Cat();
    Cat(std::string name);
    void setHealCost() override;
};
#endif //ANIMAL_PROTECTION_CAT_H
