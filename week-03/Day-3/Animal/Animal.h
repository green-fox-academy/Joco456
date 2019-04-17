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

    Animal(int hunger, int thirst);

    void setHunger(int hunger);

    void setThirst(int thirst);

    int getHunger() const;

    int getThirst() const;

    void eat();

    void drink();

    void play();

private:
    int hunger;
    int thirst;


};


#endif //ANIMAL_ANIMAL_H
