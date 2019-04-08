#include <iostream>

void *swap (int *a, int *b);



int main ()

{
    // Create a function which swaps the values of 'a' and 'b'
    // This time use a void funtion and pointers

    int a = 10;
    int b = 316;
    int *aPointer = &a;
    int *bPointer = &b;

    std:: cout << "a value befor swap: " << a << ", b value before swap: " << b << std:: endl;

    swap(&a, &b);
    std:: cout << "a value after swap: " << a << ", b value after swap: " << b << std:: endl;




    return 0;
}
void *swap(int *a, int *b) {

    int c = *a;
    *a = *b;
    *b = c;
}