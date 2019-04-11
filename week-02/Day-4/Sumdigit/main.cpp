#include <iostream>

//Given a non-negative int n, return the sum of its digits recursively (no loops).
int sumOfDigits(int a);

int main() {
    int number = 1989;
    std::cout << "the sum of the numbers of " << number << " is: " << sumOfDigits(number) << std:: endl;

    return 0;
}

int sumOfDigits(int a) {
    if (a == 0)
        return 0;
    return (a % 10 + sumOfDigits(a / 10));
}