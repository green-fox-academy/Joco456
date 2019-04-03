#include <iostream>

int main(int argc, char* args[]) {

    // Write a program that reads a number from the standard input,
    // Then prints "Odd" if the number is odd, or "Even" if it is even.

    int number;
    std::cout << "Please enter a number" << std::endl;
    std::cin >> number;
    std::cout << (number%2==0 ? "Your number is even" : "Your number is odd") << std::endl;

    return 0;
}