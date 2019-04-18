//
// Created by Admin on 18/04/2019.
//

#ifndef PETROL_STATION_STATION_H
#define PETROL_STATION_STATION_H

#include "Car.h"
#include <iostream>
#include <string>


class Station {

public:
    Station (int gasAmount);
    void setgasAmount(int gasAmount);

    void fill(Car &car);
    int getgasAmount();

private:
    int _gasAmount;

};


#endif //PETROL_STATION_STATION_H
