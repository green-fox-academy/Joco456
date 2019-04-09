#include <iostream>
#include <map>
#include <vector>
#include <string>

int main() {
    //Create a map where the keys are strings and the values are strings with the following initial values
    std::map<std::string, std::string> myMap;
    myMap["978-1-60309-452-8"] = "A Letter to Jo";
    myMap["978-1-60309-459-7"] = "Lupus";
    myMap["978-1-60309-444-3"] = "Red Panda and Moon Bear";
    myMap["978-1-60309-461-0"] = "The Lab";

    //Print all the key-value pairs in the following format
    //
    //A Letter to Jo (ISBN: 978-1-60309-452-8)
    //Lupus (ISBN: 978-1-60309-459-7)
    //Red Panda and Moon Bear (ISBN: 978-1-60309-444-3)
    //The Lab (ISBN: 978-1-60309-461-0)

    std::map<std::string, std::string>::iterator mapIterator;
    for (mapIterator = myMap.begin(); mapIterator != myMap.end(); mapIterator++) {
        std::cout << mapIterator->second << " (ISBN: " << mapIterator->first << ")" << std::endl;
    }

    //Remove the key-value pair with key 978-1-60309-444-3
    myMap.erase("978-1-60309-444-3");
    //Remove the key-value pair with value The Lab
    for (mapIterator = myMap.begin(); mapIterator != myMap.end(); mapIterator++) {
        if (mapIterator->second == "The Lab") {
            myMap.erase(mapIterator->first);
        }

    }

    // just to check if it is working
    //for (mapIterator = myMap.begin(); mapIterator != myMap.end() ; mapIterator++) {
    //   std::cout << mapIterator->second << " (ISBN: " << mapIterator->first << ")" << std::endl;
    //}

    //Add the following key-value pairs to the map
    //
    //Key	Value
    //978-1-60309-450-4	They Called Us Enemy
    //978-1-60309-453-5	Why Did We Trust Him?
    myMap["978-1-60309-450-4"] = "They Called Us Enemy";
    myMap["978-1-60309-453-5"] = "Why Did We Trust Him?";

    //Print whether there is an associated value with key 478-0-61159-424-8 or not
    std::string Key = "478-0-61159-424-8";
    if (myMap.count(Key) != 0) {
        std::cout << "There is value with key " << Key << std::endl;
    } else {
        std::cout << "There is no value with key " << Key << std::endl;
    }




    //Print the value associated with key 978-1-60309-453-5
    std::cout << "The value for key 978-1-60309-453-5 is:  " << myMap["978-1-60309-453-5"] <<
              std::endl;

    return 0;
}
