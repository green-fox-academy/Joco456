//
// Created by Admin on 17/04/2019.
//

#ifndef ANIMAL_ANIMAL_H
#define ANIMAL_ANIMAL_H

#include <iostream>

class Animal {
public:


public:
    Animal();

    Animal(std::string name, int hunger, int thirst);

    void setHunger(int hunger);

    void setThirst(int thirst);

    void setName(std::string);

    std::string getName();

    int getHunger() const;

    int getThirst() const;

    void eat();

    void drink();

    void play();

private:

    std::string _name;
    int _hunger;
    int _thirst;


};


#endif //ANIMAL_ANIMAL_H
