//
// Created by Admin on 24/04/2019.
//

#include "Helicopter.h"

void Helicopter::land() {

    std::cout << "The " << _color << " " << _type << " is now landing." << std::endl;

}

void Helicopter::fly() {

    std::cout << "The " << _color << " " << _type << " is flying with maximum speed: " << _maxSpeed << std::endl;

}

void Helicopter::takeOff() {

    std::cout << "The " << _color << " " << _type << " is now taking off." << std::endl;

}

Helicopter::Helicopter() {
    _type = "Medicopter";
    _color = "white";
    _maxSpeed = 300;


}
