#include <iostream>
#include "SharpieSet.h"
#include <vector>

std::vector<Sharpie> sharpieVectorInit() {
    std::vector<Sharpie> sharpies;

    sharpies.push_back(Sharpie("blue", 15, 20));
    sharpies.push_back(Sharpie("green", 10, 0));
    sharpies.push_back(Sharpie("red", 25, 10));
    sharpies.push_back(Sharpie("black", 20, 15));

    return sharpies;

}

int main() {
    SharpieSet ob1(sharpieVectorInit());

    std::cout << ob1.countUsable() << std::endl;
    ob1.removeTrash();
    ob1.print();

    return 0;
}