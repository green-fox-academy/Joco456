#include <iostream>
#include <fstream>
#include <string>

int main() {
    // Open a file called "my-file.txt"
    // Write your name in it as a single line

    std::ofstream myFile("../my-file.txt");
    myFile.exceptions(std::ofstream::failbit | std::ofstream::badbit);

    try {
        std::string text = "Hello, my name is Joco";
        myFile << text;
        myFile.close();
    }catch (std::ofstream::failure& e) {
        std::cout << e.what() << std::endl;
    }


    return 0;
}