#include<stdio.h>

int main() {
    // Create a program that prints a few operations on two numbers: 22 and 13

    // Print the result of 13 added to 22

    // Print the result of 13 substracted from 22

    // Print the result of 22 multiplied by 13

    // Print the result of 22 divided by 13 (as a decimal fraction)

    // Print the reminder of 22 divided by 13

    // Store the results in variables and use them when you display the result

    int a = 22;
    int b = 13;
    int sum = a + b;
    int sub = a - b;
    int multiply = a * b;
    float div = (float) a / (float) b;
    int reminder = a % b;

    printf("a + b = %d \n", sum);
    printf("a - b = %d \n", sub);
    printf("a * b = %d \n", multiply);
    printf("a / b = %f \n", div);
    printf("reminder of a divided by b = %d \n", reminder);

    return 0;
}