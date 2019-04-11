#include <iostream>
int ears (int a);
int main() {

    int bunnies = 4;

    std::cout << "The number of ears: " << ears(bunnies) << std:: endl;

    return 0;
}

int ears (int a){
    if (a == 1)
        return 2;
    if (a % 2 == 0)
        return 3 + (ears(a-1));
    if (a % 3 == 0)
        return 2 + (ears(a-1));
}