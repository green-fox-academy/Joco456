#include <iostream>

int main(int argc, char const *argv[])
{
    // Write a program that prints a few details to the terminal window about you
    // It should print each detail to a new line.
    //  - Your name
    //  - Your age
    //  - Your height in meters (as a decimal fraction)
    //
    //  Example output:
    //  John Doe
    //  31
    //  1.87


    std::cout << "Varga Jozsef" << std::endl;
    int age = 29;
    std::cout << age << std::endl;
    float height = 1.84;
    std::cout << height << std::endl;

    return 0;
}
