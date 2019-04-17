//
// Created by Admin on 17/04/2019.
//

#include "Counter.h"

Counter::Counter() {
    setNumber(0);
    setOriginalNumber(0);


}

Counter::Counter(int number) {
    setNumber(number);
    setOriginalNumber(number);

}

void Counter::setNumber(int number) {
    _number = number;
}

void Counter::setOriginalNumber(int originalNumber){
    _originalNumber = originalNumber;
}

int Counter::getNumber() {
    return _number ;
}

int Counter::getoriginalNumber() {
    return _originalNumber;
}

void Counter::add(int newNumber) {
    _number = _originalNumber + newNumber;

}

void Counter::add() {
    _number = _number +1;

}

int Counter::get() {
    return  _number;

}

void Counter::reset() {
    _number = _originalNumber;

}
