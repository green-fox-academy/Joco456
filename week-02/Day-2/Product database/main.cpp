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

    //How much is the fish?
    std::cout << "The price of the fish is: " << productDatabase["Fish"] << std::endl;

    //What is the most expensive product?
    std::map<std::string, int>::iterator mapIterator = productDatabase.begin();
    int maximum = 0;
    std::string stringMax = "";

    for (mapIterator; mapIterator != productDatabase.end(); mapIterator++) {
        if (mapIterator->second > maximum){
            maximum = mapIterator->second;
            stringMax = mapIterator->first;
        }
    }
    std::cout << "The most expensive product is: " << stringMax << " and it's value is: " << maximum << std::endl;

    //What is the average price?
    float sum = 0;
    for (mapIterator = productDatabase.begin(); mapIterator != productDatabase.end(); mapIterator++) {
        sum = sum + mapIterator->second;
    }
    float average = sum/productDatabase.size();
    std::cout << "The average price is: " << average << std::endl;

    //How many products' price is below 300?
    int below =0;
    for (mapIterator = productDatabase.begin(); mapIterator != productDatabase.end(); mapIterator++) {
        if (mapIterator->second < 300){
            below++;
        }
    }
    std::cout << "The number of products which are below 300: " << below << std::endl;

    //Is there anything we can buy for exactly 125?
    int cheapProduct =0;
    for (mapIterator = productDatabase.begin(); mapIterator != productDatabase.end(); mapIterator++) {
        if (mapIterator->second == 125 ){
            cheapProduct++;}
    }
    if (cheapProduct > 0){
        std::cout << "There is product for 125" << std::endl;}
    else {
        std::cout << "There is no product for 125" << std::endl;
    }

    //What is the cheapest product?

    int cheapest = productDatabase["Eggs"];
    std::string cheapestProduct = "";

    for (mapIterator = productDatabase.begin(); mapIterator != productDatabase.end(); mapIterator++) {
        if (mapIterator->second < cheapest){
            cheapest = mapIterator->second;
            cheapestProduct = mapIterator->first;
        }
    }
    std::cout << "The cheapest product is : " << cheapestProduct << " and its price is: " << cheapest << std::endl;



    return 0;
}