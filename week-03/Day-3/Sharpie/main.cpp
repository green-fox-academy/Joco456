#include <iostream>
#include "Sharpie.h"

int main() {
    Sharpie ob1("blue", 23.5);
    ob1.use();
    ob1.use();

    std::cout << ob1.getinkAmount() << std::endl;

    return 0;
}