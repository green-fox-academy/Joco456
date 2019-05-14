#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int numberOfCharacters(char *string, char a);

int main() {
    // Create a function which takes a string as a parameter and
    // returns the number of characters between two repeating characters
    // the repeating char can be a local variable in the function itself or
    // it can be passed to the function as parameter

    char *word = "Programming";

    // the output should be: 6 (in this case the repeating char was 'g')
    printf("%d", numberOfCharacters(word, 'g'));

    return 0;
}

int numberOfCharacters(char *string, char a) {

    int firstOccurence;
    int secondOccurence;

    for (int i = 0; i < strlen(string); ++i) {
        if (string[i] == 'g') {
            firstOccurence = i;
            break;
        }
    }
    for (int j = 0; j < strlen(string); ++j) {
        if (string[j] == 'g')
            secondOccurence = j;
    }
    return secondOccurence - firstOccurence - 1;
}