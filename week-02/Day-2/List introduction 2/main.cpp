#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

int main() {
    //Create a list ('List A') which contains the following values
    std::vector<std::string> A = {"Apple", "Avocado", "Blueberries", "Durian", "Lychee"};

    //Create a new list ('List B') with the values of List A
    std::vector<std::string> B = A;
    //Print out whether List A contains Durian or not
    if (std::find(A.begin(), A.end(), "Durian") != A.end()) {
        std::cout << "The list contains." << std::endl;
    } else {
        std::cout << "The list does not contains" << std::endl;
    }
    //Remove Durian from List B
    B.erase(B.begin() + 3);
    //Add Kiwifruit to List A after the 4th element
    A.insert(A.begin() + 3, "Kiwifruit");
    //Compare the size of List A and List B
    std::cout << A.size() << ", " << B.size()<< std::endl;
    if (A.size() == B.size()) {
        std::cout << "The lists are equal." << std::endl;
    } else if (A.size() > B.size()) {
        std::cout << "The A list is bigger." << std::endl;}
        else if (A.size() < B.size()) {
            std::cout << "The B list is bigger." << std::endl;
    }
    //Get the index of Avocado from List A
    int index = 0;
    for (int i = 0; i != A.size(); ++i) {
        if (A.at(i) == "Avocado") {
            index = i;
        }
    }
    std::cout << "The index is: " << index << std::endl;

    //Get the index of Durian from List B
    int durianIndex = -1;
    for (int j = 0; j < B.size(); ++j) {
        if (B.at(j) == "Durian") {
            durianIndex = j;
        }
    }
    if (durianIndex == -1){
        std::cout << "Durian is not element of vector" << std::endl;}
        else{
            std::cout << "The index of Durian is: " << std::endl;
        }


    //Add Passion Fruit and Pummelo to List B in a single statement
    B.insert(B.begin()+1, {"Passion Fruit", "Pumelo"});
    //Print out the 3rd element from List A
    std::cout << A[2] << std::endl;



    return 0;
}