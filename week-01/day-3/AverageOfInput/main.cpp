#include <iostream>

int main(int argc, char* args[]) {

    // Write a program that asks for 5 integers in a row,
    // then it should print the sum and the average of these numbers like:
    //
    // Sum: 22, Average: 4.4

    int a,
        b,
        c,
        d,
        e;

    std::cout << "Please enter 5 numbers" << std:: endl;
    std::cin >> a;
    std::cin >> b;
    std::cin >> c;
    std::cin >> d;
    std::cin >> e;

    int sum = a + b + c + d + e;
    float average = (a + b + c + d + e) / 5;

    std::cout << "Sum: " << sum << ", Average: " <<  average << std:: endl;

    return 0;
}