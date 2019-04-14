#include <iostream>
#include <vector>
int main() {
    //Create a list with the following items.
    //Eggs, milk, fish, apples, bread and chicken

    std::vector<std::string> shoppingList = {"eggs", "milk", "fish", "apples", "bread", "chicken"};
    //Do we have milk on the list?
    for (int i = 0; i < shoppingList.size() ; ++i) {
        if (shoppingList[i] == "milk"){
            std::cout << "We have milk on the list" << std::endl;
            break;
        } else if (i == shoppingList.size() - 1){
            std::cout << "We dont have milk on the list" << std::endl;
            break;
        }
    }
    //Do we have bananas on the list?
    for (int i = 0; i < shoppingList.size() ; ++i) {
        if (shoppingList[i] == "bananas"){
            std::cout << "We have milk on the list" << std::endl;
            break;
        } else if (i == shoppingList.size() - 1){
            std::cout << "We dont have bananas on the list" << std::endl;
            break;
        }
    }




    return 0;
}