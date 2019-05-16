#include <stdio.h>
#include <stdlib.h>

// with malloc
// please allocate a 10 long array and fill it with 5!! numbers from 0 to 4, then print the whole array
// please delete the array before the program exits


int main()
{
    int *numArray;
    int size = 10;

    numArray = (int *)malloc(size * sizeof(int));

    for (int i = 0; i <= 4 ; ++i) {
        numArray[i] = i;
    }

    for (int j = 0; j < size ; ++j) {
        printf("%d\n", numArray[j]);
    }

    free(numArray);
    numArray = NULL;


    //int* pointer = NULL;

    return 0;
}