#include <iostream>
#include <string>
#include <map>

int main() {
    //Create a map with the following key-value pairs.
    std::map<std::string, std::string> telephoneBook;

    telephoneBook["William A. Lathan"] = "405-709-1865";
    telephoneBook["John K. Miller"] = "402-247-8568";
    telephoneBook["Hortensia E. Foster"] = "606-481-6467";
    telephoneBook["Amanda D. Newland"] = "319-243-5613";
    telephoneBook["Brooke P. Askew"] = "307-687-2982";

    //What is John K. Miller's phone number?
    std::cout << "John K. Miller's phone number is: " << telephoneBook["John K. Miller"] << std::endl;

    //Whose phone number is 307-687-2982?
    std::map<std::string, std::string>::iterator telephoneBookIterator;
    for (telephoneBookIterator = telephoneBook.begin();
         telephoneBookIterator != telephoneBook.end(); telephoneBookIterator++) {
        if (telephoneBookIterator->second == "307-687-2982") {
            std::cout << "The owner of 307-687-2982 is: " << telephoneBookIterator->first << std::endl;
        }
    }

    //Do we know Chris E. Myers' phone number?
    std::string searchedName = "Chris E. Myers";
    if (telephoneBook.count(searchedName) != 0) {
        std::cout << "We know Chris E. Myers' phone number" << std::endl;
    } else {
        std::cout << "We dont know Chris E. Myers' phone number" << std::endl;
    }
        
    return 0;
}