//
// Created by Admin on 24/04/2019.
//

#include "NetworkDevice.h"

NetworkDevice::NetworkDevice(std::string id, int bandwidth) : Device(id){
    _bandwidth = bandwidth;
}

int NetworkDevice::getbandwith() {
    return _bandwidth;
}


