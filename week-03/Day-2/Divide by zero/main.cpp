#include <iostream>
#include <fstream>
#include <exception>
#include <string>
void divider (int a);
int main() {
    // Create a function that takes a number
    // divides ten with it,
    // and prints the result.
    // It should print "fail" if the parameter is 0

    int number = 2;
    divider(number);


    return 0;
}

void divider (int a){


    try {
        if (a == 0){
            throw std::string ("Fail");
        }
             double div = 10/a;
            std::cout << div << std::endl;
        } catch (std::string& e){
        std::cout << e << std::endl;
    }
}