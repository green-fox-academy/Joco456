#include <iostream>

int main ()
{
    // Create a pointer for each variable and print out the memory addresses of that variables
    // Print out the values of the pointers

    int a = 31;
    double b = 432.2;
    std::string name = "Bob";

    int *aPointer = &a;
    double *bPointer = &b;
    std::string *namePointer = &name;

    std::cout << "memory addres of a: " << aPointer << " value of a: " << *aPointer << std::endl;
    std::cout << "memory addres of b: " << bPointer << " value of b: " << *bPointer << std::endl;
    std::cout << "memory addres of name: " << namePointer << " value of name: " << *namePointer << std::endl;

    return 0;
}