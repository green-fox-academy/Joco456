//
// Created by Admin on 21/04/2019.
//

#ifndef FARM_FARM_H
#define FARM_FARM_H

#include <iostream>
#include "Animal.h"
#include <vector>


class Farm {

public:

    Farm(std::vector<Animal> animal, int maxAnimals);

    int freePlaces ();

    void breed(std::string name, int hunger, int thirts);
    void slaughter();

    void print();

private:

    std::vector<Animal> _animalsList;
    int _maxAnimals;

};


#endif //FARM_FARM_H
