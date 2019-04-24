//
// Created by Admin on 24/04/2019.
//

#ifndef ANIMALS_IN_THE_ZOO_REPTILE_H
#define ANIMALS_IN_THE_ZOO_REPTILE_H

#include "Animal.h"

class Reptile : public Animal {

public:

    Reptile(std::string name);

    std::string getName() override;

    std::string breed() override;

    void activity() override;


};


#endif //ANIMALS_IN_THE_ZOO_REPTILE_H
