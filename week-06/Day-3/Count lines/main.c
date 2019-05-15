#include <stdio.h>
#include <string.h>

// Write a function that takes a filename as string,
// then returns the number of lines the file contains.
// It should return zero if it can't open the file

int lineCounter(char name[]);

int main() {
    char name[] = "../my-file.txt";
    printf("%d", lineCounter(name));

    return 0;
}

int lineCounter(char name[]) {
    int counter = 0;
    FILE *file = fopen(name, "r");

    if (file == NULL) {
        return 0;
    } else {
        char buffer[30];
        while (fgets(buffer, 30, file)) {
            counter++;
        }
    }
    return counter;
}