//
// Created by Admin on 24/04/2019.
//

#include "Copier.h"

Copier::Copier(int sizeX, int sizeY, int speed) : Printer2D(sizeX, sizeY), Scanner(speed) {

}

void Copier::copy() {


    scan();
    std::cout << " and ";
    print();

}
