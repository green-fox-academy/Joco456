
#include <iostream>
#include <string>

int main(int argc, char* args[]) {

    // - Create an array variable named `r`
    //   with the following content: `[54, 23, 66, 12]`
    // - Print the sum of the second and the third element

    int r[] = {54, 23, 12};

    int sum = r[1] + r[2];
    std::cout << "sum of the second and the third element: " << sum << std::endl;

    return 0;
}