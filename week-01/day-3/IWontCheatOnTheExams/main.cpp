#include <iostream>
#include <string>

int main(int argc, char* args[]) {

    // Create a program that writes this line 100 times:
    // "I won't cheat on the exam!"

    std::string sentence;

    int a =1;

     for (a=0; a<101; a++){
         std::cout << "I won't cheat on the exam!" << std::endl;
     }

    return 0;
}