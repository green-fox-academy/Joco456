#include <iostream>
//Given a string, compute recursively (no loops) a new string where
//all the lowercase 'x' chars have been changed to 'y' chars.
std::string newString (std::string oldString, int index);

int main() {

    std::string originalString = "wwwxxxzzz";


    std::cout << "The original sting is: " << originalString << "and the new one is: " << newString(originalString,0 ) << std::endl;

    return 0;
}

std::string newString (std::string oldString, int index ){
    if (index > oldString.length())
        return oldString;
    if (oldString[index] == 'x'){
        oldString[index] = 'y';
        }

    return newString(oldString,index+1);

}