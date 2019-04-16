#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <sstream>
double GetPostRatio (std::string fileName);
void IP (std::string fileName);
  // Read all data from 'log.txt'.
  // Each line represents a log message from a web server
  // Write a function that returns a vector with the unique IP adresses.
  // Write a function that returns the GET / POST request ratio.

int main() {
    IP("../log.txt");
    std::cout << "get/post: " << GetPostRatio("../log.txt") << std::endl;

    return 0;
}
void IP (std::string fileName){
    std::ifstream file(fileName);
    std::string line;
    std::vector<std::string> ipAddr;
    try {

        while (std::getline(file, line)){
            std::stringstream linestream(line);
            std::string dummy;
            std::getline(linestream, dummy, ' ');
            std::getline(linestream, dummy, ' ');
            std::getline(linestream, dummy, ' ');
            std::getline(linestream, dummy, ' ');
            std::getline(linestream, dummy, ' ');
            std::getline(linestream, dummy, ' ');
            std::getline(linestream, dummy, ' ');
            std::getline(linestream, dummy, ' ');
            std::getline(linestream, dummy, ' ');

//ugyanez szupermódszerrel (de csak whitespacere használható!!!)
// linestream >> dummy >> dummy >> dummy >> dummy >> dummy >> dummy;

            ipAddr.push_back(dummy);
        }
        for (int i = 0; i < ipAddr.size() ; ++i) {
            std::cout << ipAddr[i] <<std::endl;
            
        }


    }catch (...){

    }
}
double GetPostRatio (std::string fileName){
    std::ifstream file(fileName);
    double GET =0;
    double POST = 0;
    std::string post = "POST";
    std::string get = "GET";
    std::string line;

    try {
        while (std::getline(file, line)) {
            if (line.find(get) != std::string::npos) {
                GET++;
            } else {
                POST++;
            }
        }
        return GET/POST;



    }catch (...){

    }


}


