//
// Created by Admin on 24/04/2019.
//

#ifndef WIRELESS_ADAPTER_USBDEVICE_H
#define WIRELESS_ADAPTER_USBDEVICE_H

#include "Device.h"

enum USBType{
    USB_TYPE_2,
    USB_TYPE_3
};

class USBDevice : public virtual Device {
public:
    USBDevice(std::string id, USBType usbType);

    std::string getUSBTypeAsString();

private:
    USBType _usbType;

};


#endif //WIRELESS_ADAPTER_USBDEVICE_H
