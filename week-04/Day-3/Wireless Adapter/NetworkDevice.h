//
// Created by Admin on 24/04/2019.
//

#ifndef WIRELESS_ADAPTER_NETWORKDEVICE_H
#define WIRELESS_ADAPTER_NETWORKDEVICE_H

#include "Device.h"

class NetworkDevice : public virtual Device{

public:
    NetworkDevice(std::string id, int bandwidth);
    int getbandwith();

private:
    int _bandwidth;

};


#endif //WIRELESS_ADAPTER_NETWORKDEVICE_H
