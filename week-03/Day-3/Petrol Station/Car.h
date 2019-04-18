//
// Created by Admin on 18/04/2019.
//

#ifndef PETROL_STATION_CAR_H
#define PETROL_STATION_CAR_H

#include <iostream>
#include <string>


class Car {

public:
    Car(int gasAmount, int capacity);

    void setgasAmount(int gasAmount);
    void setcapacity(int capacity);

    int getgasAmount();
    int getcapacity();

    bool isFull();
    void fill();



private:
    int _gasAmount;
    int _capacity;

};


#endif //PETROL_STATION_CAR_H
