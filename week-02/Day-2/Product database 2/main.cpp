#include <iostream>
#include <map>
#include <string>

int main() {

    //Create a map with the following key-value pairs.
    std::map<std::string, int> productDatabase;
    productDatabase["Eggs"] = 200;
    productDatabase["Milk"] = 200;
    productDatabase["Fish"] = 400;
    productDatabase["Apples"] = 150;
    productDatabase["Bread"] = 50;
    productDatabase["Chicken"] = 550;

    //Which products cost less than 201? (just the name)
    std::map<std::string, int>::iterator productIt = productDatabase.begin();
    std::cout << "Products under 201: " << std::endl;
    for (productIt; productIt != productDatabase.end(); productIt++) {
        if (productIt->second < 201) {
            std::cout << productIt->first << std::endl;
        }
    }

    //Which products cost more than 150? (name + price)
    std::cout << "products over 150: " << std::endl;
    for (productIt = productDatabase.begin(); productIt != productDatabase.end(); productIt++) {
        if (productIt->second > 150)
            std::cout << productIt->first << " costs " << productIt->second << std::endl;

    }


    return 0;
}