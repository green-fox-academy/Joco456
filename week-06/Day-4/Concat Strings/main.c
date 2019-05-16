#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// write a function which takes 2 strings as parameter, concatenates them together and returns it back.
// Test it for long and empty strings as well.
// Try to use the least amount of memory that's possible.

char *stringConcatenater(char string1[], char string2[]);

int main() {

    char string1[] = "ez egy nagyon hosszu string, sosincs vege";
    char string2[] = "Joco";

    char *string = stringConcatenater(string1, string2);

    printf("%s", string);

    free(string);
    string = NULL;

    return 0;
}

char *stringConcatenater(char string1[], char string2[]) {

    int size = strlen(string1) + strlen(string2) + 1;

    char *dualString = (char *) calloc(size, sizeof(char));

    strcpy(dualString, string1);
    strcat(dualString, string2);

    return dualString;

}





