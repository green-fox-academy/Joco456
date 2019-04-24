//
// Created by Admin on 24/04/2019.
//

#ifndef ANIMALS_IN_THE_ZOO_MAMMAL_H
#define ANIMALS_IN_THE_ZOO_MAMMAL_H

#include "Animal.h"

class Mammal : public Animal {

public:

    Mammal(std::string name);

    std::string getName() override;

    std::string breed() override;

    void activity() override;


};


#endif //ANIMALS_IN_THE_ZOO_MAMMAL_H
