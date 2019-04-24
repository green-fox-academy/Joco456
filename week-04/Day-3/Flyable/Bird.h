//
// Created by Admin on 24/04/2019.
//

#ifndef ANIMALS_IN_THE_ZOO_BIRD_H
#define ANIMALS_IN_THE_ZOO_BIRD_H

#include <iostream>
#include "Animal.h"
#include "Flyable.h"

class Bird : public Animal, public Flyable {

public:
    Bird(std::string name);

    std::string getName() override;

    std::string breed() override;

    void activity() override;

    void land() override;

    void fly() override;

    void takeOff() override;

};


#endif //ANIMALS_IN_THE_ZOO_BIRD_H
