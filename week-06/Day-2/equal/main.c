#include <stdio.h>
#include <stdlib.h>

int isEqual(int a, int b);
int main()
{
    // Create a program which asks for two integers and stores them separatly
    // Create a function which takes two numbers as parameters and
    // returns 1 if they are equal and returns 0 otherwise

    int numnber1;
    int number2;

    printf("Please enter 2 numbers \n");
    scanf("%d %d", &numnber1, &number2);

    if (isEqual(numnber1, number2))
        printf("The numbers are equal\n");
    else
        printf("The numbers are not equal\n");

    return 0;
}
int isEqual(int a, int b)
{
    return (a == b);
}