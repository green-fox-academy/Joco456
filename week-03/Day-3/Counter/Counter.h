//
// Created by Admin on 17/04/2019.
//

#ifndef COUNTER_COUNTER_H
#define COUNTER_COUNTER_H

#include <iostream>
#include <string>


class Counter {
public:
    Counter();
    Counter(int number);
    void setNumber(int number);
    void setOriginalNumber( int originalNumber);

    int getNumber();
    int getoriginalNumber();

    void add(int newNumber);
    void add();
    int get();
    void reset();



private:
    int _number;
    int _originalNumber;


};


#endif //COUNTER_COUNTER_H
