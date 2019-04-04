#include <iostream>
#include <string>

int main(int argc, char* args[]) {

    // - Create an array variable named `p1`
    //   with the following content: `[1, 2, 3]`
    // - Create an array variable named `p2`
    //   with the following content: `[4, 5]`
    // - Print if `p2` has more elements than `p1`

        int p1[] = {1, 2, 3};
        int p2[] = {4, 5,};
        int p1Size = sizeof(p1);
        int p2Size = sizeof(p2);

        if (p2Size > p1Size){
            std::cout << "P2 array has more element" << std:: endl;
        }
    return 0;
}