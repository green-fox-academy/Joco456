
#include <iostream>
#include <string>

int main(int argc, char* args[]) {

    // Create a program that prints all the even numbers between 0 and 500

    int i = 1;

    while (i < 501) {
        if (i%2==0){
            std::cout << i << std::endl;
        }
        i++;
    }

    return 0;
}