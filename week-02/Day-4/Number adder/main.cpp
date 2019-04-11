#include <iostream>

//Write a recursive function that takes one parameter: n and adds numbers from 1 to n.
int adder(int a);

int main() {
    int number = 7;

    std::cout << "the sum of the numbers until" << number << "is: " << adder(number) << std::endl;

    return 0;
}

int adder(int a) {
    if (a != 0)
        return a + adder(a-1);
    return 0;
}