//
// Created by Admin on 24/04/2019.
//

#ifndef ANIMALS_IN_THE_ZOO_ANIMAL_H
#define ANIMALS_IN_THE_ZOO_ANIMAL_H

#include <iostream>

class Animal {

    virtual std::string getName() = 0;
    virtual std::string breed() = 0;
    virtual void activity() = 0;

protected:
    std::string _name;
    int _age;
    std::string _gender;
    std::string _isFrom;




};


#endif //ANIMALS_IN_THE_ZOO_ANIMAL_H
