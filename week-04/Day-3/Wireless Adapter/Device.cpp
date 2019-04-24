//
// Created by Admin on 24/04/2019.
//

#include "Device.h"

Device::Device(std::string id) {
    _id = id;
}

std::string Device::getId() {
    return _id;
}
