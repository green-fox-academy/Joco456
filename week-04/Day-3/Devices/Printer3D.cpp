//
// Created by Admin on 24/04/2019.
//

#include "Printer3D.h"

Printer3D::Printer3D(int sizeX, int sizeY, int sizeZ) {
    _sizeX = sizeX;
    _sizeY = sizeY;
    _sizeZ = sizeZ;
}

std::string Printer3D::getSize() {
    return std::to_string(_sizeX * _sizeY * _sizeZ);
}


