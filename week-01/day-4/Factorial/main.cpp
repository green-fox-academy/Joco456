
#include <iostream>
#include <string>

int main(int argc, char* args[]) {
int factorio (int x);
    // - Create a function called `factorio`
    //   it should calculate its input's factorial.
    //   it should not return it, but take an additional integer parameter and overwrite its value.

    int factorial = 8;
    int y = factorio(factorial);
    std::cout<< y << std::endl;

    return 0;
}
        int factorio (int x) {

                int g = 1;
                for (int i = 2; i <= x; i++) {
                    g *= i;
                }
            return g;
            }
