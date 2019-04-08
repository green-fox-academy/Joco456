
#include <iostream>
int *minimum (int array[], int size);
int main()
{
    // Create a function which takes an array (and its length) as a parameter
    // and returns a pointer to its minimum value

    int numbers[] = {12, 4, 66, 101, 87, 3, 15};
    int size = sizeof(numbers) / sizeof(numbers[0]);
    int *min = minimum(numbers, size);
    std::cout << *min << std::endl;

    return 0;
}

int *minimum (int array[], int size)
{
    int smallest = array[0];
    for (int i = 0; i< size; i++) {
        if (array[i] < smallest) {
            smallest = array[i];
        }
    }
       int *smallestPointer = &smallest;
        return  smallestPointer;


}