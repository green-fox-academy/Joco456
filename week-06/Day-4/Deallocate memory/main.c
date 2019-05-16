#include <stdio.h>
#include <stdlib.h>

// with malloc
// please allocate a 10 long array and fill it with even numbers then print the whole array
// please deallocate memory without using free


int main()
{
    int *numArray;
    int size = 10;

    numArray = (int *)malloc(size * sizeof(int));

    for (int i = 0; i <= 10 ; i++) {
        numArray[i] = i*2;
    }

    for (int j = 0; j < size ; ++j) {
        printf("%d\n", numArray[j]);
    }

    numArray = realloc(numArray, 0);
    numArray = NULL;







    return 0;
}