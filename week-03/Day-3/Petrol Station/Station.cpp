//
// Created by Admin on 18/04/2019.
//

#include "Station.h"

Station::Station(int gasAmount) {
    setgasAmount(gasAmount);
}

void Station::setgasAmount(int gasAmount) {
    _gasAmount = gasAmount;
}

void Station::fill(Car &car) {

    while (!car.isFull()) {
        car.fill();
        _gasAmount --;
        std::cout << "Filling car" << std::endl;
        if (car.isFull()) {
            std::cout << "The remaining gas amount of the station is: " << getgasAmount() << std::endl;
        }
    }
}

int Station::getgasAmount() {
    return _gasAmount;
}
