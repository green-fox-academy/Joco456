#include <iostream>

int main(int argc, char *args[]) {

    // Write a program that reads a number from the standard input, then draws a
    // square like this:
    //
    //
    // %%%%%
    // %%  %
    // % % %
    // %  %%
    // %%%%%
    //
    // The square should have as many lines as the number was

    int numlines = 0;
    std::cout << "Enter the number of lines" << std::endl;
    std::cin >> numlines;

    for (int i = 0; i < numlines; i++) {
        std::cout << "%";

    }
    std::cout << std::endl;
    for (int i = 0; i < numlines - 2; ++i) {
        std::cout << "%";
        for (int j = 0; j < numlines - 2; ++j) {
            if (i == j) {
                std::cout << "%";
            } else {
                std::cout << " " ;
            }

        }
        std::cout << "%" << std::endl;
    }


    for (int i = 0; i < numlines; i++) {
        std::cout << "%";
    }

    return 0;
}