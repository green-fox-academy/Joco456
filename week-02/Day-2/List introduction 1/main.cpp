#include <iostream>
#include <vector>
#include <string>

int main() {

    std::vector<std::string> names;
    //print out the elements
    std::cout << "number of elements: " << names.size() << std::endl;
    //add William to the list
    names.push_back("William");
    // print out if the list is empty or not
    if (names.size() == 0) {
        std::cout << "The list is empty" << std::endl;
    } else {
        std::cout << "The list in not empty" << std::endl;
    }
    // Add John to the list
    names.push_back("Jonh");
    //Add Amanda to the list
    names.push_back("Amanda");
    //Print out the number of elements in the list
    std::cout << "The number of elements: " << names.size() << std::endl;
    //Print out the 3rd element
    std::cout << "The third element: " << names[2] << std::endl;
    // Iterate through the list and print out each name
    std::vector<std::string>::iterator namesIterator = names.begin();
    for (; namesIterator != names.end(); ++namesIterator) {
        std::cout << *namesIterator << std::endl;
    }
    //Iterate through the list and print without iterator
    for (int i = 0; i < names.size(); ++i) {
        std::cout << i + 1 << ". " << names[i] << std::endl;
    }

    //Iterate through the list and print with iterator
    int j = 0;
    for (namesIterator = names.begin(); namesIterator != names.end(); ++namesIterator) {
        std::cout << ++j << ". " << *namesIterator << std::endl;
    }
    //Remove the 2nd element
    names.erase(names.begin()+1);
    //Iterate through the list in a reversed order and print out each name
    std::vector<std::string>::reverse_iterator namesReverseIterator = names.rbegin();
    for (namesReverseIterator = names.rbegin(); namesReverseIterator != names.rend(); ++namesReverseIterator) {
        std::cout << *namesReverseIterator << std::endl;
    }
    names.clear();



    return 0;
}
