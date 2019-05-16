#include <stdio.h>
#include <stdlib.h>

// Prompt the user to enter a number. -> This number will be X.
// Allocate memory for X numbers.
// Prompt the user to enter X numbers.
// Allocate memory for Y numbers, which is the sum of the X numbers.
// Fill that array with from 1 to Y, then print them.

int main() {
    int x;
    int sum = 0;
    int *arrayOfNumbers;

    printf("Please enter a number\n");
    scanf("%d", &x);

    arrayOfNumbers = (int *) malloc(x * sizeof(int));

    printf("Please enter %d numbers\n", x);

    for (int i = 0; i < x; ++i) {
        scanf("%d", &arrayOfNumbers[i]);
        sum = sum + arrayOfNumbers[i];
    }

    arrayOfNumbers = (int *) realloc(arrayOfNumbers, sum * sizeof(int));

    for (int j = 1; j <= sum; ++j) {
        arrayOfNumbers[j - 1] = j;
    }

    for (int k = 0; k < sum; ++k) {
        printf("%d\n", arrayOfNumbers[k]);
    }

    free(arrayOfNumbers);
    arrayOfNumbers = NULL;

    return 0;
}