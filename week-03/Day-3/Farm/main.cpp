#include <iostream>
#include "Farm.h"
#include <vector>

std::vector<Animal> Animalvectorinit () {

    std::vector<Animal> animals;

    animals.push_back(Animal("Lion", 20, 25));
    animals.push_back(Animal("Horse", 15, 30));
    animals.push_back(Animal("Dog", 30, 20));
    animals.push_back(Animal("Cat", 10, 10));

    return animals;
}

int main() {

    Farm farmOb1 (Animalvectorinit(), 5);

    std::cout << "Original animals: \n";
    farmOb1.print();

    farmOb1.breed("Frog", 5, 15);
    std::cout << "Updated animals after breed: \n";
    farmOb1.print();

    farmOb1.breed("Mosquito", 5, 30);
    std::cout << "Lets see if there is place for Mosquito \n";
    farmOb1.print();

    farmOb1.slaughter();
    std::cout << "Removed the least hungry animal: \n";
    farmOb1.print();

    return 0;
}