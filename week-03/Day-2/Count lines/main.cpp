#include <iostream>
#include <fstream>
#include <string>
#include <exception>
#include <sstream>

int lineNumber(std::string name);

int main() {
    // Write a function that takes a filename as string,
    // then returns the number of lines the file contains.
    // It should return zero if it can't open the file

    std::string filename = "my-file.txt";
    std::cout << lineNumber(filename) << std::endl;


    return 0;
}

int lineNumber(std::string name) {
    int counter = 0;
    std::ifstream file(name);
    //file.exceptions(std::ifstream::failbit | std::ifstream::badbit);
    try {
        //file.open(name);
        std::string lines;
        if (file.is_open()) {
            while (std::getline(file, lines)) {
                counter++;
            }
            //file.close();
            return counter;
        }
    } catch (std::ifstream::failure &e) {
        std::cout << e.what() << std::endl;
    }
    return 0;
}