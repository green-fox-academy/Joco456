#include <iostream>
#include "Animal.h"

int main() {

    Animal Lion;
    Lion.play();
    Lion.drink();
     std::cout << Lion.getHunger() << Lion.getThirst() << std::endl;

    return 0;
}