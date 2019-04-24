//
// Created by Admin on 24/04/2019.
//

#include "WirelessAdapter.h"

WirelessAdapter::WirelessAdapter(std::string id, USBType usbType, int bandwidth) : Device(id), USBDevice(id, usbType),
                                                                                   NetworkDevice(id, bandwidth) {

}

void WirelessAdapter::info() {

    std::cout << "Id is: " << getId() << " usb Type is: " << getUSBTypeAsString() << "and bandwidth is: "
              << getbandwith() << std::endl;

}
