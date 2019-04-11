#include <iostream>
//Given a string, compute recursively a new string
//where all the 'x' chars have been removed.
std::string stringRemover (std::string oldString, int index);

int main() {

    std::string originalString = "wwwxxxyyy";

    std::cout << "The original string is: " << originalString << ": and the new one is: " << stringRemover(originalString, 0) << std:: endl;

    return 0;
}
std::string stringRemover (std::string oldString, int index) {

    if (index > oldString.length())
        return oldString;
    if (oldString[index] == 'x') {
        oldString.erase(index, 1);
        index--;
    }
    return stringRemover(oldString, index+1);

}

