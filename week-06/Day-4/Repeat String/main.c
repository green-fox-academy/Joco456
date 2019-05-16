#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// write a function which takes a string and an integer as a parameter.
// The function should return a string where the input string is repeating. The number of repetition is based on the value of the integer parameter.
// For example: Apple, 5 -> AppleAppleAppleAppleApple
// Try to use the least amount of memory that's possible.
char *repeater(char string[], int repeat);

int main() {
    char string[] = "Apple";
    int number = 5;

    char *newString = repeater(string, number);
    printf("%s", newString);

    free(newString);
    newString = NULL;

    return 0;
}

char *repeater(char string[], int repeat) {

    int size = strlen(string) * repeat + 1;

    char *repeatedString = (char *) calloc(size, sizeof(char));

    strcpy(repeatedString, string);

    for (int i = 0; i < repeat - 1; ++i) {
        strcat(repeatedString, string);
    }
    return repeatedString;
}