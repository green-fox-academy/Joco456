#include <stdio.h>
#include <stdlib.h>

// please allocate a 10 long array and fill it with even numbers
// please allocate a 10 long array and fill it with odd numbers
// select an array, and push the elements into the another array
// print the array in descending order
// delete the arrays after you don't use them

int main() {
    int *evenNumberArray;
    int *oddNumberArray;
    int size = 10;
    int temp;

    evenNumberArray = (int *) calloc(size, sizeof(int));
    oddNumberArray = (int *) calloc(size, sizeof(int));

    for (int i = 0; i < size; ++i) {
        evenNumberArray[i] = i * 2;
        oddNumberArray[i] = 2 * i + 1;
    }

    evenNumberArray = (int *) realloc(evenNumberArray, 2 * size * sizeof(int));

    for (int j = 0; j < 10; ++j) {
        evenNumberArray[10 + j] = oddNumberArray[j];
    }

    for (int l = 0; l < 20; ++l) {
        for (int i = l + 1; i < 20; ++i) {
            if (evenNumberArray[l] < evenNumberArray[i]) {
                temp = evenNumberArray[l];
                evenNumberArray[l] = evenNumberArray[i];
                evenNumberArray[i] = temp;
            }
        }
    }

    for (int k = 0; k < 20; ++k) {
        printf("%d\n", evenNumberArray[k]);
    }

    free(evenNumberArray);
    free(oddNumberArray);
    evenNumberArray = NULL;
    oddNumberArray = NULL;

    return 0;
}