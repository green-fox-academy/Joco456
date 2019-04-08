#include <iostream>
int indexReturn ( int array [], int size, int a);



int main()
{
    // Create a function which takes an array (and it's lenght) and a number as a parameter
    // the function should return index where it found the given value
    // if it can't find the number return -1

    int arrayfive [5] = {2, 24, 3, 4, 5};
    int number ;
    int arraysize = sizeof(arrayfive)/ sizeof(arrayfive[5]);
    std:: cout << "Please enter the value, that you are looking for!" << std::endl;
    std:: cin >> number;
    std:: cout <<"The index of this number is: " << indexReturn(arrayfive, arraysize, number) << std:: endl;

    return 0;
}

int indexReturn(int array [], int size, int a) {
    int found = -1;
    for (int i = 0; i < size ; ++i) {
        if (array[i] == a) {
            found = i;
        }
    }
    return found;

}

