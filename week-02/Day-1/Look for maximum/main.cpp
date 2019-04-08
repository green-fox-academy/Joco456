
#include <iostream>

int main() {
    // Create a program which first asks for a number
    // this number indicates how many integers we want to store in an array
    // and than asks for numbers till the user fills the array
    // It should print out the biggest number in the given array and the memory address of it

    int number;
    std::cout << "Please enter a number" << std::endl;
    std::cin >> number;
    int array[number];
    int index = 0;


    for (int i = 0; i < number; ++i) {
        std::cout << "Please enter the" << i << ". number" << std::endl;
        std::cin >> array[i];
    }

    int maximum = array[0];
    for (int j = 0; j < number; ++j) {
        if (array[j] > maximum) {
            maximum = array[j];
            index = j;
        }
    }
    std::cout << "The biggest number is: " << maximum << " and the memory addres of it is: " << &array[index]
              << std::endl;


    return 0;
}