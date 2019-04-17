//
// Created by Admin on 17/04/2019.
//

#ifndef SHARPIE_SHARPIE_H
#define SHARPIE_SHARPIE_H

#include <iostream>
#include <string>

class Sharpie {
public:
    Sharpie(std::string color, float width);

    void setColor(std::string color);
    void setWidth(float width);
    void setinkAmount(float inkAmount);

    std::string getColor();
    float getWidth();
    float getinkAmount();

    void use();





private:
    std::string _color;
    float _width;
    float _inkAmount;



};


#endif //SHARPIE_SHARPIE_H
