
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
int areTheSame(char *string1, char *string2);
int main()
{
    // Create a program which asks for two strings and stores them
    // Create a function which takes two strings as parameters and
    // returns 1 if the two strings are the same and 0 otherwise
    // Try to erase small and uppercase sensitivity.

    char string1[20];
    char string2[20];

    printf("Please enter 2 strings\n");
    scanf("%s %s", string1, string2);

    if (areTheSame(string1, string2))
        printf("the strings are equal\n");
    else
        printf("the strings are not equal\n");

    return 0;
}
int areTheSame(char *string1, char *string2)
{
    if (strlen(string1) != strlen(string2))
        return 0;

    for (int i = 0; i < strlen(string1) ; ++i) {
        if (tolower(string1[i]) != tolower(string2[i]))
            return 0;
    }
    return 1;

}