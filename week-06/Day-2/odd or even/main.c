
#include <stdio.h>
#include <stdlib.h>

int isEven(int a);
int main()
{
    // Create a program which asks for a number and stores it
    // Create a function which takes a number as a parameter and
    // returns 1 if that number is even and returns 0 otherwise
    // (in this case 0 is an even number)

    int userNumber;
    printf("Please enter a number\n");
    scanf("%d", &userNumber);

    if (isEven(userNumber))
        printf("The number is even\n");
    else
        printf("The number is odd\n");

    return 0;
}
int isEven(int a)
{
    return (a % 2 == 0);
}