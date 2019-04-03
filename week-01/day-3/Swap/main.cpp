#include <iostream>

int main(int argc, char* args[]) {

    // Swap the values of the variables
    int a = 123;
    int b = 526;

    std::cout << "a value before swap: " << a << std::endl;
    std::cout << "b value before swap: " << b << std::endl;

    std::swap(a,b);
    std::cout << "a value after swap: " << a << std::endl;
    std::cout << "b value after swap: " << b << std::endl;
    return 0;
}