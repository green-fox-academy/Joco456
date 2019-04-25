//
// Created by Admin on 17/04/2019.
//

#include "Sharpie.h"


Sharpie::Sharpie(std::string color, float width) {
    setColor(color);
    setWidth(width);
    setinkAmount(100);
}

Sharpie::Sharpie() {
    _color = "blue";
    _width = 20;
    _inkAmount = 100;
}

void Sharpie::setColor(std::string color) {
    _color = color;
}

void Sharpie::setWidth(float width) {
    _width = width;
}

void Sharpie::setinkAmount(float inkAmount) {
    _inkAmount = inkAmount;

}

std::string Sharpie::getColor() {
    return _color;
}

void Sharpie::use() {

    _inkAmount = _inkAmount -1;
}

float Sharpie::getWidth() {
    return _width;
}

float Sharpie::getinkAmount() {
    return _inkAmount;
}


