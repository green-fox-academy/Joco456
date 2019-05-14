#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int lengthCalculator(char *name);
int lengthCalculatorWithoutStringH(char *name);
int main()
{
    // Create a program which asks for the name of the user and stroes it
    // Create a function which takes a string as a parameter and returns the lenght of it
    // Solve this exercie with and without using string.h functions

    char userName[30];
    printf("Please enter your name\n");
    scanf("%s", userName);

    printf("The length of your name is: %d \n", lengthCalculator(userName));

    printf("The length of your name is: %d \n", lengthCalculatorWithoutStringH(userName));


    return 0;
}
int lengthCalculator(char *name)
{
    int length = strlen(name);
    return length;
}
int lengthCalculatorWithoutStringH(char *name)
{
    int counter = 0;
    while (*(name++) != '\0'){
        counter++;
    }
    return counter;

}