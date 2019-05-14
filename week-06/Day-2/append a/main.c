#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *appender(char *string);

int main() {
    // Create a program which asks for a string and stores it
    // Create a function which takes a string as a parameter and
    // appends a character 'a' to the end of it and returns the new string

    char userString[30];
    printf("Please enter a string \n");
    scanf("%s", userString);
    printf("%s", appender(userString));

    return 0;
}

char *appender(char *string) {
    strcat(string, "a");

    return string;
}