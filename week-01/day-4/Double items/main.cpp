#include <iostream>
#include <string>

int main(int argc, char* args[]) {

    // - Create an array variable named `numList`
    //   with the following content: `[3, 4, 5, 6, 7]`
    // - Double all the values in the array

    int numList[] = {3, 4, 5, 6, 7};

        for (int i = 0; i < sizeof(numList)/ sizeof(int); i++){
            numList[i]= numList[i] * 2;
        }

    for (int g = 0; g < sizeof(numList)/ sizeof(numList[0]); g++) {
        std::cout << numList[g] << std::endl;
    }
    return 0;
}