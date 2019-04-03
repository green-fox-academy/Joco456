#include <iostream>

int main(int argc, char* args[]) {

    // Write a program that asks for an integer that is a distance in kilometers,
    // then it converts that value to miles and prints it

    int miles;
    std::cout << "Please enter your distance in km: " << std::endl;
    std::cin >> miles;
    std::cout << "Your distance in miles is: " << (double)miles * 0.621371192 << std::endl;

    return 0;
}