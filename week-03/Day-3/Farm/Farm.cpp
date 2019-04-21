//
// Created by Admin on 21/04/2019.
//

#include "Farm.h"

Farm::Farm(std::vector<Animal> animal, int maxAnimals) {

    _animalsList = animal;
    _maxAnimals = maxAnimals;

}

int Farm::freePlaces() {
    return _maxAnimals - _animalsList.size();
}

void Farm::breed(std::string name, int hunger, int thirts) {

    if (freePlaces() > 0) {
        _animalsList.push_back(Animal(name, hunger, thirts));
    } else {
        std::cout << "There is no more free space for new animal" << std::endl;
    }
}

void Farm::slaughter() {

    int index = 0;
    int leastHungry = _animalsList[0].getHunger();

    for (int i = 1; i < _animalsList.size() ; ++i) {
        if (_animalsList[i].getHunger() < leastHungry){
            leastHungry = _animalsList[i].getHunger();
            index = i;
        }
    }
    _animalsList.erase(_animalsList.begin() + index);
}

void Farm::print() {
    for (int i = 0; i < _animalsList.size() ; ++i) {
        std::cout << _animalsList[i].getName() << std::endl;
    }

}


