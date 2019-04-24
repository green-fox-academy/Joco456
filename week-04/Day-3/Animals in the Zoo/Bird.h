//
// Created by Admin on 24/04/2019.
//

#ifndef ANIMALS_IN_THE_ZOO_BIRD_H
#define ANIMALS_IN_THE_ZOO_BIRD_H

#include <iostream>
#include "Animal.h"

class Bird : public Animal {

public:
    Bird(std::string name);

    std::string getName() override;

    std::string breed() override;

    void activity() override;


};


#endif //ANIMALS_IN_THE_ZOO_BIRD_H
