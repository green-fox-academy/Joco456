#include <stdio.h>
#include <stdlib.h>
#include <math.h>

//Read the size of a matrix(don't have to be squared matrix) from the console.
//Allocate memory dynamically for the elements of the matrix, then read the elements.
//Create a function which can calculate the n-th percentile of the elements.
//Calculate the 80-th and the 90-th percentile.


int percentileCalculator(int *matrix, int size,  int thPercentile);

int main() {
    int size;
    int *matrix;
    printf("Enter the size of the matrix\n");
    scanf("%d", &size);

    matrix = (int *) malloc(size * sizeof(int));

    for (int i = 0; i < size; ++i) {
        printf("Enter the number %d \n", i + 1);
        scanf("%d", &matrix[i]);
    }



    free(matrix);
    matrix = NULL;

    return 0;
}


int percentileCalculator(int *matrix, int size, int thPercentile) {

    int temp;
    for (int i = 0; i < size; i++) {
        for (int j = i + 1; j < size; j++) {
            if (matrix[i] > matrix[j]) {
                temp = matrix[i];
                matrix[i] = matrix[j];
                matrix[j] = temp;
            }
        }
    }

    float percentage = size /100 * thPercentile;

    if (percentage - (int)percentage != 0) {
        int roundedPercentage = roundf(percentage);
    }





}