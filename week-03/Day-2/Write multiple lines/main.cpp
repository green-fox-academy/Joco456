
#include <iostream>
#include <fstream>
#include <string>

void writer(std::string path, std::string word, int lines);
// Create a function that takes 3 parameters: a path, a word and a number
// and is able to write into a file.
// The path parameter should be a string that describes the location of the file you wish to modify
// The word parameter should also be a string that will be written to the file as individual lines
// The number parameter should describe how many lines the file should have.
// If the word is "apple" and the number is 5, it should write 5 lines
// into the file and each line should read "apple"

int main() {

    std::string path = "../my-file.txt";
    std::string word = "apple";
    int lines = 4;
    writer(path, word, lines);

    return 0;
}

void writer(std::string path, std::string word, int lines) {
    std::ofstream myFile(path);
    try {
        if (myFile.is_open()) {
            for (int i = 0; i < lines; ++i) {
                myFile << word << "\n";
            }
        } else {
            std::cout << "the file can not be opened";
        }
    } catch (std::ofstream::failure &e) {
        std::cout << e.what() << std::endl;
    }
}