
#include <iostream>
#include <fstream>
#include <string>
bool copy ( std::string oldFilename, std::string newFilename);
// Write a function that reads all lines of a file and writes the read lines to an other file (a.k.a copies the file)
// It should take the filenames as parameters
// It should return a boolean that shows if the copy was successful




int main() {

    std::string oldFil = "../old-file.txt";
    std::string newFile = "../new-file.txt";
    copy(oldFil, newFile );

    if (copy(oldFil, newFile)) {
        std::cout << "done" << std::endl;
    } else {
            std::cout << "not done" << std::endl;
        }

    return 0;
}

bool copy ( std::string oldFilename, std::string newFilename){
    std::ifstream file1;
    file1.exceptions(std::ifstream::badbit);
    std::ofstream file2;
    file2.exceptions(std::ofstream::failbit | std::ofstream::badbit);

    try {
        file1.open(oldFilename);
        file2.open(newFilename);

        if (file1.is_open() && file2.is_open()) {
            std::string temporary;
            while (std::getline(file1, temporary)) {
                file2 << temporary << "\n";
            }
        } else {
            return false;
        }
        file1.close();
        file2.close();
        return true;
    } catch (std::ifstream::failure &e) {
        return false;
    }


}
