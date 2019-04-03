#include <iostream>

int main(int argc, char* args[]) {

    // Define several things as a variable then print their values
    // Your name as a string
    // Your age as an integer
    // Your height in meters as a double
    // Whether you are married or not as a boolean

    std::string name = "Jozsef Varga";
    int age = 28;
    double height = 1.84;
    bool married = false;

    std::cout << "My name is: " << name << std::endl;
    std::cout << "My age is: " << age << std::endl;
    std::cout << "My height is (m): " << height << std::endl;
    std::cout << "Am I married? (0 is no, 1 is yes): " << married << std::endl;


    return 0;
}