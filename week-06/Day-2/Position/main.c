#include <stdio.h>
#include <string.h>

// create a function which takes a char array as a parameter and
// lists all position where character 'i' is found

void lister(char *array);
int main ()
{
    char string[55] = "This is a string for testing";
    
    lister(string);

    return 0;
}
void lister(char *array){

    for (int i = 0; i < strlen(array) ; ++i) {
        if (array[i] == 'i')
            printf("%d\n", i);
    }
}