
#include <stdio.h>
#include <string.h>

// create a function which takes a char array as a parameter and
// returns the distance between the first and last occurance of character 's'
int distance(char *array);

int main() {
    char str[] = "This is a sample string";
    char *first, *last;
    printf("%d", distance(str));

    return 0;
}

int distance(char *array) {

    int firstIndex;
    int lastIndex;

    for (int i = 0; i < strlen(array); ++i) {
        if (array[i] == 's') {
            firstIndex = i;
            break;
        }
    }
    for (int j = 0; j < strlen(array); ++j) {
        if (array[j] == 's') {
            lastIndex = j;
        }
    }
    return lastIndex - firstIndex -1;

}