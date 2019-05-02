#include <iostream>
#include <fstream>
#include <string>
#include <exception>
#include <sstream>
#include <vector>
#include <map>

std::map<std::string, int> nameWithAge(std::string fileName);


int main() {

    std::string fileName = "../text.txt";
    nameWithAge(fileName);

    return 0;
}

std::map<std::string, int> nameWithAge(std::string fileName) {

    std::ifstream file(fileName);
    file.exceptions(std::ifstream::badbit);
    std::map<std::string, int> map;
    try {
        std::string lines;
        if (file.is_open()) {
            while (std::getline(file, lines)) {
                std::stringstream lineStream(lines);
                std::string dummy, name;
                std::getline(lineStream, name, ',');
                std::getline(lineStream, dummy, ',');
                std::getline(lineStream, dummy, ',');
                std::getline(lineStream, dummy, ',');

                map[name] = std::stoi(dummy);
            }
            int sum = 0;
            std::map<std::string, int>::iterator mapIt = map.begin();
            for (; mapIt != map.end(); mapIt++) {
                sum = sum + mapIt->second;
                std::cout << mapIt->first << " " << mapIt->second << std::endl;
            }
            double avg = (double) sum / map.size();
            std::cout << sum / map.size() << std::endl;
            std::cout << (double) sum / map.size() << std::endl;
        } else {
            throw std::ifstream::failure("File does not exist!");
        }
    } catch (std::ifstream::failure &e) {
        std::cout << e.what() << std::endl;
    }
    return map;

}