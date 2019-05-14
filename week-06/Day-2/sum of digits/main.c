
#include <stdio.h>
#include <stdlib.h>

int isSumOfDigitsEqual(int a, int b);
int main()
{
    // Create a program which asks for two numbers and stores them
    // Create a function which takes two numbers as parameters
    // and returns 1 if the sum of the number of digits are equal and 0 otherwise
    //
    // For example:
    //
    // Case 1:
    //
    // a = 123
    // b = 321
    //
    // sum of number of digits (variable a) = 1 + 2 + 3 = 6
    // sum of number of digits (variable b) = 3 + 2 + 1 = 6
    // in this case the function should return 1
    //
    //
    // Case 2:
    //
    // a = 723
    // b = 114
    //
    // sum of number of digits (variable a) = 7 + 2 + 3 = 12
    // sum of number of digits (variable b) = 1 + 1 + 4 = 6
    // in this case the function should return 0

    int number1;
    int number2;
    printf("Please enter 2 numbers\n");
    scanf("%d %d", &number1, &number2);

    if (isSumOfDigitsEqual(number1, number2))
        printf("The sum of the digits are equal\n");
    else
        printf("The sum of the digits are not equal\n");

    return 0;
}
int isSumOfDigitsEqual(int a, int b)
{
    int sumA = 0;
    int sumB = 0;

    while (a != 0) {
        sumA = sumA + a % 10;
        a = a / 10;
    }

    while (b != 0) {
        sumB = sumB + b % 10;
        b = b / 10;
    }
    return (sumA == sumB);

}