//
// Created by Admin on 24/04/2019.
//

#include "USBDevice.h"

USBDevice::USBDevice(std::string id, USBType usbType) : Device(id){
    _usbType = usbType;
}

std::string USBDevice::getUSBTypeAsString() {
    if (_usbType == 0){
        return "USB Type 2";
    } else{
        return "USB Type 3";
    }
}


