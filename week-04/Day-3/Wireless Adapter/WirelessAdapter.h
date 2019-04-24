//
// Created by Admin on 24/04/2019.
//

#ifndef WIRELESS_ADAPTER_WIRELESSADAPTER_H
#define WIRELESS_ADAPTER_WIRELESSADAPTER_H

#include "USBDevice.h"
#include "NetworkDevice.h"

class WirelessAdapter : public USBDevice, public NetworkDevice  {

public:

    WirelessAdapter(std::string id, USBType usbType, int bandwidth);

    void info();

};


#endif //WIRELESS_ADAPTER_WIRELESSADAPTER_H
