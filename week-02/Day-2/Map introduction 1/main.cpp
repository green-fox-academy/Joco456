#include <iostream>
#include <map>
#include <vector>

int main() {
    //Create an empty map where the keys are integers and the values are characters
    std::map<int, char> myMap;
    //Print out whether the map is empty or not
    if (myMap.size() == 0) {
        std::cout << "The map is empty" << std::endl;
    } else {
        std::cout << "The map is not empty" << std::endl;
    }
    //Add the following key-value pairs to the map
    myMap[97] = 'a';
    myMap[98] = 'b';
    myMap[99] = 'c';
    myMap[65] = 'A';
    myMap[66] = 'B';
    myMap[67] = 'C';

    //Print all the keys
    std::map<int, char>::iterator mapInterator;
    for (mapInterator = myMap.begin(); mapInterator != myMap.end(); mapInterator++) {
        std::cout << mapInterator->first << std::endl;
    }
    // Print all the values
    for (mapInterator = myMap.begin(); mapInterator != myMap.end(); mapInterator++) {
        std::cout << mapInterator->second << std::endl;
    }
    //Add value D with the key 68
    myMap[68] = 'D';

    //Print how many key-value pairs are in the map
    std::cout << "key-value pairs are in the map: " << myMap.size() << std::endl;
    // Print the value that is associated with key 99
    std::cout << "The value for the key 99: " << myMap[99] << std::endl;
    //Remove the key-value pair where with key 97
    myMap.erase(97);
    //Print whether there is an associated value with key 100 or not
    if (myMap[100] == 0) {
        std::cout << "There is no value with key 100" << std::endl;
    } else {
        std::cout << "There is value with key 100" << std::endl;
    }
    //Remove all the key-value pairs
    myMap.clear();






    return 0;
}