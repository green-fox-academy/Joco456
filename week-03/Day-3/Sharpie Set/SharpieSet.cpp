//
// Created by Admin on 18/04/2019.
//

#include "SharpieSet.h"

int SharpieSet::countUsable() {

    int counter = 0;
    for (int i = 0; i < _sharpieList.size(); ++i) {
        if (_sharpieList[i].getinkAmount() != 0) {
            counter++;
        }
    }
    return counter;
}

void SharpieSet::removeTrash() {

    std::vector<Sharpie>::iterator it;
    for (it = _sharpieList.begin(); it != _sharpieList.end(); it++) {
        if (it->getinkAmount() == 0) {
            _sharpieList.erase(it);
        }
    }
}

SharpieSet::SharpieSet(std::vector<Sharpie> sharpieList) {
    _sharpieList = sharpieList;
}

void SharpieSet::print() {

    for (int i = 0; i < _sharpieList.size(); ++i) {
        std::cout << _sharpieList[i].getColor() << std::endl;
    }

}
