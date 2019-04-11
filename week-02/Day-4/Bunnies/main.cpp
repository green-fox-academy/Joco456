#include <iostream>
//We have a number of bunnies and each bunny has two big floppy ears.
//We want to compute the total number of ears across
//all the bunnies recursively (without loops or multiplication).

int ears (int a);

int main() {
    int bunnies = 15;

    std::cout << "The total number of ears of bunnies: " << ears(bunnies) << std::endl;
    return 0;
}

int ears (int a){
    if (a == 1)
        return 2;
    return 2 + ears( a-1);

}