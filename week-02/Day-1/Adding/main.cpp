#include <iostream>

int main()
{
    // Add two numbers using pointers

    int a = 20;
    int b = 17;

    int *aPointer = &a;
    int *bPointer = &b;

    int add = *aPointer + *bPointer;

    std::cout << "a: " << a << " b: " << b << " a + b by pointer: " << add << std::endl;

    return 0;
}