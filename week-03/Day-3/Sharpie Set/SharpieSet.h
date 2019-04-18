//
// Created by Admin on 18/04/2019.
//

#ifndef SHARPIE_SET_SHARPIESET_H
#define SHARPIE_SET_SHARPIESET_H

#include <iostream>
#include <string>
#include "Sharpie.h"
#include <vector>

class SharpieSet {
public:
    SharpieSet(std::vector<Sharpie>);

    int countUsable();

    void removeTrash();

    void print();

private:
    std::vector<Sharpie> _sharpieList;

};


#endif //SHARPIE_SET_SHARPIESET_H
