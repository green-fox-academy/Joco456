#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int isItInTheString(char *string, char a);

int main() {
    // Create a program which asks for a string and a character and stores them
    // Create a function which takes a string and a character as a parameter and
    // if the given character is in the string, it should return the index of the
    // first appearance (in the given string) otherwise the function should return -1
    //
    // Example:
    //
    // Case 1:
    //
    // given_string = "embedded"
    // given_char = 'd'
    //
    // the function should return: 4, because this is the index of the first appearance of char 'd'
    //
    //
    // Case 2:
    //
    // given_string = "embedded"
    // given_char = 'a'
    //
    // the function should return: -1, because there is no 'a' in the word "embedded"
    //

    char string[20];
    char a;

    printf("Please enter a string and a character\n");
    scanf("%s %c", string, &a);

    if (isItInTheString(string, a) >= 0)
        printf("The index is %d\n", isItInTheString(string, a));
    else
        printf("The character is not in the string\n");
    
    return 0;
}

int isItInTheString(char *string, char a) {
    int index = -1;
    for (int i = 0; i < strlen(string); ++i) {
        if (string[i] == a) {
            index = i;
        }
    }

    if (index > -1)
        return index;
    else
        return -1;
}