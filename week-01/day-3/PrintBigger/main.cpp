
#include <iostream>

int main(int argc, char* args[]) {

    // Write a program that asks for two numbers and prints the bigger one

    int a,
        b;

    std::cout << "Please enter two numbers" << std:: endl;
    std::cin >> a;
    std::cin >> b;

    if (a > b){
        std::cout << "The bigger one is: " << a << std::endl;}
        else {
            std::cout << "The bigger one is: " << b <<std::endl;}



    return 0;
}