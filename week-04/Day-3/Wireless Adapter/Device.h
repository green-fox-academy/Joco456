//
// Created by Admin on 24/04/2019.
//

#ifndef WIRELESS_ADAPTER_DEVICE_H
#define WIRELESS_ADAPTER_DEVICE_H

#include "iostream"

class Device {

public:
    Device(std::string id);
    std::string getId();

private:
    std::string _id;

};


#endif //WIRELESS_ADAPTER_DEVICE_H
