#include <iostream>
#include <string>

int doubling (int a);

int main(int argc, char* args[]) {

    // - Create an integer variable named `baseNum` and assign the value `123` to it
    // - Create a function called `doubling` that doubles it's input parameter and returns with an integer
    // - Print the result of `doubling(baseNum)`

    int baseNum = 123;
    int result = doubling(baseNum);


    std::cout << result << std::endl;


    return 0;
}

    int doubling (int a){

        return  a*2;
}
