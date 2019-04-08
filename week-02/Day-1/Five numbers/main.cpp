#include <iostream>

int main() {
    // Create a program which accepts five integers from the console (given by the user)
    // and store them in an array
    // print out the values of that array using pointers again

    int array[5];
    int *arrayPointer = array;

    for (int i = 0; i < 5; ++i) {
        std::cout << "Enter the " << i + 1 << ". number: " << std::endl;
        std::cin >> array[i];
    }

    std::cout << "The values: " << std::endl;
    for (int j = 0; j < 5; ++j) {
        std::cout << *(arrayPointer + j) << std::endl;
    }

    return 0;
}