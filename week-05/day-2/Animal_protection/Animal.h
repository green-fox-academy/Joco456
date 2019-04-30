//
// Created by Admin on 30/04/2019.
//

#ifndef ANIMAL_PROTECTION_ANIMAL_H
#define ANIMAL_PROTECTION_ANIMAL_H

#include <iostream>

class Animal
{

public:
    Animal();
    Animal(std::string name);
    virtual std::string getOwnerName();
    virtual std::string getName();
    virtual void setHealCost() = 0;
    virtual int getHealCost();
    virtual void heal();
    virtual bool isAdoptable();
    virtual std::string toString();

protected:
    std::string _ownerName;
    bool _isHealthy = false;
    int _healCost;
    std::string _name;
};


#endif //ANIMAL_PROTECTION_ANIMAL_H
