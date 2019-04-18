//
// Created by Admin on 18/04/2019.
//

#include "Car.h"

Car::Car(int gasAmount, int capacity) {
    setgasAmount(gasAmount);
    setcapacity(capacity);

}

void Car::setgasAmount(int gasAmount) {
    _gasAmount = gasAmount;
}

void Car::setcapacity(int capacity) {
    _capacity = capacity;

}

int Car::getgasAmount() {
    return _gasAmount;
}

int Car::getcapacity() {
    return _capacity;
}


bool Car::isFull() {
    return _capacity == _gasAmount;
}

void Car::fill() {
    _gasAmount = _gasAmount +1;

}


