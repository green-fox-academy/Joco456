#include <stdio.h>

int main() {
    // Write a program that stores a number, and the user has to figure it out.
// The user can input guesses, after each guess the program would tell one
// of the following:
//
// The stored number is higher
// The stried number is lower
// You found the number: 8

    int myNumber = 18;
    int userNumber;

    while (userNumber != myNumber) {
        printf("Please guess the number \n");
        scanf("%d", &userNumber);
        if (userNumber > myNumber)
            printf("The stored number is lower \n");
        else if (userNumber < myNumber)
            printf("The stored number is higher \n");
        else if (userNumber == myNumber)
            printf("You found the number: %d \n", myNumber);
    }
    return 0;
}