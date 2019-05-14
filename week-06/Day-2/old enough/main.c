
#include <stdio.h>
#include <stdlib.h>

int oldEnough(int age);

int main() {
    // Create a program which asks for the age of the user and stores it
    // Create a function which takes that age as a parameter and returns if the user is
    // old enough to buy himself alcohol in Hungary

    int age;
    printf("Please enter your age\n");
    scanf("%d", &age);

    if (oldEnough(age))
        printf("You are old enough to drink alcohol \n");
    else
        printf("You are not old enough to drink alcohol \n");

    return 0;
}

int oldEnough(int age) {
    return (age >= 18);
}