#include <iostream>
//Given a string, compute recursively a new string where
//all the adjacent chars are now separated by a *
std::string starAdder (std::string oldString, int index);


int main() {
    std::string originalString = "wwwxxxyyy";
    std::cout << "The original string is: " << originalString << ": and the new one is: " << starAdder(originalString, 0) << std:: endl;

    return 0;
}
std::string starAdder (std::string oldString, int index){

    if (index >= oldString.length()-1)
        return oldString;

    oldString.insert(index+1,1,'*');
    return starAdder(oldString, index+2);


}